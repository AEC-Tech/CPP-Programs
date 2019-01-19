//Program to implement Dynamic Queue

#include<iostream.h>
#include<conio.h>

struct node
{
	int data;
	node *next;
	};
class Queue
{
     private:
	 node *front,*rear;
     public:
     Queue()
     {
	front=rear=NULL;
     }
     void enque(int val)
     {
	node *temp;
	temp=new node;
	temp->data=val;
        temp->next=NULL
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void dqueue()
{
	if(front==NULL)
		cout<<"\nQueue is Empty";
	else if(front==rear)
	{
		delete front;
		front=rear=NULL;
	}
	else
	{
	node*temp;
	temp=front;
	front=front->next;
	delete temp;
	}
}
void display()
{
	node *ptr;
	ptr=front;
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
	Queue q;
	do
	{
	cout<<"1- Insert 2-Remove 3-Display 4-Exit"<<endl;
	cin>>k;
	switch(k)
	{
	case 1:
		cout<<"Enter a number ";
		cin>>n;
		q.enque(n);
		break;
	case 2:
		q.dqueue();
		break;
	case 3:
		q.display();
		break;
	}
	}while(k!=4);
}
