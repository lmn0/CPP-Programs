#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[80],n,temp,i,pos;
cout<<"enter the total :";
cin>>n;
cout<<"\nEnter each :";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nEnet the temp:";
cin>>temp;
for(i=0;i<n;i++)
if(temp==a[i])
{
pos=i;
break;
}
for(i=pos;i<n-1;i++)
a[i]=a[i+1];
n--;
cout<<"\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
getch();
}