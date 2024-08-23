#include <iostream>
using namespace std;
class over
{
    int x,y;
    public:
    over(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
    over operator+(over const& o) 
    {
        over temp;
        temp.x=x+o.x;
        temp.y=y+o.y;
        return temp;
    }
    void print()
    {
        cout<<x<<" + "<<y<<" i";
    }
};
int main() {
    over o1(4,5),o2(6,7);
    over o3=o1+o2;
    o3.print();
}