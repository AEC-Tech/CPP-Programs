#include <iostream>

using namespace std;

int main()
{
   int first=80, second = 45;
   cout<<"Before swap "<<first<<"\t"<<second<<endl;

   first = first + second;
   second = first - second;
   first = first - second;

   cout<<"After swap "<<first<<"\t"<<second<<endl;
    return 0;
}
