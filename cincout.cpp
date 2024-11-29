// Overloading cin and cout
#include <iostream>
using namespace std;
class Complex
{
  private:
    int real,img;
  public:
    friend istream& operator >>(istream &x,Complex &y);
    friend ostream& operator <<(ostream &x,Complex &y);
    friend void operator ++(Complex&);
    friend bool operator ==(Complex x, Complex y);
    friend Complex operator +(Complex x,Complex y);
};
istream& operator >>(istream &x,Complex &y)
    {
        cout<<"Enter real and imaginary part : ";
        x>>y.real>>y.img;
        return x;
    }
    ostream& operator <<(ostream &x,Complex &y)
    {
        x<<"Complex No. is "<<y.real<<"+i"<<y.img<<endl;
        return x;
    }
    void operator ++(Complex &x)
    {
        x.real++;
        x.img++;
    }
    bool operator == (Complex x,Complex y)
    {
        if(y.real == x.real && y.img == x.img)
            return true;
        else
            return false;
    }
    Complex operator +(Complex x,Complex y)
    {
        Complex z;
        z.real = y.real + x.real;
        z.img = y.img + x.img;
        return z;
    }

int main() {
    Complex a,b,c;
    cin>>a>>b;
    cout<<a<<b;
    
    ++a;
    ++b;
    cout<<a;
    cout<<b;
    if(a == b)
        cout<<"Complex Nos. are same"<<endl;
    else
        cout<<"Complex nos are not same"<<endl;
    c = a + b;
    cout<<c;
    

    return 0;
}
