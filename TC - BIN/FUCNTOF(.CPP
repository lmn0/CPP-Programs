#include<iostream.h>
#include<conio.h>
void of(int a[],int n);
void main()
{
clrscr();
int a[80],n,i;
cout<<"Enter the no. of  no.s";
cin>>n;
cout<<"Enter the no.s :";
for(i=0;i<n;i++)
cin>>a[i];
of(a,n);
getch();
}
void of(int a[], int n)
{
int i, temp,j;
for(i=0,j=n/2;i<n/2;i++,j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
cout<<"\n\nreversed : \n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}


