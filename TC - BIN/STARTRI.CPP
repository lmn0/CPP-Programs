#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,k,m;
cout<<"Enter no. of line :";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=n;k>=i;k--)
cout<<" ";
for(j=1;j<=i;j++)
cout<<"*";
for(m=2;m<=i;m++)
cout<<"*";
cout<<endl;
}
getch();
}
