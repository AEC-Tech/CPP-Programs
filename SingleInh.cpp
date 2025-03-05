
#include <iostream>
using namespace std;
class Rectangle
{
    protected:
    int l,b;
    public:
    Rectangle()
    {
        l = b = 0;
    }
    void input()
    {
        cout<<"Enter Length and Breadth : ";
        cin>>l>>b;
    }
    void show()
    {
        cout<<"Length is "<<l<<endl;
        cout<<"Breadth is "<<b<<endl;
    }
    void area()
    {
        cout<<"Area is "<<l *b<<endl;
    }
};
class Cuboid : public Rectangle
{
    private:
    int h;
    public:
    Cuboid():Rectangle()
    {
        h = 0;
    }
    void input()
    {
        Rectangle::input();
        cout<<"Enter Height : ";
        cin>>h;
    }
    void show()
    {
        Rectangle::show();
        cout<<"Height is "<<h<<endl;
    }
    void area()
    {
        cout<<"Area is "<<2*(l*b+b*h+h*l)<<endl;
    }
    
};
int main() 
{
    Rectangle r;
    r.input();
    r.show();
    r.area();
    Cuboid c;
    c.input();
    c.show();
    c.area();
    return 0;
}
