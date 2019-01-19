// Program to sort an array using Insertion Sort
#include<iostream.h>
#include<conio.h>

void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{       cin>>a[i];
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			else
				break;
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

	sort(a,n);

	cout<<"\nSorted array is ";
	for(i=0;i<n;i++)
	   cout<<a[i]<<endl;


	getch();
}
