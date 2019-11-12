#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the year ";
    cin>>year;

    (year % 4 == 0)?cout<<"Leap Year":cout<<"Not a leap year";
    return 0;
}
