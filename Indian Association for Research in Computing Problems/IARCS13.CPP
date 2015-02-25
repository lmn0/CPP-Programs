#include<iostream.h>
#include<conio.h>
void main()
{
int a[80][80],i,n,j,k,p,l;
cin>>n;
for(i=0;i<n;i++)
for(j=0;a[i][j]!=-1;j++)
{
cin>>a[i][j];
}
for(i=0;i<n;i++)
{
j=i+1;
small=a[i][0];
for(;j<n;j++)
{
if(small!=a[j][0])
{
if(small>a[j][0])
{small=a[j][0];pos=j;}
}
else
{
for(p=1;a[j][p]!=-1 && a[pos][p]!=-1;p++)
if(a[j][p]<a[pos][p]){pos=j;break;}
}

}
}

}
