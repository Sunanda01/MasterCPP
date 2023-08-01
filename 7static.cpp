#include<iostream>
using namespace std;
class st
{
    public: static int a;
};
int st::a=10;
int main()
{
    st b;
    cout<<b.a;//10
}