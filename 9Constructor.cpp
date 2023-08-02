#include<iostream>
using namespace std;
class box
{
    public: float dim1,dim2;
    box()
    {
        dim1=0;
        dim2=0;
    }
    box(float dim1,float dim2)
    {
        this->dim1=dim1;
        this->dim2=dim2;
    }
    float area()
    {
        cout<<endl<<"Area is "<<dim1*dim2;
    }
};
int main()
{
    float a,b;
    cout<<"Enter dimensions of a and b= ";
    cin>>a>>b;
    box b1;         //default constructor
    b1.area();
    box b2(a,b);    //parameterised constructor
    b2.area();
    box b3(b2);     //copy constructor
    b3.area();
}