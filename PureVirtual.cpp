// Example of Virtual Functions & Dynamic Polymorphism
#include <iostream>
using namespace std;
class Employee
{
    protected:
        int empid;
        char name[30];
        int salary;
  public:
  virtual void input()
  {
      cout<<"Enter Employee Id : ";
      cin>>empid;
      cout<<"Enter Name : ";
      cin>>name;
      cout<<"Enter Salary : ";
      cin>>salary;
  }
  virtual void show()
  {
      cout<<"Id is "<<empid<<endl;
      cout<<"Name is "<<name<<endl;
      cout<<"Salary is "<<salary<<endl;
  }
  virtual void totalsal() = 0; //Pure Virtual Function
};
class Worker : public Employee
{
    int overtime;
  public:
  void input()
  {
      Employee::input();
      cout<<"Enter Overtime : ";
      cin>>overtime;
  }
  void show()
  {
      Employee::show();
      cout<<"Oertime is "<<overtime<<endl;
  }
  
  void totalsal()
  {
      cout<<"Total Salary is "<<salary+overtime<<endl;
  }
};
class Salesman : public Employee
{
    float comm;
  public:
  void input()
  {
      Employee::input();
      cout<<"Enter Commission : ";
      cin>>comm;
  }
  void show()
  {
      Employee::show();
      cout<<"Commission is "<<comm<<endl;
  }
  void totalsal()
  {
      cout<<"Total Salary is "<<salary+comm<<endl;
  }
};

int main() {
    Employee a,*p;
    int d;
    cout<<"Press 1 - Worker 2 -salesman" ;
    cin>>d;
    if(d == 1)
        p = new Worker();
    else
        p = new Salesman();
    
    p->input();
    p->show();
    p->totalsal();
    return 0;
}
