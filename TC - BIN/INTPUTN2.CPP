#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],n,i,j,small=0,big=0,x=0,y=0,g,d=0,p=0;
cout<<"Enter total no.s :";
cin>>n;
cout<<"\nEnter each no. ";
for(i=0;i<n;i++)
cin>>a[i];
big=a[0];
small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
d=a[0];
p=a[0];
for(i=0;i<n;i++)
{
if(a[i]!=big && a[i]>d)
{
d=a[i];
x=a[i];
}
if(a[i]!=small && a[i]<p)
{
p=a[i];
y=a[i];
}
}
cout<<"\n\n\t\tBig : \n\t\t1 :"<<big<<"\n\t\t2 :"<<x;
cout<<"\n\t\t Small : \n\t\t1 :"<<small<<"\n\t\t2 :"<<y;
getch();
}
