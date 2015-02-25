#include<iostream.h>
#include<conio.h>
void bin(int a[],int , int );
void sel(int a[],int );
void ins(int a[],int ,int );
void bub(int a[],int );
void rank(int );


void main()
{
char k;
do{
clrscr();
int a[50],i,g,n,item,f;
cout<<"MENU\n";
cout<<"1)binary search\n2)Sorting in Ascending order\nEnter ur choice:";
cin>>g;
if(g==1||g==2)
{
cout<<"\nEnter n";
cin>>n;
cout<<"\n\nEnter the matrix\n";
for(i=0;i<n;i++)
cin>>a[i];
}
switch(g)
{
case 1:cout<<"\nEnter the item: ";
       cin>>item;
       ins(a,n,-1);
       bin(a,n,item);
       break;

case 2:cout<<"\nEnter the sorting technique";
       cout<<"\n1)Selection\n2)Insertion\n3)Bubble\nEnter ur choice :";
       cin>>f;
       switch(f)
       {
       case 1:sel(a,n);break;
       case 2:ins(a,n,1);break;
       case 3:bub(a,n);break;
       default:cout<<"\nSorry";break;
       }break;
default:cout<<"\nSorry";break;
}
cout<<"\n\nDo u want to repeat?\n(Y/N) :";
cin>>k;
}while(k=='y' ||k=='Y');
}

void bin(int a[],int n,int item)
{
int i,beg=0,end=n-1,mid,pos=-1;
mid=(beg+end)/2;
pos=0;
while(beg<=end)
{
mid=(beg+end)/2;
if(a[mid]==item)
{
pos=i;
break;
}
if(a[mid]>item)
end=mid-1;
if(a[mid]<item)
beg=mid+1;
}
if(pos!=-1)
cout<<"\nFound in pos ="<<pos+1;
else
cout<<"\nNot found";
}

void sel(int a[], int n)
{
int i,j,small,t,pos=0;
for(i=0;i<n;i++)
{
small=a[i];
pos=i;
j=i+1;
while(j<n){
if(a[j]<small)
{small=a[j];pos=j;}
j++;
}
a[pos]=a[i];
a[i]=small;
}
cout<<"\nSorted array:\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
}

void ins(int a[], int n, int r)
{
int i,j,t;
for(i=1;i<n;i++)
{
t=a[i];
j=i-1;
while(j>=0 && t<a[j])
a[j+1]=a[j--];
a[j+1]=t;
}
if(r==0)
cout<<"\nSorted array:\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
}

void bub(int a[],int n)
{
int i,j,temp;
for(j=0;j<n;j++)
for(i=0;i<n;i++)
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
cout<<"\nSorted array:\n";
for(i=0;i<n;i++)
cout<<" "<<a[i];
}














