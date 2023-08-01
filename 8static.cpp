#include<iostream>
using namespace std;
class st
{
    public: static int a;
            static void print();
};
int st::a=10;
void st::print()
{
    cout<<"\nValue is "<<st::a;
}
int main()
{
    st b;
    b.print();//10
    st c;
    c.a+=10;
    c.print();//20
}