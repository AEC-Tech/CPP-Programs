// Program to sort numbers in increasing order using Bubble Sort
#include<iostream.h>
#include<conio.h>
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

}
void main()
{
	int  a[20],n,i;
	clrscr();
	cout<<"\nHow many numbers are there ";
	cin>>n;
	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	   cin>>a[i];

	sort(a,n);   // Function Call

	cout<<"\nSorted array is ";
	for(i=0;i<n;i++)
	  cout<<a[i]<<endl;


	getch();
}
