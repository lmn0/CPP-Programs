#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,g,n,temp,h=0;
cout<<"Enter the total no. of elements";
cin>>n;
cout<<"\nEnter the elements one by one\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnter an int :";
cin>>g;
for(i=0;i<n;i++)
if(a[i]==g)
a[i]=0;
for(i=0;i<n;i++)
if(a[i]==0)
h++;
for(int j=h;j>=0;j--)
for(i=n-1;i>0;i--)
{
if(a[i]==0)
{
a[i]=a[i-1];
a[i-1]=0;
}
}
cout<<"\n\nArranged Array :\n\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
getch();
}




