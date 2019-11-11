#include <iostream>

using namespace std;

int main()
{
    double qty, price, amount, discount, net_amount;

    cout<<"Enter cost and quantity of product ";
    cin>>price>>qty;

    amount = price * qty;
    discount = 0.1 * amount;
    net_amount = amount - discount;

    cout<<"Amount is "<<amount<<endl;
    cout<<"Discount is "<<discount<<endl;
    cout<<"Net Amount is "<<net_amount<<endl;
    return 0;
}
