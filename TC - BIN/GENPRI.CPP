#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,flag=0,j;
cout<<"Enter the no. upto which the primes no. must be gen :";
cin>>n;
for(i=2;i<=n;i++)
{
flag=0;
for(j=2;j<i;j++)
if(i%j==0.000)
{
flag=1;
break;
}
if(flag==0)
cout<<i<<" ";
}
getch();
}
