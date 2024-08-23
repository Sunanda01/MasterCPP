#include <iostream>
using namespace std;
class A
{
    public:int a;
    A (int n)
    {
        a=n;
        cout<<"A called"<<endl;
    }
    void pa()
    {
        cout<<a<<endl;
    }
};
class B:public A
{
    public:int b;
    B(int n,int m):A(n)//n of class A
    {
        b=m;
        cout<<"B called"<<endl;
    }
    void pb()
    {
        cout<<b<<endl;
    }
};
int main()
{
    B ob(2,3);//constructor called
    ob.pa();//a
    ob.pb();//b
}