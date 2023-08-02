#include<iostream>
using namespace std;
class st
{
    public: const int a=20;
            void print() 
                {
                    a=30;//error
                }
};
int main()
{
    st b;
    cout<<b.a;
}