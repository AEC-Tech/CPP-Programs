// Program to sort an array using Selection Sort
#include<iostream.h>
#include<conio.h>

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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

	sort(a,n);

	cout<<"\nSorted array is ";
	for(i=0;i<n;i++)
	   cout<<a[i]<<endl;


	getch();
}
