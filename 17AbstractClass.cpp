#include<iostream>
using namespace std;
class A //astract class
{
    public:virtual void f()=0; //pure virtual fx
};
class B:public A 
{
    public:void f()
            {cout<<"Child"<<endl;}
};
int main()
{
    //A b; error
    B ob;
    ob.f();
    A *p=new B;
    p->f();
}