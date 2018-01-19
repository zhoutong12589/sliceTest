

#include <Ice/Ice.h>
#include "../slice_h/test1.h"
#include <string>
using namespace std;
using namespace mod;
class PrinterI1 : public Printer1
{
public:
    int print(const string& s, const Ice::Current&);
    void theInt_async(const ::mod::AMD_Printer1_theIntPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current());
    void getString_async(const ::mod::AMD_Printer1_getStringPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current());
    datetimePtr getdates(const Ice::Current&);
    showtimePtr getshow(const Ice::Current&);

};

int PrinterI1::print(const string& s, const Ice::Current&)
{
    cout << "start" << endl;
    sleep(5);
    cout<<s<<endl;
    return 7;
}
void PrinterI1::theInt_async(const ::mod::AMD_Printer1_theIntPtr& cb, ::Ice::Int n, const ::Ice::Current&)
{
    cout<<"AMD got"<<n<<endl;
    sleep(5);
    cout<<"AMD end"<<endl;
    cb->ice_response(n + 1);
}

void PrinterI1::getString_async(const ::mod::AMD_Printer1_getStringPtr& cb, const ::std::string& s, const ::Ice::Current& )
{
    cout<<"AMD got:"<<s<<endl;
    sleep(5);
    cout<<"AMD end"<<endl;
    cb->ice_response(999);
}

//ÀàÊµÏÖ

datetimePtr PrinterI1::getdates(const Ice::Current&)
{
    
    datetimePtr p = new datetime;
    p->hours = 10;
    p->mins = 11;
    
    
    return p;
}

class showtimeI : public showtime
{
public:
    string format(const Ice::Current&);    
};

string showtimeI::format(const Ice::Current&)
{
    ostringstream os;
    os <<m<<h;
    
    return os.str();
}

showtimePtr PrinterI1::getshow(const Ice::Current&)
{
    showtimePtr p = new showtimeI;
    p->h = 0;
    p->m = 1;
    cout<<p->format()<<endl;
    return p;
}
/*
class timefactoryI : public Ice::ObjectFactory
{
public:
    timefactoryI();
    virtual ~timefactoryI();
    Ice::ObjectPtr create(const string& type);
    void destroy();
};

timefactoryI::timefactoryI()
{
}
timefactoryI::~timefactoryI()
{
}
void timefactoryI::destroy()
{
}

Ice::ObjectPtr timefactoryI::create(const string& type)
{
    if ( "::mod::showtime" == type ) 
    {

	    return new showtimeI;

    }
    return NULL;
}

*/


int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try {
        ic = Ice::initialize(argc, argv);
        Ice::ObjectAdapterPtr adapter
        = ic->createObjectAdapterWithEndpoints(
        "SimplePrinterAdapter", "default -p 10000");
        //ic->addObjectFactory(new timefactoryI(), "::mod::showtime");
        
        Ice::ObjectPtr object1 = new PrinterI1;
        adapter->add(object1,
        ic->stringToIdentity("SimplePrinter1"));
        
        adapter->activate();
        ic->waitForShutdown();
    } catch (const Ice::Exception& e) { 
        cerr << e << endl;
        status = 1;
    } catch (const char* msg) {
        cerr << msg << endl;
        status = 1;
    }
    if (ic) {
        try {
            ic->destroy();
        } catch (const Ice::Exception& e) {
            cerr << e << endl;
            status = 1;
        }
    }
    return status;
}

