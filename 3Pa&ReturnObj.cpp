#include<iostream>
using namespace std;
class st
{
    public: int val;
    void func(st &e)
    {
       val=val+e.val; 
    }  
};
int main()
{
    st ob1,ob2;
    ob1.val=10;
    ob2.val=15;
    cout<<ob1.val<<"\n"<<ob2.val;//10 15
    ob2.func(ob1);
    cout<<ob1.val<<"\n"<<ob2.val;//10 25
}