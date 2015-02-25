#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int a[20][20],i,j,m,n,csum,dsum;
cout<<"\nInput rows and columns of matrix A[m][n]\n";
cin>>m>>n;
cout<<"Enter the matrix:";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cin>>a[i][j];
}
cout<<"\n\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<a[i][j];
cout<<endl;
}
csum=0;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
if(i<j)
csum+=a[i][j];
}
cout<<"\nSum of elements \n Above the main diagonal is :";
cout<<csum<<"\n";
dsum=0;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(i>j)
dsum+=a[i][j];
cout<<" Below main diagonal is :";
cout<<dsum<<"\n";
getch();
}

