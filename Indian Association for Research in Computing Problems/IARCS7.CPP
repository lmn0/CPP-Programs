#include<iostream.h>
#include<conio.h>
void main()
{
int sum[100],a[100],n,k=0,big,j,p=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>a[i];

for(i=0;i<n;i++)
sum[i]=0;

for(i=0;i<n;i++)
for(j=i+1;j!=i;j=(j+1)%n)
{
for(k=i;k!=j;k=(k+1)%n)
sum[p]+=a[k];
p++;
}

big=sum[1];

for(i=1;i<p;i++)
{
//cout<<sum[i]<<" ";
if(sum[i]>big)
big=sum[i];
}

cout<<big;
getch();

}