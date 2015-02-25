#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4],i,j,b[16],m=0,c[16],g;
for(i=0;i<4;i++)
for(j=0;j<4;j++)
cin>>a[i][j];
j=0;g=0;
for(i=0;i<4;i++)
for(j=0;j<4;j++)
{
b[g]=a[i][j];
++g;
}
for(i=0;i<16;i++)
cout<<b[i]<<" ";
getch();
}