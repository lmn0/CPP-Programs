#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
long int n,s=1,i;
cin>>n;
long int n0=n/2,n1=n%2;

if(n%2==0)
s++;
else if(n!=1)
s+=n0+1;

for(i=1;i<n/2;i++)
s+=n%2+2*i+1;

cout<<s;
getch();
}