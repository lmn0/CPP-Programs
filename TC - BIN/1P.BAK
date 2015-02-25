#include<fstream.h>
#include<iostream.h>
#include<all.h>
#include<conio.h>

void bub(int a[], int n)
{
int i,j,temp;
for(i=0;i<n;i++)
for(j=0;j<n-i-1;j++)
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
cout<<"\n\nBUBBLE SORT :";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

void sel(int a[], int n)
{
int small,i,pos,j;
for(i=0;i<n;i++)
{
small=a[i];
for(j=i+1;j<n;j++)
if(small>a[j])
{small=a[j];pos=j;}
a[pos]=a[i];
a[i]=small;
}
cout<<"\n\nSELECTION SORT :";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

void ins(int a[], int n)
{
int temp,i,j;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(a[j]>temp && j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
cout<<"\n\nINSERTION SORT :";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
}

void main()
{
clrscr();
int a[80],n,i,b[80],c[80];
cout<<"Enter the size:";
cin>>n;
cout<<"\nEnter the array:";
for(i=0;i<n;i++)
{cin>>a[i];b[i]=a[i];c[i]=a[i];}

bub(a,n);
sel(b,n);
ins(c,n);

getch();
}
