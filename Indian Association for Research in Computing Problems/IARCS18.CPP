#include<iostream.h>
#include<conio.h>
void main()
{
int a[2][100],n,i,j,p=-1,q;
cin>>n;

for(i=0;i<2;i++)
for(j=0;j<n;j++)
cin>>a[i][j];

i=0;

while(p!=0 && i<n)
{
for(q=0;q<n;q++)
if(a[0][i]==a[1][q])
break;
if(q-i>p)
p=q-i;
for(q=0;q<n;q++)
if(a[1][i]==a[0][q])
break;
if(q-i>p)
p=q-i;

p-=1;
i++;
}

cout<<i;
getch();
}