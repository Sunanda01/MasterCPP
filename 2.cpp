#include<iostream>
using namespace std;
class person
{
    public: int age;
    void print();
};
void person::print()
{
    cout<<"The age is ";
}
int main()
{
    person ramesh;
    ramesh.age=5;
    ramesh.print();
    cout<<ramesh.age;
}