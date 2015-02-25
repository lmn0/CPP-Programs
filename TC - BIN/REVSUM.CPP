#include<iostream.h>
#include<ctype.h>
#include<string.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,rev=0,sum=0,x;
cout<<"Enter a no. :";
cin>>n;
x=n;
i=0;
while(i<=n)
{
rev=rev*10+n%10;
n=n/10;
i++;
}
cout<<"\nReversed ="<<rev;
i=0;
while(i<=x)
{
sum=sum+x%10;
x=x/10;
i++;
}
cout<<"\nSum ="<<sum;
getch();
}


