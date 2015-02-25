#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int m,n,a[50][50],i,temp,posm,posn,j,flag=0;
cout<<"enter the row and col in  A:";
cin>>m>>n;
cout<<"\nEnter the matrix";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<"enter a no.";
cin>>temp;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(temp==a[i][j])
{
flag=1;
posm=i;
posn=j;
}
if(flag==1)
cout<<"\nPos i="<<posm+1<<" Pos j="<<posn+1;
else
cout<<"Element not found";
getch();
}

