#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int n,i,f,s=0,t=1,sum=0;
cout<<"Enter the last no.";
cin>>n;
cout<<0;
for(i=1;i<=n;i++)
{
f=s+t;
cout<<" "<<f<<" ";
if(f%2==0)
{
sum=sum+f;
}
t=s;
s=f;
}
cout<<"\nSum of even int="<<sum;
getch();
}