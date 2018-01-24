
module modes
{
    interface actions
    {
        //普通调用，无返回值，假设需要5s，无返回值也需要等待服务端计算结束才返回
        void printString(string str);
        //一般调用，有返回值，中间假设需要5s
        int printStringWithRet(string str);
        
        //返回true，num=n1*n2
        bool getnum(int n1, int n2, out int num);
        
        //服务器异步
        ["1111111"] int compute(int n1, int n2);
    };
};


