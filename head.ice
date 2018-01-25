#include <Ice/SliceChecksums.h>


module modes
{
    //�ӿ�����Ψһ�������ǲ��ɼ̳�
    interface actions
    {
        //��ͨ���ã��޷���ֵ��������Ҫ5s���޷���ֵҲ��Ҫ�ȴ�����˼�������ŷ���
        //����idempotent���������ڷ�������˵����һ�λ��������������һ���ģ����������������ͻ����ܹ����ӻ�����ȥ�ָ�
        //����ͨ���Ա����ɵ�cpp�ļ��Ա����������ɵ�����
        idempotent void printString(string str);
        //һ����ã��з���ֵ���м������Ҫ5s
        int printStringWithRet(string str);
        
        //����true��num=n1*n2
        bool getnum(int n1, int n2, out int num);
        
        //�������첽��amd����Ӧ�õ�������Ҳ��Ӧ�õ��ӿڡ���
        ["amd"] int compute(int n1, int n2);
        
    };
    
    //��
    class base
    {
        int name;
        //warning: classes with operations are deprecated
        //��3.7�а������������ǲ������
        //string getName();
    };
    
    class stu extends base
    {
        int num;
    }
    
    //�ṹ��
    struct node
    {
        int n1;
        int n2;
    }
    
    interface getAction
    {
        //�ӿ��ڲ����б���
        //int num;
        
        //���ؽӿڵ�ָ��.ӳ��󷵻ص��Ǵ���
        actions* getactions();
        stu getStu(stu s);
        
        node getNode(node n);
        
        //���ط���˵�checksums
        SliceChecksumDict getChecksums();
    }
    
    
};


