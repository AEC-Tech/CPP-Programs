//Program to implement Dynamic Stack

#include<iostream.h>
#include<conio.h>

struct node
{
	int data;
	node *next;
	};
class Stack
{
     private:
	 node *top;
     public:
     Stack()
     {
	top=NULL;
     }
     void push(int val)
{
	node *temp;
	temp=new node;
	temp->data=val;
	if(top==NULL)
	{
		top=temp;
		top->next=NULL;
	}
	else
	{
		temp->next=top;
		top=temp;
	}
}
void pop()
{
	if(top==NULL)
		cout<<"\nStack is Empty";
	else if(top->next==NULL)
	{
		delete top;
		top=NULL;
	}
	else
	{
	node*temp;
	temp=top;
	top=top->next;
	delete temp;
	}
}
void display()
{
	node *ptr;
	ptr=top;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
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
