#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int a[20][20],n,m,i,j,d1=0,d2=0;
cout<<"Enter row and col :";
cin>>m>>n;
if(m!=n)
exit(0);
else
cout<<"Enter the Matrix:";
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];
cout<<"\nThe Matrix :\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<a[i][j];
cout<<"\n";
}
for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(i==j)
d1=d1+a[i][i];
for(i=0,j=n-1;i<n;i++,j--)
d2=d2+a[i][j];
cout<<"Sum of diagonals ="<<d1+d2;
getch();
}

