#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int cost,qty,amt, dis, namt;

    cout<<"Enter the cost and quantity  ";
    cin>>cost>>qty;

    amt = cost * qty;
    cout<<"Amount is "<<amt<<endl;
    if(amt >= 1000)
    {
        dis = 10 * amt /100;
        cout<<"Discount is "<<dis;
    }
    else
    {
        dis = 0;
        cout<<"Discount is "<<dis;
    }
    namt = amt -dis;
    cout<<"\nNet Amount is "<<namt;
    return 0;
}
