#include<iostream.h>
#include<conio.h>
void main()
{
int n,a[100],sum=0,i,b[100],c=0,d[100],t,j;
float mean;
cin>>n;

for(i=0;i<n;i++)
{
cin>>a[i];d[i]=a[i];
sum+=a[i];
}

for(i=0;i<n;i++)
for(j=0;j<n-i-1;j++)
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

for(i=n-1;i>=0;i--)
if(sum-2*a[i]>0)
{sum=sum-2*a[i];a[i]=-1;}
else
break;

for(i=0;i<n;i++)
if(sum-2*a[i]>0)
{sum=sum-2*a[i];a[i]=-1;}
else
break;

if(sum>2*a[i]-sum)
{sum=2*a[i]-sum;a[i]=-1;}

for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i]==d[j])
{d[j]=0;break;}

for(i=0;i<n;i++)
{
if(d[i]==0)
cout<<0;
else
cout<<1;
}
getch();

cout<<sum;
}