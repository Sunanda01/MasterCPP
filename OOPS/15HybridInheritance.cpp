#include<iostream>
using namespace std;
class A
{
    public: int a=10;//accessible
    private:int b=20;//not accessible
    protected:int c=30;//accessible
};
class B: public A
{
    public: int sum()
            {
                int d=a+c;
                return d;
            }
};
class C: public A
{
    public: int mul()
            {
                int d=a*c;
                return d;
            } 
};
class D:public B,public C
{
    public:  void show(){
    cout<<endl<<"Sum is "<<sum()<<endl<<"Product is "<<mul();
    }
};
int main()
{
    cout<<"In Hybrid Inheritance";
    D b;
    b.show();
}