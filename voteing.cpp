#include <iostream>

using namespace std;

int main()
{
    int age;
    char nationality;
    cout<<"Enter I for Indian and press any other letter for other countries";
    cin>>nationality;

    if(nationality == 'I' || nationality == 'i')
    {
        cout<<"Enter your age ";
        cin>>age;
        if(age >= 18)
            cout<<"You can vote";
        else
            cout<<"Under Age - You can't vote";
    }
    else
        cout<<"Not an Indian - You can't vote";

       return 0;
}
