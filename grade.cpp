#include <iostream>

using namespace std;

int main()
{
    float per;
    cout<<"Enter percentage marks ";
    cin>>per;

    if(per >= 90)
        cout<<"Grade A+";
    else if(per >= 80)
        cout<<"Grade A";
    else if(per >= 60)
        cout<<"Grade B";
    else if(per >= 50)
        cout<<"Grade C";
    else
        cout<<"Grade F";

    return 0;
}
