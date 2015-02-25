#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,k,m;
cout<<"enter the no. of lines";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=n;k>=i;k--)
cout<<" ";
for(j=1;j<=i;i++)
cout<<"*";
for(m=1;m<j;m++)
cout<<"*";
cout<<endl;
}
getch();
}
