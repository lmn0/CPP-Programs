#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();

int a[20][20],m,n,x,y,i,j,l,k,big,big1,p,o;
cin>>m>>n;

for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];

cin>>x>>y>>l>>k;

x--;y--;l--;k--;

if(y>k)
{
i=x;j=y;p=l;o=k;
}
else
{
i=l;j=k;p=x;o=y;
}

big=a[i][j];
for(;;i=(i+1)%m)
while(1)
{
if(a[i][j]>big)
big=a[i][j];
if(i==p && j==o)
goto x;
j=(j+1)%n;

if(j==0)
break;
}

x:

if(x<l)
{
i=y;j=x;p=l;o=k;
}
else
{
i=k;y=l;p=x;o=y;
}

big1=a[j][i];
for(;;i=(i+1)%n)
{
while(1)
{
if(a[j][i]>big1)
big1=a[j][i];
if(j==o && i==p)
goto y;

j=(j+1)%m;

if(j==0)
break;
}
}
y:
if(big>big1)
cout<<big;
else
cout<<big1;
getch();

}

