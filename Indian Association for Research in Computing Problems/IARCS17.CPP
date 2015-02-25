#include<iostream.h>
#include<conio.h>
void main()
{

int i,p,j,o,b[100],k=0,big,f,m,n,l,u;
char a[100][100];
cin>>m>>n;

for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
p=i+1;
o=j+1;
while(p<m && o<n)
{
f=0;
for(l=i;l<p;l++)
for(u=j;u<o;u++)
if(a[l][u]=='T')
{f=1;break;}
if(f==0)
{
p++;o++;
b[k++]=p-i;
}
else
break;
}
}

big=b[0];
for(i=0;i<k;i++)
if(b[i]>big)
big=b[i];

getch();
}
