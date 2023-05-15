#include<iostream>
using namespace std;

template<typename X>
class Array
{
    private:
    int capacity;
    int lastindex;
    X *ptr;
    public:
    Array(int);
    Array(Array &);
    bool isEmpty();
    void append(X);
    void insert(int,X);
    X get(int);
    int count();
    ~Array();
    int find(X);
    bool isFull();
    void del(int);
    void edit(int,X);
    int getcapacity();
    void operator=(Array &);
};
template<typename X> void Array<X>::operator=(Array &arr)
{
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(ptr!=NULL)
      delete []ptr;
    ptr=new X[capacity];
    for(int i=0;i<=lastindex;i++)
     ptr[i]=arr.ptr[i];

}
template<typename X> int Array <X>::getcapacity()
{
   return capacity;
}
template<typename X>Array<X>::Array(Array &arr)
{
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    ptr=new X[capacity];
    for(int i=0;i<=lastindex;i++)
      ptr[i]=arr.ptr[i];
}
template<typename X>void Array<X>::edit(int index,X data)
{
    if(index>=0 && index<=lastindex)
     ptr[index]=data;
}
template<typename X>void Array<X>::del(int index)
{
    if(isEmpty())
     cout<<endl<<"Array is Empty";
    else if(index<0||index>lastindex)
     cout<<endl<<"Invalid index";
    else
    {
     for(int i=index;i<lastindex;i++)
      ptr[i]=ptr[i+1];
      lastindex--;
    }   
}
template<typename X>bool Array<X>::isFull()
{
    return lastindex==capacity-1;
}
template<typename X>int Array<X>::find(X data)
{
    int i;
    for(i=0;i<=lastindex;i++)
       if(ptr[i]==data)
         return i;
   
    return -1;
}
template<typename X>Array<X>::~Array()
{
    delete[] ptr;
}
template<typename X>int Array<X>::count()
{
    return lastindex+1;
}
template<typename X>X Array<X>::get(int index)
{
    if(index>=0 && index <=lastindex)
      return ptr[index];
    cout<<endl<<"invalid index or Empty array";
    return -1;
}
template<typename X>void Array<X>::insert(int index, X data)
{
    int i;
    if(lastindex==capacity-1)
     cout<<"Array is all ready full";
    else if(index<0 || index>lastindex+1)
    {
        cout<<"Invalid index";
    } 
    else  
    {
        for(i=lastindex; i>=index;i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[index]=data;
        lastindex++;

    }
}

template<typename X>void Array<X>::append(X data)
{
    if(lastindex == capacity-1)
    {
        cout<<endl;
        cout<<"Array is already full";
    }
    else
    {
        lastindex++;
        ptr[lastindex]=data;
    }
}

template<typename X>bool Array<X>::isEmpty()
{
    return lastindex==-1;

}

template<typename X>Array<X>::Array(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr = new X[capacity];
}