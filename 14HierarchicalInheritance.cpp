#include<iostream>
using namespace std;
class A
{
    public: int a=10;//accessible
    private:int b=20;//not accessible
    protected:int c=30;//accessible
};
class B:public A
{
    public:void sum()
            {
                int d=a+c;
                cout<<endl<<"Sum is "<<d;
            }
};
class C:public A
{
    public:void sub()
            {
                int e=a-c;
                cout<<endl<<"Difference is "<<e;
            }  
};
int main()
{
    cout<<"In Hierarchical Inheritance";
    B b;
    b.sum();
    C od;
    od.sub();
}