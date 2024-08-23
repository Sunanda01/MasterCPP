#include<iostream>
using namespace std;
    int add(int a,int b) //pass by value
    {
        return a+b;
    }
    int sub(int *c,int *d) //pass by address
    {
        return *c-*d;    
    }
    int mul(int &e,int &f) //pass by reference
    {
        return e*f;
    }

int main()
{
    int a,b;
    cout<<"Enter value of a and b= ";
    cin>>a>>b;
    cout<<add(a,b);
    cout<<endl;
    cout<<sub(&a,&b);
    cout<<endl;
    cout<<mul(a,b);
}