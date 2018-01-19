module mod
{
    class datetime
    {
        int hours;
        int mins;
    };
    class showtime
    {
        int h;
        int m;
        string format();
    };
    interface Printer1
    {
        ["ami"] int print(string s);
        ["amd"] int theInt(int n);
        ["ami","amd"] int getString(string s);
        datetime getdates();
        showtime getshow();
    };
    
};
