#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float n,i,j,f;
float sum=0;
cout<<"Enter the last no. :";
cin>>n;
f=1;
for(i=1;i<=n;i++)
{
f=1;
for(j=1;j<i;++j)
f=f*j;
sum=sum+(f/j);
}
cout<<"Sum of the series :"<<sum;
getch();
}