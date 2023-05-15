#include<iostream>
#include"dyanimicarray.cpp"
using namespace std;
int main()
{
    DynArray <int> obj(5); //generic program for int type value
    obj.append(30);
    obj.append(45);
    obj.append(32);
    obj.append(28);
    obj.append(50);
    for(int i=0;i<obj.count();i++)
    cout<<obj.get(i)<<" ";
    cout<<endl;
    cout<<obj.size();
    cout<<endl;
    obj.append(39);
    obj.append(51);
    for(int i=0;i<obj.count();i++)
    cout<<obj.get(i)<<" ";
    cout<<endl;
    cout<<obj.size();
    cout<<endl;
    DynArray <double> obj1(6);//generic program for double type value
    obj1.append(30.0);
    obj1.append(45.0);
    obj1.append(32.0);
    obj1.append(28.0);
    obj1.append(50.0);
    obj1.append(60.0);
    for(int i=0;i<obj1.count();i++)
    cout<<obj1.get(i)<<" ";
    cout<<endl;
    cout<<obj1.size();
    cout<<endl;
    obj1.append(39.0);
    obj1.append(51.0);
    for(int i=0;i<obj1.count();i++)
    cout<<obj1.get(i)<<" ";
    cout<<endl;
    cout<<obj1.size();
    
    return 0;
}
