#include<iostream.h>
#include<conio.h>
void main()
{
int n1,n2,n3,a[3][300],b[300],k,c=0,f;
cin>>n1>>n2>>n3;

for(int i=0;i<n1;i++)
cin>>a[0][i];

for(i=0;i<n2;i++)
{
cin>>a[1][i];
for(k=0;k<n1;k++)
if(a[0][k]==a[1][i])
b[c++]=a[1][i];
}

for(i=0;i<n3;i++)
{
f=0;
cin>>a[2][i];
for(k=0;k<n1;k++)
if(a[0][k]==a[2][i])
{f=1;break;}

for(k=0;k<n2;k++)
if(a[1][k]==a[2][i])
{f=1;break;}

for(k=0;k<c;k++)
if(b[k]==a[2][i])
{f=0;break;}

if(f==1)
b[c++]=a[2][i];
}
for(i=0;i<c;i++)
cout<<b[i];
getch();
}
