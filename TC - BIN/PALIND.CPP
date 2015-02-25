#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[25],i,j,n,flag=0;
cout<<"Enter the string (24 max) :\n";
gets(a);
n=strlen(a);
for(i=0,j=n-1;i<=n/2;i++,j--)
if(a[i]!=a[j])
{
flag=1;
break;
}
if(flag==1)
cout<<"\nNot a Palindrom";
else
cout<<"\nPalindrom";
getch();
}