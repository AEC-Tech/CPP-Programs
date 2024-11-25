// Vector class having Array inside class with dynamic memory allocation
#include <iostream>
using namespace std;

class Vector
{
    private:
        int *values;
        int n;
    public:
        Vector()
        {
            n = 0;
        }
        void input()
        {
            cout<<"Enter number of values : ";
            cin>>n;
            values = new int[n];
            cout<<"Enter Values : ";
            for(int i = 0; i< n;i++)
            cin>>values[i];
        }
        void show()
        {
            cout<<"Values in the array are : "<<endl;
            for(int i = 0; i<n; i++)
            {
                cout<<values[i]<<"\t";
            }
        }
        Vector add(Vector x)
        {
            Vector t;
            if(n == x.n)
            {
                t.n = n;
                for(int i = 0 ;i <n;i++)
                {
                    t.values[i] = values[i] + x.values[i];
                }
            }
            else
            {
                cout<<"Can't Add Different Sized Arrays"<<endl;
                t.n = 0;
            }
            return t;
        }
};
int main() {
    Vector a,b,c;
    a.input();
    b.input();
    c = a.add(b);
    a.show();
    b.show();
    c.show();
    
    return 0;
}
