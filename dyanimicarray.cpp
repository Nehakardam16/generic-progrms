#include<iostream>
using namespace std;
template<typename  X>
class DynArray
{
    private:
    int capacity;
    int lastindex;
    X *ptr;
    public:
    DynArray(DynArray &);
    void operator=(DynArray &);
    DynArray(int);
    bool isEmpty();
    bool isFull();
    void doubleArray();
    void halfArray();
    int size();
    void del(int);
    void append(X);
    void insert(int,X);
    ~DynArray();
    void edit(int,X);
    X get(int);
    int count();
    int find(X);


};
template<typename X>void DynArray<X>::operator=(DynArray &arr)
{
    capacity=arr.capacity;
    lastindex=arr.lastindex;
    if(ptr!=NULL)
     delete [] ptr;
    ptr=new X[capacity];
    for(int i=0;i<=lastindex;i++)
      ptr[i]=arr.ptr[i];


}
template<typename X>DynArray<X>::DynArray(DynArray &dynarr)
{
    capacity=dynarr.capacity;
    lastindex=dynarr.lastindex;
    ptr=new int[capacity];
    for(int i=0;i<=lastindex;i++)
      ptr[i]=dynarr.ptr[i];
}

template<typename X> int DynArray<X>::find(X data)
{
    int i;
    for(i=0;i<=lastindex;i++)
      if(ptr[i]==data)
        return i;
     return -1;
}
template<typename X>int DynArray<X>::count()
{
    return lastindex+1;
}

template<typename X>X DynArray<X>::get(int index)
{
    if(index>=0 && index<=lastindex)
     return ptr[index];

    cout<<endl<<"invalid index or empty array";
    return -1; 
}

template<typename X>void DynArray<X>::edit(int index,X data)
{
    if(index>=0 && index<=lastindex)
     ptr[index]=data;
}
template<typename X>DynArray<X>::~DynArray()
{
  delete [] ptr;
}
template<typename X>void DynArray<X>::insert(int index,X data)
{
    int i;
    if(index<0 || index>lastindex+1)
     cout<<endl<<"invalid index";
    else
    {
        if(isFull())
         doubleArray();
        for(i = lastindex; i>=index;i--)
          ptr[i+1]=ptr[i];
         ptr[index]=data;
         lastindex++; 

    } 
}
template<typename X>void DynArray<X>::append(X data)
{
    if(isFull())
     doubleArray();
    lastindex++;
    ptr[lastindex]=data;  
}
template<typename X>void DynArray<X>::del(int index)
{
   int i;
   if(isEmpty())
     cout<<endl<<"Array is Empty";
    else if(index<0 || index>lastindex)
      cout<<endl<<"Invalid index";
     else
     {
     for(i=index;i<lastindex;i++)
      ptr[i]=ptr[i+1];
      lastindex--;
      if(capacity/2>=lastindex+1 && capacity>1)
        halfArray(); 
     }
}
template<typename X>int DynArray<X>::size()
{
    return capacity;
}
template<typename X>void DynArray<X>::halfArray()
{
    X *temp = new X[capacity/2];
    for(int i=0;i<=lastindex;i++)
     temp[i]=ptr[i];
     delete [] ptr;
     ptr = temp;
     capacity/=2;
}
template<typename X>void DynArray<X>::doubleArray()
{
    X *temp = new X[capacity*2];
    for(int i=0;i<=lastindex;i++)
      temp[i]=ptr[i];
      delete [] ptr;
      ptr = temp;
      capacity*=2;
}
template<typename X>bool DynArray<X>:: isFull()
{
    return lastindex==capacity-1;
}
template<typename X>bool DynArray<X>::isEmpty()
{
    return lastindex==-1;
}
template<typename X>DynArray<X>::DynArray(int cap)
{
    capacity=cap;
    lastindex=-1;
    ptr=new X[capacity];

}