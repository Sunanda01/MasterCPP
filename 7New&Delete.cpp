#include<iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=5;
    cout<<p<<endl<<*p<<endl;//address,value
    //delete p;
    int *ar=new int[5];
    ar[0]=20;
    cout<<ar<<endl<<*ar;
}