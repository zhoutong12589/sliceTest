#include <Ice/SliceChecksums.h>


module modes
{
    //接口与类唯一的区别是不可继承
    interface actions
    {
        //普通调用，无返回值，假设需要5s，无返回值也需要等待服务端计算结束才返回
        //加入idempotent参数，对于服务器来说调用一次还是两个结果都是一样的，这样如果发生错误客户端能够更加积极的去恢复
        //可以通过对比生成的cpp文件对比来发现生成的区别
        idempotent void printString(string str);
        //一般调用，有返回值，中间假设需要5s
        int printStringWithRet(string str);
        
        //返回true，num=n1*n2
        bool getnum(int n1, int n2, out int num);
        
        //服务器异步，amd即可应用到方法，也可应用到接口、类
        ["amd"] int compute(int n1, int n2);
        
    };
    
    //类
    class base
    {
        int name;
        //warning: classes with operations are deprecated
        //在3.7中包含操作的类是不建议的
        //string getName();
    };
    
    class stu extends base
    {
        int num;
    }
    
    //结构体
    struct node
    {
        int n1;
        int n2;
    }
    
    interface getAction
    {
        //接口内不能有变量
        //int num;
        
        //返回接口的指针.映射后返回的是代理
        actions* getactions();
        stu getStu(stu s);
        
        node getNode(node n);
        
        //返回服务端的checksums
        SliceChecksumDict getChecksums();
    }
    
    
};


