#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,m,a[50],b[50],c[100],j,k=0;
cout<<"Enter the n and m values ";
cin>>n>>m;
cout<<"\nEnter A(in ascending)";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\nB(in Descending)";
for(i=0;i<m;i++)
cin>>b[i];
i=0;j=m-1;
while(i<n && j>=0)
{
if(a[i]>b[j])
c[k++]=b[j++];
if(a[i]<b[j])
c[k++]=a[i++];
}
while(i<n)
c[k++]=a[i++];
while(j>=0)
c[k++]=b[j++];

cout<<"Sorted aray :\n";
for(i=0;i<n+m;i++)
cout<<" "<<c[i];

getch();
}



