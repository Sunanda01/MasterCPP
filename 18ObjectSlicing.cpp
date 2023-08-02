#include<iostream>
using namespace std;
class A 
{
    public: int x=10,y=20;
};
class B:public A 
{
    public: int z=30;
};
int main()
{
    B b;
    cout<<b.x<<endl<<b.y<<endl<<b.z<<endl;
    A a=b;
    cout<<a.x<<endl<<a.y;
    //a.z is not accessible
}