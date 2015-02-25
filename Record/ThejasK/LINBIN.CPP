#include<iostream.h>
#include<conio.h>
void lin(int a[], int n,int item)
{
int i,pos=-1;
for(i=0;i<n;i++)
if(a[i]==item)
{pos=i+1;break;
}
if(pos!=-1)
cout<<"Found in :"<<pos;
else
cout<<"Not found";
}

void bin(int a[], int n, int item)
{
int i,beg=0,end=n-1,mid,pos=-1;
mid=(beg+mid)/2;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==item)
{pos=mid+1;break;
}
if(a[mid]>item)
end=mid-1;
if(a[mid]<item)
beg=mid+1;
}

if(pos!=-1)
cout<<"Found in pos ="<<pos;
else
cout<<"Not found";
}

void bigs(int a[], int n)
{
int big, small,i;
big=a[0];small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
cout<<"the smallest no. :"<<small<<"   biggest no. :"<<big;
}
void main()
{
char ch;
int i,a[100],n,item,g;
clrscr();
cout<<"enter n";
cin>>n;
cout<<"Etner no.";
for(i=0;i<n;i++)
cin>>a[i];
do{
cout<<"M<E<N<U\n";
cout<<"1)linear \n2)binany\n3)bigsm";
cin>>g;
switch(g)
{
case 1:cout<<"Enter the item";
cin>>item;
lin(a,n,item);
break;
case 2:cout<<"Enter item";
cin>>item;
bin(a,n,item);
break;
case 3:bigs(a,n);break;
default:cout<<"Wrong choice";
}
cout<<"Do u wna to repeat?";
cin>>ch;
}while(ch=='Y' ||ch=='y');
}