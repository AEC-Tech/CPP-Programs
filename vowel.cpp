#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter an alphabet ";
    cin>>ch;
    cout<<"using if "<<endl;
    if(ch == 'a' ||ch == 'e' || ch=='i'|| ch== 'o'|| ch=='u')
        cout<<"It is a vowel";
    else
        cout<<"Not a vowel";
    cout<<endl<<"using switch"<<endl;
    switch(ch)
    {

    case 'e':
    case 'a':
    case 'i':
    case 'o':
    case 'u':
        cout<<"It is a vowel";
        break;
    default:
        cout<<"Not a vowel";
    }
    return 0;
}
