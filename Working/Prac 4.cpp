# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
void selection(int a[],int n)
{
int i,j,pos,small,temp;
for(i=0;i<n-1;i++)
{
pos=i;
small=a[i];
for(j=i+1;j<n;j++)
if(a[j]<small)
{
small=a[j];
pos=j;
}
temp=a[pos];
a[pos]=a[i];
a[i]=temp;
}
cout<"n\tThe sorted array is\n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}

void bubble(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
for(j=0;j<n-1;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
cout<<"\nThe sorted array is ";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}

void insertion(int a[],int n)
{
int i,j,t;
for(i=1;i<n;i++)
{
t=a[i];
j=i-1;
while(t<a[j] && j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
cout<<"\nThe sorted array is"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}

void main()
{
clrscr();
int a[20],i,ch,n;
char x;
a:cout<<"\n\n\tEnter size of the array-->";
cin>>n;
cout<<"\n\n\tEnter the elements one by one\n\t\t\t";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n\n*==*===*===*====*=====*=====*M\tE\tN\tU*===*====*====*====*";
cout<<"\n\n\t(1) Selection Sorting ??\n\t(2) Insertion Sorting??\n\t(3) Bubble sorting??";
cout<<"\nEnter your choice ------>";
cin>>ch;
switch(ch)
{
case 1:selection(a,n);break;
case 2:insertion (a,n);break;
case 3:bubble(a,n);break;
default:cout<<"\n E\aR\aR\aO\aR\a!!!!!!";
}
cout<<"\n\tDo you want to continue ??";
cin>>x;
if(x=='Y'||x=='y')
goto a;
}

