#include<iostream.h>
#include<conio.h>
 class vehicle
  {
   protected:
    char company[20],name[20];
    int model;
   public:
    void input()
     {
      cout<<"enter company,name and model of the car";
       cin>>company>>name>>model;
     }
    void show()
     {
      cout<<"company is "<<company<<endl;
      cout<<"name is "<<name<<endl;
      cout<<"model is "<<model<<endl;
     }
  };
  class scooter:public vehicle
  {
   int mil;
   public:
    void input()
     {
      vehicle::input();
       cout<<"enter mileage";
	cin>>mil;
     }
    void show()
     {
      vehicle::show();
      cout<<"mileage is "<<mil<<endl;
     }
  };
 class triwheeler:public vehicle
  {
   int power;
   public:
    void input()
     {
      vehicle::input();
      cout<<"enter the power in cc";
       cin>>power;
     }
    void show()
     {
       vehicle::show();
       cout<<"power in cc is"<<power<<endl;
     }
  };
  class car:public vehicle
   {
    int seats;
    public:
     void input()
      {
	vehicle::input();
       cout<<"enter seating capacity of the car";
	cin>>seats;
      }
     void show()
      {
       vehicle::show();
       cout<<"number of seats are"<<seats<<endl;
      }
    };


  void main()
   {
   int y;

    scooter b;
    triwheeler c;
    car d;

    cout<<"press 2-two wheeler,press 3- three wheeler,press 4-car"<<endl;
     cin>>y;
     if(y==2)
     {
      b.input();
      b.show();
      }
     if(y==5)
     {
      c.input();
      c.show();
      }
     if(y==4)
     {
      d.input();
      d.show();
      }
      getch();
  }
