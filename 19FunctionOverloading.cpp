#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
double add(double a,double b)
{
    return a+b;
}
int main()
{
    cout<<"Sum of 4 and 5= "<<add(4,5)<<endl<<"Sum of 5,6 and 7= "<<add(5,6,7)<<endl<<"Sum of 7.2 and 4.5= "<<add(7.2,4.5);
}