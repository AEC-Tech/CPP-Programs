#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d, r1, r2;
    cout<<"Enter the coefficients of the quadratic equation ";
    cin>>a>>b>>c;

    d= b*b - 4 *a *c;

    if(d<0)
        cout<<"No real roots";
    else if(d == 0)
    {
        r1 = r2 = -b/(2*a);
        cout<<"Roots are equal "<<r1<<","<<r2;
    }
    else{
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        cout<<"Roots are real and unequal "<<r1<<","<<r2;
    }

    return 0;
}
