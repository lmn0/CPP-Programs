#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();

int a[20][20],b[20][20],n,m,i,j,l,k,f;
cin>>n>>m;

for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];

for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>b[i][j];

i=0;j=0;l=0;k=0;

while(k<m && j<m)
{
f=0;

while(1)
{
if(b[i][j]==a[l][k] && l!=n)
{i++;l++;}
else
{if(l==n)f=1;break;}
}
l=0;i=0;
k++;

if(f==1)
{j++;k=0;}

}

if(j==m)
cout<<"YES";
else
cout<<"NO";
getch();

}
