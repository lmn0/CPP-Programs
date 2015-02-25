#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
int m,n,i,j,a[100][100],b[900],k=0,o,p,big,flag,l,u;

cin>>m>>n;

for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];


for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
o=j+1;p=i+1;
while(o<n && p<m)
{
flag=0;
for(l=i;l<=p;l++)
for(u=j;u<=o;u++)
if(a[l][u]==0)
{flag=1;break;}

if(flag==0)
{
b[k]=0;
for(l=i;l<=p;l++)
for(u=j;u<=o;u++)
b[k]+=a[l][u];
cout<<b[k]<<" " ;
++k;
}
else
break;
o++;p++;
}
}

big=b[0];

for(i=0;i<k;i++)
if(b[i]>big)
big=b[i];
cout<<big;

getch();
}
