#include<iostream.h>
#include<all.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,flag=0,x,k;

cin>>n;
for(i=n;i<=200;i++)
{
flag=0;
for(j=2;j<=i/2;j++)
if(i%j==0)
{flag=1;break;}
if(flag==0)
{
x=i;
//cout<<x<<" ";
for(k=1;x>0;k++)
x=x/10;
--k;
x=i;
for(j=1;j<=k/2;j++)
{ cout<<x<<",";;
if(x%10!=x/pow(10,k)){flag=1;break;}
x=x-((int)(x/pow(10,k)))*pow(10,k--);
x=x/10;
}

if(flag==0)
{cout<<i;getch();exit(0);}
}
}
}
