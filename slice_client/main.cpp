
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
//���ڱ���ʵ�����󷽷��ĵ��þ��Ǳ��ط���������������Ȼ��ͬ�����Ƿ�������Բ�ͬ
string showtimeI::format(const Ice::Current&)
{
   stringstream os;
    os << h<<m;
    
    return os.str();
}



//����ֵΪ��Ĺ�������
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

//��������ʵ�ֽ���

























int main(int argc, char* argv[])
{
    int status = 0;
    Ice::CommunicatorPtr ic;
    try {
        
        ic = Ice::initialize(argc, argv);
        Ice::ObjectPrx base1 = ic->stringToProxy(
        "SimplePrinter1:default -p 10000");
        Printer1Prx printer1 = Printer1Prx::checkedCast(base1);
        //ע�Ṥ����
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
                //ami���ã�ͬʱӵ��ͬ�����첽���ã�û��async�ĵ���ʱͬ�����ã����ͻ�����Ҫ����
                //ֱ���������ɣ�����з���ֵ��ֱ���������ɲŷ���
                int n= printer1->print("0");
                cout<<n<<endl;
            }
            if(c == 'd')
            {
                //ami���ã��첽���ã����ú�ֱ�ӷ��أ��ڷ������ɺ���з���
                //���غ���ÿͻ���AMI_Printer1_printIʵ�����ice_response������
                //�����Ĳ���Ϊ���ú�������ķ��ز�����out�б��˳��
                AMI_Printer1_printPtr cb = new AMI_Printer1_printI;
                printer1->print_async(cb, "5000");
                cout<<"call"<<endl;
            }

            if(c == '2')
            {
                //amd���ã�ֻ���첽���ã��ͻ�����Ҫ�ȴ���ֱ������˵���ice_response
                //�ͻ��˲ŷ��أ�������Ƿ�������Ծ��������󣬵��ǿͻ��˿��Եȴ������
                //�������ڽ����������У������ڵ��ü��㺯�����ٵ���ice_responseִ�з���
                int n = printer1->theInt(100);
                cout<<n<<endl;
            }
            if(c == '3')
            {
                //��ice����ʱԪ����Ϊ["ami","amd"]�����ٰ���ͬ�����ã�ȫ��Ϊ�첽����
                //��amd������ͬ���ͻ��˵ȴ����������˴�����Ϻ����ice_response���أ��ͻ��˲ŷ���
                int n = printer1->getString("300");
                cout<<n<<endl;
            }
            if(c == '4')
            {
                //��������ͻ��˾�Ϊ�첽����
                //ִ�е��ú󣬿ͻ���ֱ�ӷ��أ�����˷�����У���ִ����Ϻ�ִ��ice_response�����ŷ���
                //ִ��ʱ���ɷ�����������������ִ�к���ÿͻ���AMI_Printer1_getStringIʵ�����
                //ice_response���������ؼ���ֵ
                AMI_Printer1_getStringPtr cb1 = new AMI_Printer1_getStringI;
                printer1->getString_async(cb1, "400");
                cout<<666<<endl;
            }
            if(c == '5')
            {
                //�����࣬����ֻ�б���û�з���������ʵ�ֹ����࣬��������Ϊ���ptr
                datetimePtr ptr1 = printer1->getdates();
                cout<<"ptr1->hours:"<<ptr1->hours<<endl;
            }
            if(c == '6')
            {
                //�����࣬�����з�����Ҫ�ڵ��ö�ʵ�ֹ����࣬�����ڵ��ö˵��÷�����ʱ��
                //��֪����Ҫʵ�����ĵ������ĸ��࣬������Ǵ����麯�����࣬�ǲ���ʵ������
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


