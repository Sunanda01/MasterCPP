#include<iostream>
using namespace std;
class A
{
    private:int a=20;
    public:void func()
            {
                cout<<"Value of a in A class"<<a;
            }
    friend class B;
};
class B
{
    private:int b;
    public: void show(A &x)
            {
                cout<<"Accessing A data from B. a= "<<x.a;
            }
};
int main()
{
    A ob;
    B b;
    b.show(ob);
    ob.func();
}