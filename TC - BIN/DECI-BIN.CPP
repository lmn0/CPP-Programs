#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
int n ,b[16],i,f=2,x;
cout<<"enter the no.";
cin>>n;
x=n;
i=15;
for(i=15;n/2;i--)
{
b[i]=abs(n)%2;
n=abs(n)/2;
}
for(int g=0;g<i;g++)
b[g]=0;
b[i]=1;
if(x<0)
b[0]=1;
for(i=0;i<16;i++)
cout<<b[i];
getch();
}


