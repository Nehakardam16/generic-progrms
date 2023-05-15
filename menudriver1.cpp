#include<iostream>
#include"example1.cpp"
using namespace std;
int main()
{
    time t1,t2,t3;
    t1.setdata(3,45,60);
    t2.setdata(3,40,45);
    t3=bigger(t1,t2);
    t3.showdata();
    cout<<endl<<bigger(10,20);
    cout<<endl<<bigger(4.5,3.2);
    cout<<endl;
    return 0;
}