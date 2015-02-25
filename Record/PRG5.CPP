
# include <iostream.h>
# include <conio.h>

void insertion()
{
	int a[50];
	cout<<"Enter array size:";
	int n;
	cin>>n;
	cout<<"Enter the matrix:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter position to insert:";
	int pos;
	cin>>pos;
	cout<<"Enter item to insert:";
	int item;
	cin>>item;
	for(i=n;i>pos-1;i--)
	{a[i]=a[i-1];}
	a[pos-1]=item;
	cout<<"Sorted array is:";
	for( i=0;i<n+1;i++)
	cout<<a[i]<<" ";
}

void deletion()
{
	int a[50];
	cout<<"\nEnter array size:";
	int n;
	cin>>n;
	cout<<"\nEnter the matrix:";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter position to delete:";
	int pos;
	cin>>pos;
	for(i=pos-1;i<n;i++)
	{a[i]=a[i+1];}
	cout<<"\nSorted array is:";
	for(i=0;i<n-1;i++)
	cout<<a[i]<<" ";
}


void main()
{
	char c;
	do
	{
	clrscr();
	int ch;
	cout<<"MENU\n1)Insert element\n2)Delete element\nEnter your choice:";
	cin>>ch;
	switch(ch)
	{
	 case 1:insertion();break;
	 case 2:deletion();break;
	 default:cout<<"Wrong choice";break;
	}
	 cout<<"\nDo u want to continue? ";
	 cin>>c;

	}while(c=='y' | c=='Y');
}
