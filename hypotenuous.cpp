#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    double base, alt, hyp;
    cout<<"Enter base length ";
    cin>>base;
    cout<<"Enter the length of altitude ";
    cin>>alt;

    hyp = sqrt(pow(base,2) + pow(alt,2));
    cout<<"Hypotenous is "<<hyp;
    return 0;
}
