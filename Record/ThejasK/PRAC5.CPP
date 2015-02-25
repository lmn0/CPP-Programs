# include <iostream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
# include <dos.h>

void insertion()
{int a[50];
cout<<"Enter array size:";
int n;
cin>>n;
cout<<"Enter the matrix:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter position to insert:";
int pos;
cin>>pos;
cout<<"Enter item to insert:";
int item;
cin>>item;
for(i=n;i>pos-1;i--)
{a[i]=a[i-1];}
a[pos-1]=item;
cout<<"Sorted array is:";
for( i=0;i<n+1;i++)
cout<<a[i]<<" ";
}
void deletion()
{int a[50];
cout<<"Enter array size:";
int n;
cin>>n;
cout<<"Enter the matrix:";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Enter position to delete:";
int pos;
cin>>pos;
for(i=pos-1;i<n;i++)
{a[i]=a[i+1];}
cout<<"Sorted array is:";
for(i=0;i<n-1;i++)
cout<<a[i]<<" ";
}


void main()
{
char c;
do
{
clrscr();
int ch;
cout<<"MENU\n1)Insert element\n2)Delete element\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:insertion();break;
case 2:deletion();break;
default:cout<<"Wrong choice";delay(200);cout<<"\nGOING TO EXIT THE PROGRAM IN ";
for(int j=0;j<10;j++)
{
cout<<j;
//sound(2700);delay(200);nosound();
cout<<" ";
delay(100);
}
//sound(2950);delay(1000);nosound();
exit(0);
}
cout<<"\nDo u want to continue? ";
cin>>c;
}while(c=='y' | c=='Y');
}
