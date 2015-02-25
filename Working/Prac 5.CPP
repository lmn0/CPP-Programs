# include <iostream.h>////Ra}{uL T]-[E Gre@T
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
void insert(int a[],int n)
{
int i,item,pos;
cout<<"\n\aEnter item to be inserted ";
cin>>item;
cout<<"\nEnter position to be inserted ";
cin>>pos;
for(i=n-1;i>pos;i--)
{
a[i+1]=a[i];
a[pos]=item;
}
n++;
cout<<"\n\n\tThe new array is "<<endl;
for(i=0;i<n+1;i++)
cout<<a[i]<<endl;
}

void delet (int a[],int n)
{
int i,item,pos,flag;
cout<<"\nEnter number to be deleted";
cin>>item;
for(i=0;i<n;i++)
{
if(a[i]==item)
pos = i;
flag=1;
break;
}
for(i=pos;i<n;i++)
{
a[i]=a[i+1];
if(flag==0)
cout<<"\n\aNot found";
else
cout<<"\nThe new array is "<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"\n";
}
}
void main()
{
char x;
a:clrscr();
int a[20];
cout<<"\nEnter size of array";
int n;
cin>>n;
cout<<"\nEnter the elements one by one ";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"\n====*===*====*====* Menu *====*====*====*====*";
cout<<"\n(1) Insert a given element in a a given position";
cout<<"\n(2) Delete an element from the array";
cout<<"\n(3) Exit";
cout<<"\nEnter your choice --->";
int ch;
cin>>ch;
switch(ch)
{
case 1:insert(a,n);break;
case 2:delet (a,n);break;
case 3:exit (0);
default:cout<<"\nWrong choice";
}
cout<<"\nDo you want to continue ?? ( Y/y or N/n )";
if(x=='Y'||x=='y')
goto a;
getch();
}








