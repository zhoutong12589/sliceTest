
#include <iostream>
#include <Ice/Ice.h>
#include "../head.h"
using namespace std;
using namespace modes;

//客户端异步实现
class MyCallback : public IceUtil::Shared 
{
public:
    void finished(const Ice::AsyncResultPtr& r) 
    {
        actionsPrx e = actionsPrx::uncheckedCast(r->getProxy());
        try
        {
            int n = e->end_printStringWithRet(r);
            cout << "n: " << n<< endl;
        }
        catch(const Ice::Exception& ex)
        {
                cerr << "Exception is: " << ex << endl;
        }
     }
};
typedef IceUtil::Handle<MyCallback> MyCallbackPtr;





class getnumCallback : public IceUtil::Shared 
{
public:
    void finished(const Ice::AsyncResultPtr& r) 
    {
        actionsPrx e = actionsPrx::uncheckedCast(r->getProxy());
        try
        {
            int num = 0;
            bool b = e->end_getnum(num, r);
            cout << "end_getnum, num: " << num<< endl;
        }
        catch(const Ice::Exception& ex)
        {
                cerr << "Exception is: " << ex << endl;
        }
     }
};
typedef IceUtil::Handle<getnumCallback> getnumCallbackPtr;


class computeCallback : public IceUtil::Shared 
{
public:
    void finished(const Ice::AsyncResultPtr& r) 
    {
        actionsPrx e = actionsPrx::uncheckedCast(r->getProxy());
        try
        {
            int num = 0;
            num = e->end_compute(r);
            cout << "compute, num: " << num<< endl;
        }
        catch(const Ice::Exception& ex)
        {
                cerr << "Exception is: " << ex << endl;
        }
     }
};
typedef IceUtil::Handle<computeCallback> computeCallbackPtr;



int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try {
        
        ic = Ice::initialize(argc, argv);
        Ice::ObjectPrx base = ic->stringToProxy(
        "SimplePrinter:default -p 10000");
        actionsPrx Printer = actionsPrx::uncheckedCast(base);
        if (!Printer)
        throw "Invalid proxy actionsPrx";

        Ice::ObjectPrx getAction = ic->stringToProxy(
        "SimpleAction:default -p 10000");
        getActionPrx ac = getActionPrx::uncheckedCast(getAction);
        if (!ac)
        throw "Invalid proxy getActionPrx";
        
        
        char c;
        do
        {
            cout << "==> ";
            cin >> c;
              
            if(c == '1')
            {
                //普通调用，无返回值
                Printer->printString("1");
                cout<<"printString ok"<<endl;
            }
            
            if(c == '2')
            {
                //普通调用，有返回值
                int n = Printer->printStringWithRet("2");
                cout<<"printStringWithRet ok, n:"<<n<<endl;
            }
            
            if(c == '3')
            {
                //异步回调，在调用后直到完成自动调用回调函数
                MyCallbackPtr cb = new MyCallback;
                Ice::CallbackPtr d = Ice::newCallback(cb, &MyCallback::finished);
                Ice::AsyncResultPtr as = Printer->begin_printStringWithRet("3", d);
                cout<<"begin_printStringWithRet "<<endl;
                //int n = Printer->end_printStringWithRet(as);
                //cout<<"end_printStringWithRet, n:"<<n<<endl;
            }
            if(c == '4')
            {
                //异步调用，如果在调用begin_printStringWithRet后调用end_printStringWithRet，在没有完成整个操作前阻塞
                Ice::AsyncResultPtr as = Printer->begin_printStringWithRet("4");
                cout<<"begin_printStringWithRet "<<endl;
                int n = Printer->end_printStringWithRet(as);
                cout<<"end_printStringWithRet, n:"<<n<<endl;
            }
            if(c == '5')
            {
                int num = 0;
                Printer->getnum(2, 5, num);
                cout<<num<<endl;
            }
            if(c == '6')
            {
                getnumCallbackPtr cb = new getnumCallback;
                Ice::CallbackPtr d = Ice::newCallback(cb, &getnumCallback::finished);
                Printer->begin_getnum(2, 5, d);
                cout<<"begin_getnum"<<endl;
            }
            if(c == '7')
            {
                
                int n = Printer->compute(2, 5);
                cout<<"compute, n:"<<n<<endl;
            }
            if(c == '8')
            {
                computeCallbackPtr cb = new computeCallback;
                Ice::CallbackPtr d = Ice::newCallback(cb, &computeCallback::finished);
                Printer->begin_compute(3, 5, d);
                cout<<"begin_compute"<<endl;
            }
            if(c == '9')
            {
                stuPtr st = new stu;
                st->num = 1;
                st->name = 2;
                
                
                stuPtr s = ac->getStu(st);
                cout<<"getStu s->name:"<<s->name<<endl;
            }
            if(c == 'a')
            {
                node nn;
                nn.n1 = 1;
                nn.n2 = 2;
                
                node n = ac->getNode(nn);
                cout<<"getNode n.n2:"<<n.n2<<endl;
            }
            if(c == 'b')
            {
                cout<<"getactions start"<<endl;
                actionsPrx p = ac->getactions();
                cout<<"getactions end"<<endl;
            }
        }while(cin.good() && c != 'x');
        
    } 
    catch (const Ice::Exception& ex) {
        status = 1;
    } 
    catch (const char* msg) {
        status = 1;
    }
    if (ic)
        ic->destroy();
    return status;
}

