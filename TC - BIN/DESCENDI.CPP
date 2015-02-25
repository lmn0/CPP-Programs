#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,temp,j,n;
cout<<"Enter total no.s";
cin>>n;
cout<<"Enter 10 no.s in juggled order";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]<a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
cout<<"\nArranged no.s (Descending) :\n";
for(i=0;i<10;i++)
cout<<a[i]<<" ";
getch();
}

