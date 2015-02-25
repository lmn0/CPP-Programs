#include<iostream.h>
#include<conio.h>

void main()
{
int x,y,a[20],n,m,i,j,t,k,l;
cin>>n/*>>m*/;

//for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[j];

//for(j=0;j<m;j++)
for(i=n-1;i>0;i--)
{
if(a[i]>a[i-1])
{
for(l=a[i-1];l<=n;l++)
for(k=i;k<n;k++)
if(l==a[k] || l==n)
goto x;
}
}
x:
a[k]=a[i-1];
a[i-1]=l;

for(k=i;k<n;k++)
for(j=i;j<n-1;j++)
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}

for(i=0;i<n;i++)
cout<<a[i];
getch();

}