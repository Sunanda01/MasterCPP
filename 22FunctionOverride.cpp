#include <iostream>
using namespace std;
class base
{
    public: void f()
            {
                cout<<"Base"<<endl;
            }
};
class derived:public base
{
    public: void f()
            {
                cout<<"Derived"<<endl;
            }
};
int main()
{
    derived d;
    d.f();//derive class overrides
    derived d1;
    d1.base::f();//base class 
    derived d2;
    base *p=&d2;//we r creating object for base class so base class function will be accessed
    p->f();//base class
}