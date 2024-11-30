// Example of Virtual Functions & Dynamic Polymorphism
#include <iostream>
using namespace std;
class Base
{
  public:
  virtual void show()
  {
      cout<<"Base Class"<<endl;
  }
};
class D1 : public Base
{
  public:
  void show()
  {
      cout<<"Derived Class One"<<endl;
  }
};
class D2 : public Base
{
  public:
  void show()
  {
      cout<<"Derived Class Two"<<endl;
  }
};
int main() {
    Base a,*p;
    D1 b;
    D2 c;
    a.show();
    b.show();
    c.show();
    p = &a;
    p->show();
    p = &b;
    p->show();
    p = &c;
    p->show();
    return 0;
}
