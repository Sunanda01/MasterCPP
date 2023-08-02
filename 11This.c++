#include<iostream>
using namespace std;
class sum
{
    public:int a,b;
    int sum1(int a,int b)
    {
        this->a=a;  //this keyword
        this->b=b;
    }
    void print()
    {
        cout<<a+b;
    }
};
int main()
{
    sum s1;
    s1.a=10;
    s1.b=15;
    s1.sum1(s1.a,s1.b);
    s1.print();
}