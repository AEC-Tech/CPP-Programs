#include <iostream>

using namespace std;

int main()
{
   float radius, area, cir;
   char choice;
   cout<<"Enter radius of the circle ";
   cin>>radius;
   cout<<"Enter A- Area C- Circumference";
   cin>>choice;
   switch(choice)
   {

   case 'A':
   case 'a':
       area = 3.14 * radius * radius;
       cout<<"Area of circle is "<<area;
       break;
   case 'C':
   case 'c':
        cir = 2 * 3.14 * radius;
        cout<<"Circumference of circle is "<<cir;
        break;
   default:
    cout<<"Invalid option selected";
   }
    return 0;
}
