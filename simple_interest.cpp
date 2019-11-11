#include <iostream>

using namespace std;

int main()
{

   float p, r, t , si;
   cout<<"Enter principal , rate and time ";
   cin>>p>>r>>t;

   si = p*r*t/100;

   cout<<"Simple Interest is  "<<si<<endl;

    return 0;
}
