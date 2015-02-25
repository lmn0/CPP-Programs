#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[80][80],n,i,j,m,b[80][80];
cout<<"enter  row and col size :";
cin>>m>>n;
cout<<"enter the matrix:";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
for(i=0;i<n;i++)
for(j=0;j<m;j++)
b[i][j]=a[j][i];
cout<<endl<<"the transposed array :\n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cout<<b[i][j]<<" ";
cout<<"\n";
}
getch();
}
