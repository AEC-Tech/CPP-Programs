#include <iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    int choice;
    cout<<"Enter two numbers ";
    cin>>num1>>num2;
    cout<<"Press 1- Add, 2- Subtract, 3-Multiply, 4- Divide ";
    cin>>choice;

    switch(choice)
    {

    case 1:
        result = num1 + num2;
        cout<<"Sum is "<<result;
        break;
    case 2:
        result = num1 - num2;
        cout<<"Difference is "<<result;
        break;
    case 3:
        result = num1 * num2;
        cout<<"Product is "<<result;
        break;
    case 4:
        result = num1 / num2;
        cout<<"Quotient is "<<result;
        break;
    default :
        cout<<"Invalid option selected ";
    }
    return 0;
}
