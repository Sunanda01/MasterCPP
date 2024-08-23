#include<iostream>
using namespace std;
class A
{
    public: int a=10;//accessible
    private:int b=20;//not accessible
    protected:int c=30;//accessible
};
class B
{
    public:void show()
            {
                cout<<"B Main Class"<<endl;
            };
};
class C:public A,public B
{
    public:void show1()
    {
        cout<<"In Multiple Inheritance"<<endl<<a<<endl<<c<<endl;
    }  
};
int main()
{
    C od;
    od.show1();
    od.show();
}