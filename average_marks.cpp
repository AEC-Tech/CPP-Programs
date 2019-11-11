#include <iostream>

using namespace std;

int main()
{
   int eng, sci, sst, maths, hindi;
   float total, avg;
   cout<<"Enter marks in 5 subjects ";
   cin>>eng>>sci>>sst>>maths>>hindi;

   total = eng+sci+sst+maths+hindi;

   avg = total/5;

   cout<<"Total Marks "<<total<<endl;
   cout<<"Average Marks "<<avg;
    return 0;
}
