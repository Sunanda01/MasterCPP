#include <iostream>
using namespace std;
class A
{
    int *p;
    public:A(int x)
           {
               p=new int(x);
           }
           A (A &t)
           {
               int val=*(t.p);
               p=new int(val);
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
    a.get();//10
    b.get();//20
}