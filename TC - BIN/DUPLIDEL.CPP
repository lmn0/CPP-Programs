#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,m,a[80],g=0;
cout<<"Enter the total no,s :";
cin>>n;
cout<<"\nEnter each no. :\n";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
n--;
for(g=j;g<n;g++)
a[g]=a[g+1];
j--;
}
}
cout<<endl;
for(i=0;i<n;i++)
cout<<a[i];
getch();
}