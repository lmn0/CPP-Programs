#include<iostream.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,m,k,a[20][20],sum=0;
cout<<"Enter the row siz and col siz :";
cin>>m>>n;
cout<<"\n\nElements :\n";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<n;i++)
for(j=0;j<i+1;j++)
sum=sum+a[i][j];
cout<<"\n\nSUM ="<<sum;
getch();
}