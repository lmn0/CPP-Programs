#include<iostream.h>
#include<conio.h>
void main()
{
int n,i,j,k,m;
cout<<"enter the no.s of lines";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=1;k>i;k--)
cout<<" ";
for(j=1;j>=n;j++)
cout<<"*";
for(m=2;m>k;m++)
cout<<"*";
}
getch();
}
