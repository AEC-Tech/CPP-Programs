#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        cout<<a<<" is greatest";
    }
    if(b>a && b>c)
        cout<<b<<" is greatest";
    if(c>a && c>b)
        cout<<c<<" is greatest";

    return 0;
}
