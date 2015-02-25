#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,k,m;
cout<<"enter the no.s of lines";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=1;k<i;k--)
cout<<" ";
for(j=1;j<=i;j++)
cout<<"*";
for(m=1;m<i;m++)
cout<<"*";
cout<<endl;
}
getch();
}
