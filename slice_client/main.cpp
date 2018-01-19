
#include <Ice/Ice.h>
#include "../slice_h/test1.h"
#include <string>
using namespace std;
using namespace mod;

class AMI_Printer1_printI : public mod::AMI_Printer1_print
{
    virtual void ice_response(::Ice::Int n)
    {
        cout<<"get the copy:"<<n<<endl;
    }
    virtual void ice_exception(const ::Ice::Exception& ex)
    {
        cout << "interpolate failed: "  << endl;
    }
};

class AMI_Printer1_getStringI : public mod::AMI_Printer1_getString
{
    
    virtual void ice_response(::Ice::Int n)
    {
        cout<<"get the copy:"<<n<<endl;
    }
    virtual void ice_exception(const ::Ice::Exception& ex)
    {
        cout << "interpolate failed: "  << endl;
    }
};







class showtimeI : public showtime
{
public:
    string format(const Ice::Current&);    
};
//类在本地实例化后方法的调用就是本地方法，调用名称虽然相同，可是方法体可以不同
string showtimeI::format(const Ice::Current&)
{
   stringstream os;
    os << h<<m;
    
    return os.str();
}



//返回值为类的工厂方法
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

//工厂方法实现结束

























int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try {
        
        ic = Ice::initialize(argc, argv);
        Ice::ObjectPrx base1 = ic->stringToProxy(
        "SimplePrinter1:default -p 10000");
        Printer1Prx printer1 = Printer1Prx::checkedCast(base1);
        //注册工厂类
        ic->addObjectFactory(new timefactoryI(), "::mod::showtime");
        
        if (!printer1)
        throw "Invalid proxy";

        char c;
        do
        {
            cout << "==> ";
            cin >> c;
              
            if(c == 'i')
            {
                //ami调用，同时拥有同步和异步调用，没有async的调用时同步调用，即客户端需要阻塞
                //直到服务端完成，如果有返回值则直到服务端完成才返回
                int n= printer1->print("0");
                cout<<n<<endl;
            }
            if(c == 'd')
            {
                //ami调用，异步调用，调用后直接返回，在服务端完成后进行返回
                //返回后调用客户端AMI_Printer1_printI实现类的ice_response方法，
                //方法的参数为调用函数所需的返回参数与out列表的顺序
                AMI_Printer1_printPtr cb = new AMI_Printer1_printI;
                printer1->print_async(cb, "5000");
                cout<<"call"<<endl;
            }

            if(c == '2')
            {
                //amd调用，只有异步调用，客户端需要等待，直到服务端调用ice_response
                //客户端才返回，此情况是服务器面对巨量的请求，但是客户端可以等待的情况
                //服务器内将请求放入队列，队列内调用计算函数后再调用ice_response执行返回
                int n = printer1->theInt(100);
                cout<<n<<endl;
            }
            if(c == '3')
            {
                //在ice定义时元数据为["ami","amd"]，不再包含同步调用，全部为异步调用
                //与amd调用相同，客户端等待，服务器端处理完毕后调用ice_response返回，客户端才返回
                int n = printer1->getString("300");
                cout<<n<<endl;
            }
            if(c == '4')
            {
                //服务器与客户端均为异步调用
                //执行调用后，客户端直接返回，服务端放入队列，在执行完毕后执行ice_response函数才返回
                //执行时机由服务器决定，服务器执行后调用客户端AMI_Printer1_getStringI实现类的
                //ice_response函数，返回计算值
                AMI_Printer1_getStringPtr cb1 = new AMI_Printer1_getStringI;
                printer1->getString_async(cb1, "400");
                cout<<666<<endl;
            }
            if(c == '5')
            {
                //返回类，类中只有变量没有方法，无需实现工厂类，返回类型为类的ptr
                datetimePtr ptr1 = printer1->getdates();
                cout<<"ptr1->hours:"<<ptr1->hours<<endl;
            }
            if(c == '6')
            {
                //返回类，类中有方法需要在调用端实现工厂类，这样在调用端调用返回类时，
                //才知道需要实例化的到底是哪个类，否则就是带有虚函数的类，是不能实例化的
                showtimePtr ptr2 = printer1->getshow();
                cout<<ptr2->format()<<endl;
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


