#include<iostream>
using namespace std;
class A
{
    public: int a=10;
            //accessible
};
class B:virtual public A //error if no virtual confusion which a to access.
{
    public:int b=30;
};
class C:virtual public A
{
    public:int c=50;
};
class D:public B,public C
{
    public:  void show()
            {
                cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c;
            }
};
int main()
{
    cout<<"Virtual Base Class\n";
    D b;
    b.show();
}