// Program to implement stack operation using Array
#include<iostream.h>
#include<conio.h>
int const MAX =20;
class Stack
{
	private:
	int data[MAX];
	int top;
	public:
	Stack()
	{
	top=-1;

	}
	void push(int num)
	{
            if(top==MAX-1)
                 cout<<"Stack is Full "<<endl; 	
	    else
	    {
 		 top++;
	         data[top]=num;
	    }
	}
        void pop()
        {
             if(top==-1)
                 cout<<"Stack is Empty "<<endl;
             else
             {
		cout<<"Deleted element is "<<data[top]<<endl;
                top--;
             }
        }
        void display()
	{
          for(int i=top;i>=0; i--)
             cout<<data[i]<<endl;
        }
};
void main()
{
	int n,k;
	clrscr();
	Stack s;
	do
	{
	cout<<"1- Push 2-Pop 3-Display 4-Exit"<<endl;
	cin>>k;
	switch(k)
	{
	case 1:
		cout<<"Enter a number ";
		cin>>n;
		s.push(n);
		break;
	case 2:
		s.pop();
		break;
	case 3:
		s.display();
		break;
	}
	}while(k!=4);
}
