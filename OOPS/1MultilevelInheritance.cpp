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
                cout<<"Sum is "<<d;
            }
};
class C:public B
{
    public:void show1()
    {
        cout<<"In Multilevel Inheritance"<<endl;
    }  
};
int main()
{
    C od;
    od.show1();
    od.sum();
}