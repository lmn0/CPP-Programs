#include<iostream.h>
#include<conio.h>
void main()
{

int n,a[1000],i,j=0,p;
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i];}

for(i=0;i<n;)
{
cout<<i+1;
j=i;
do
{
cout<<a[j];
p=j;
j=a[j]-1;
a[p]=-1;
}while(j!=i);
cout<<endl;
for(i=0;a[i]==-1;i++);
}

getch();
}

