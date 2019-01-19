// Program to search an array element using Binary Search
#include<iostream.h>
#include<conio.h>

int search(int a[],int n,int num)
{
	int beg,end,mid;
	beg=0;
	end=n-1;
	while(beg<=end)
	{
	      mid=(beg+end)/2;
	      if(a[mid]==num)
		  return mid;
	      else if(num>a[mid])
		  beg=mid+1;
	      else
		  end=mid-1;

	}
	return -1;

}
void main()
{
	int  a[20],n,i,num;
	clrscr();
	cout<<"\nHow many numbers are there ";
	cin>>n;
	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	   cin>>a[i];

	cout<<"\nEnter the number to be searched ";
	cin>>num;

	int pos=search(a,n,num);

	if(pos==-1)
	   cout<<"\nNo. not found";
	else
	   cout<<"\nNo. found at position "<<pos+1;
	getch();
}
