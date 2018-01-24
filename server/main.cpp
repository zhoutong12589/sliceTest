
#include <iostream>
#include <Ice/Ice.h>
#include "../head.h"
using namespace std;
using namespace modes;

class actionsI : public actions
{
    virtual void printString(const ::std::string& str, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"printString start"<<endl;
        sleep(5);
        cout<<str<<endl;
        cout<<"printString end"<<endl;
    }
    
    virtual int printStringWithRet(const ::std::string& str, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"printStringWithRet start"<<endl;
        sleep(5);
        cout<<str<<endl;
        cout<<"printStringWithRet end"<<endl;
        
        return 0;
    }
    virtual bool getnum(int n1, int n2, int& num, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        num = n1 * n2;
        sleep(5);
        if(num > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    virtual ::Ice::Int compute(::Ice::Int n1, ::Ice::Int n2, const ::Ice::Current& current = ::Ice::emptyCurrent)
    {
        cout<<"compute start"<<endl;
        sleep(5);
        cout<<"compute end"<<endl;
        return n1 * n2;
    }
    
    
    virtual void compute_async(const AMD_actions_computePtr& ptr, ::Ice::Int n1, ::Ice::Int n2)
    {
        
    }
};

int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try {
        ic = Ice::initialize(argc, argv);
        Ice::ObjectAdapterPtr adapter
        = ic->createObjectAdapterWithEndpoints(
        "SimpleAdapter", "default -p 10000");
        
        Ice::ObjectPtr object = new actionsI;
        adapter->add(object, ic->stringToIdentity("SimplePrinter"));
        
        adapter->activate();
        cout<<"activate ok"<<endl;
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



