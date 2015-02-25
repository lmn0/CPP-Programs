#include<iostream.h>
#include<conio.h>
void main()
{
int a[100],k,n,i;
cin>>n>>k;
for(i=0;i<n;i++)
cin>>a[i];
int j,t,m,l,o;

j=n-1;

if(n%2==0 || n==3)
m=n/2;
else if(n!=3)
m=n/2+1;
for(l=1;l<=m;l++)
{
if(a[j]>a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
break;
}
t=j;
x:
if(a[j]<a[j-1])
{
t--;
goto x;
}
else




