#include<iostream.h>
#include<conio.h>
void main()
{
int i,I,r,W,n,a=0,ti=0,sum;
cin>>I>>r>>W;
sum=I+W;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a;
if(a==1)
{
if((i-ti-1)*r>I+W)
{sum+=W+I+r;}
else
sum+=(i-ti)*r;
ti=i;
}
}
cout<<sum;
getch();
}


