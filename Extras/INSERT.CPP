#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int n,a[100],i;
cout<<"n= ";
cin>>n;
cout<<"\nNo.s ";
for(i=0;i<n;i++)
cin>>a[i];

int j,l,t;

for(i=0;i<n-1;i++)
{
t=a[i+1];
l=i;
while(t<a[l] && l>=0)
{
a[l+1]=a[l];
l--;
}
a[l+1]=t;
}


for(i=0;i<n;i++)
cout<<a[i]<<" ";


getch();
}

