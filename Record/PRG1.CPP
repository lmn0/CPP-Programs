#include<iostream.h>
#include<conio.h>

void sum(float a[],int n)
{
	float sum=0.0;
	for(int i=0;i<n;i++)
	sum=sum+a[i];
	cout<<"\nSum of float numbers ="<<sum;
}

void product(float a[], int n)
{
	float pro=1.0;
	for(int i=0;i<n;i++)
	pro=pro*a[i];
	cout<<"\nProduct of float numbers ="<<pro;
}

void avg(float a[], int n)
{
	float avg=0.0,s=0.0;
	for(int i=0;i<n;i++)
	s=s+a[i];
	avg=s/n;
	cout<<"\nAverage of float numbers ="<<avg;
}

void main()
{
	int i,n,g;
	float a[100];
	char ch;
	do{
	   clrscr();
	   cout<<"MENU";
	   cout<<"\n1)Sum of float numbers";
	   cout<<"\n2)Product of float numbers";
	   cout<<"\n3)Average of float numbers\n";
	   cout<<"\nEnter your choice:";
	   cin>>g;
	   if(g>=1 && g<=3)
	   {
	   cout<<"Enter number of float numbers";
	   cin>>n;
	   cout<<"\nEnter the numbers";
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   }
	   switch(g)
	   {
	   case 1:sum(a,n);break;
	   case 2:product(a,n);break;
	   case 3:avg(a,n);break;
	   default:cout<<"Wrong choice";break;
	   }
	   cout<<"\nDo you want to repeat(y/n)?\n";
	   cin>>ch;
	}
	while(ch=='y' || ch=='Y');
}




