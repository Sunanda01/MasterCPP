#include <iostream>
using namespace std;
class A
{
    int *p;
    public:A(int x)
           {
               p=new int(x);
           }
           void set(int x)
           {
               *p=x;
           }
           void get()
           {
               cout<<*p;
           }
};
int main()
{
    A a(10);
    A b(a);
    b.set(20);
    a.get();//20
    b.get();//20
}