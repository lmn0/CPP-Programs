#include<iostream.h>
#include<conio.h>
void main()
{
int t,n,k,a[1000],j,m=1,s=0,p=0;

cin>>n>>k;
for(int i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[j]>a[j+1])
{
t=a[j+1];
a[j+1]=a[j];
a[j]=t;
}
for( i=0;i<n;i++)
cout<<a[i];

for(m=1;p<k;m++)
for(i=0;i<n-1;i++)
if(a[i+1]-a[i]==m)
{s+=m;p++;cout<<s;}

cout<<s;

getch();
}