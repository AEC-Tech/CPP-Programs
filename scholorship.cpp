#include <iostream>

using namespace std;

int main()
{
    int cls;
    float per;
    cout<<"Enter the class ";
    cin>>cls;
    cout<<"Enter percentage marks ";
    cin>>per;

    (cls == 10 || cls ==12)?((per>=90)?cout<<"Granted":cout<<"Not Granted"): cout<<"not eligible";
    return 0;
}
