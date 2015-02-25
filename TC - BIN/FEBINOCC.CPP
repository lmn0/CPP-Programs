#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int f=0,i,n,s=1,t;
cout<<"enter no. of times";
cin>>n;
for(i=1;i<=n;i++)
{
t=f+s;
cout<<" "<<f<<" ";
f=s;
s=t;
}
getch();
}
