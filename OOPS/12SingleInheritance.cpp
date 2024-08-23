#include<iostream>
using namespace std;
class A
{
    public: int a=10;//accessible
    private:int b=20;//not accessible
    protected:int c=30;//accessible
};
class B:protected A
{
    public:void show()
    {
        cout<<"Single Inheritance"<<endl<<a<<endl<<c;
    }
};
int main()
{
    B od;
    od.show();
}