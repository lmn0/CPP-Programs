#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
int i,j,n,k,sum=0,p,s=0;
cin>>n;

while(n>1)
{
for(i=0;i<n;i++)
if(n<pow(2,i))
break;
sum+=i;
--i;
p=i;
for(j=0;p>=1;j++)
sum+=pow(2,j)*(p--);

n=n-pow(2,i);
}

if(n==1)
sum=sum+1;

cout<<sum;
getch();
}
