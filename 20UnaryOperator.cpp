#include<iostream>
using namespace std;
class over
{
    public:int val;
    int operator ++() //postincrement
    {
        val++;
    }
    int operator ++(int) //preincrement
    {
        ++val;
    }
};
int main()
{
    cout<<"Unary Operator"<<endl;
    over o;
    o.val=6;
    cout<<o.val++<<endl<<++o.val;
}