
module modes
{
    interface actions
    {
        //��ͨ���ã��޷���ֵ��������Ҫ5s���޷���ֵҲ��Ҫ�ȴ�����˼�������ŷ���
        void printString(string str);
        //һ����ã��з���ֵ���м������Ҫ5s
        int printStringWithRet(string str);
        
        //����true��num=n1*n2
        bool getnum(int n1, int n2, out int num);
        
        //�������첽
        ["1111111"] int compute(int n1, int n2);
    };
};


