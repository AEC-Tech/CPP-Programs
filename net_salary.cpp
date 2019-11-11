#include <iostream>

using namespace std;

int main()
{
    double bsalary, hra, da, pf, net_salary;
    /* hra is 40% da is 25% pf 12% salary*/

    cout<<"Enter the basic salary ";
    cin>>bsalary;

    hra = 40 * bsalary / 100;
    da = 25 * bsalary / 100;
    pf = 12 * bsalary / 100;

    net_salary = bsalary + hra + da -pf;
    cout<<"HRA is "<<hra<<endl;
    cout<<"DA is "<<da<<endl;
    cout<<"PF is "<<pf<<endl;
    cout<<"Net Salary is "<<net_salary;

    return 0;
}
