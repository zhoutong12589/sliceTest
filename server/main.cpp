
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
    
    virtual void compute_async(const ::modes::AMD_actions_computePtr& cb, ::Ice::Int n1, ::Ice::Int n2, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"compute_async start"<<endl;
        sleep(5);
        cout<<"compute_async end"<<endl;
        
        cb->ice_response(n1 * n2);
    }
};


class getActionI : public getAction
{
    virtual stuPtr getStu(const stuPtr& s, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"getStu"<<endl;
        return s;
    }
    virtual node getNode(const node& n, const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"getNode"<<endl;
        return n;
    }
    virtual actionsPrx getactions(const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        cout<<"getactions 1"<<endl;
        Ice::CommunicatorPtr ic;
        
        ic = Ice::initialize();
        Ice::ObjectPrx base = ic->stringToProxy(
        "SimplePrinter:default -p 10000");
        actionsPrx Printer = actionsPrx::uncheckedCast(base);
        cout<<"getactions 2"<<endl;
        return Printer;
    }
    virtual ::Ice::SliceChecksumDict getChecksums(const ::Ice::Current& = ::Ice::emptyCurrent)
    {
        Ice::SliceChecksumDict localChecksums = Ice::sliceChecksums();
        
        return localChecksums;
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
        Ice::ObjectPtr object1 = new actionsI;
        adapter->add(object1, ic->stringToIdentity("SimplePrinter"));

        Ice::ObjectPtr object2 = new getActionI;
        adapter->add(object2, ic->stringToIdentity("SimpleAction"));
        
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



