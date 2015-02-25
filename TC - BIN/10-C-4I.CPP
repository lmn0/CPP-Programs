#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char a[20],i,j,n,temp;
cout<<"Enter a string\n";
gets(a);
n=strlen(a);
for(i=0,j=n-1;i<=n/2;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
cout<<"Reversed :\n";
for(i=0;i<n;i++)
cout<<a[i];
getch();
}