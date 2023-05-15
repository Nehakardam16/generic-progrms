#include<iostream>
using namespace std;
class time
{
    private:
    int hr,min,sec;
    public:
    void setdata(int hr,int min, int sec)
    {
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void showdata()
    {
        cout<<endl<<hr<<":"<<min<<":"<<sec;
    }

    bool operator>(time t)
    {
        if(hr>t.hr)
         return true;
         else if(hr<t.hr)
         return false;
         else if(min>t.min)
         return true;
         else if(min<t.min)
         return false;
         else if(sec>t.sec)
         return true;
         else 
         return false;
    }
    
    

};
/* funclion overloading

time bigger(time a,time b)
{
    if(a>b)
    return a;
    else
    return b;
}

int bigger(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}

double bigger(double a, double b)
{
    if(a>b)
    return a;
    else
    return b;
}
*/

template<typename X> // generic programing in c++ language
X bigger(X a, X b)
{
    if(a>b)
    return a;
    else
    return b;
}