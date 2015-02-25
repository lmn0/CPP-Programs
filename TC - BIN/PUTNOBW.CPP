#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int a[50],n,n1,pos=0,i;
cout<<"Enter the no. of no.s :";
cin>>n;
cout<<"\nEnter the no.s in ascending order :\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter a no. :";
cin>>n1;
for(i=0;i<n;i++)
if(a[i]>n1)
{
pos=i;
break;
}
for(i=n;i>pos;i--)
a[i]=a[i-1];
a[pos]=n1;
cout<<"\nSorted no.s :\n";
for(i=0;i<n+1;i++)
cout<<a[i]<<" ";
getch();
}