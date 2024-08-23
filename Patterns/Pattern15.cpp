#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"Enter The Limit = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<char(j+64)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}