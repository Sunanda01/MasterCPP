#include<iostream>
using namespace std;
inline int area(int s)  //inline
{
    return s*s*s;
}
int main()
{
    cout<<"Area is "<<area(5);
}