#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[50],b[50],c[100],i,j,k,m,n;
cout<<"Enter no. of elements in A and B :";
cin>>m>>n;
cout<<"\nEnter A in ascendign order:\n";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"\nEnter B in ascending order:\n";
for(i=0;i<n;i++)
cin>>b[i];
i=0;j=0;k=0;
while(i<m && j<n)
{
if(a[i]<b[j])
c[k++]=a[i++];
else
c[k++]=b[j++];
}
if(i<m)
while(i<m)
c[k++]=a[i++];
else
while(j<n)
c[k++]=b[j++];
cout<<"\nSorted and Merged no.s :\n";
for(i=0;i<k;i++)
cout<<c[i]<<" ";
getch();
}

