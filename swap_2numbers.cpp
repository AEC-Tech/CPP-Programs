#include <iostream>

using namespace std;

int main()
{
   int first=80, second = 45, temp;
   cout<<"Before swap "<<first<<"\t"<<second<<endl;
   temp = first;
   first = second;
   second = temp;
   
   cout<<"After swap "<<first<<"\t"<<second<<endl;
    return 0;
}
