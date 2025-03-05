
#include <iostream>
using namespace std;
class Distance
{
    private:
    int km,meter;
    public:
    Distance()
    {
        km = meter = 0;
    }
    friend istream& operator >>(istream&, Distance &);
    friend ostream& operator <<(ostream&, Distance &);
    bool operator ==(Distance &x)
    {
        if(km == x.km && meter == x.meter)
            return 1;
        else
            return 0;
    }
    Distance operator +(Distance x)
    {
        Distance z;
        z.km = km + x.km;
        z.meter = meter + x.meter;
        if(z.meter >= 1000)
        {
            z.meter -= 1000;
            z.km++;
        }
        
        return z;
    }
    void operator++()
    {
        meter++;
        if(meter==1000)
        {
            meter -= 1000;
            km++;
        }
    }
};
istream& operator >>(istream &x, Distance &y)
{
    cout<<"Enter the Distance in kilo meter and meter : ";
    x>>y.km>>y.meter;
    return x;
}
ostream& operator <<(ostream &x, Distance &y)
{
    x<<"Distance is "<<y.km<<" km "<<y.meter<<" meter"<<endl;
    return x;
}
    
int main() 
{
    Distance j,k;
    cin>>j;
    cin>>k;
    cout<<j;
    cout<<k;
    if(j == k)
    {
        cout<<"Distances are same"<<endl;
        
    }
    else
    {
        Distance c = j+k;
        cout<<c<<endl;
        ++c;
        cout<<c<<endl;
    }
    return 0;
}
