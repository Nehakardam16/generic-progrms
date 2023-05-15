#include<iostream>
#include"array.cpp"
using namespace std;
int main()
{
    Array <int> arr(5);
    arr.append(30);
    arr.append(40);
    arr.append(60);
    arr.insert(1,45);
    arr.insert(2,63);
    for(int i=0;i<arr.count();i++)
    cout<<arr.get(i)<<" ";
    cout<<endl;
    Array <double> arr1(5);
    arr1.append(6.5);
    arr1.append(4.6);
    arr1.append(5.5);
    arr1.insert(1,8.6);
    arr1.insert(2,9.0);
    for(int i=0;i<arr1.count();i++)
    cout<<arr1.get(i)<<" ";
    cout<<endl;
    Array <char> arr6(5);
    arr6.append('a');
    arr6.append('b');
    arr6.append('c');
    arr6.insert(1,'d');
    arr6.insert(2,'e');
    for(int i=0;i<arr6.count();i++)
    cout<<arr6.get(i)<<" ";
    
    
    return 0;
}