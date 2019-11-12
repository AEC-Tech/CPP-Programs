#include <iostream>

using namespace std;

int main()
{
    int side1, side2, side3;
    cout<<"Enter three sides of triangle  ";
    cin>>side1>>side2>>side3;

    (side1 == side2 && side2 == side3)?cout<<"Equilateral Triangle":cout<<"Not an Equilateral triangle";
    return 0;
}
