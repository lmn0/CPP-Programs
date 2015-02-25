#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char w[10][5];
int m[10],e,r=0,sum;
float avg;
cout<<"Enter 10 Names & marks :\n";
for(int i=0;i<10;i++)
{cout<<i<<" ";
cin>>w[i];
cin>>m[i];
sum=r+m[i];
r=sum;
}
avg=sum/10.0;
cout<<"Sum = "<<sum;
cout<<"\nAvg = "<<avg;
cout<<"\nEnter the one you want";
cin>>e;
for(int j=0;j<10;j++)
{
if((e-1)==j)
cout<<"Name :"<<w[j]<<" Mark = "<<m[j];
}
getch();
}
