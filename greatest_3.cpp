#include <iostream>

using namespace std;

int main()
{
    int a,b,c, g;
    cout<<"Enter three numbers ";
    cin>>a>>b>>c;

    g= (a>b)?((a>c)?a:c) : ((b>c)?b:c);

    cout<<"Greatest of numbers is "<<g<<endl;
    return 0;
}
