#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
float x,n,i,j,f=1,sum=0;
cout<<"Enter the x and n val :";
cin>>x>>n;
for(j=1;j<=n;j++)
{
f=f*j;
sum=sum+(float)(pow(x,j)/f);
}
cout<<"\nSum ="<<sum;
getch();
}
