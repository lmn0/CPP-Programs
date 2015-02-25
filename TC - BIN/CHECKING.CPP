#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int n,gh,pos=0;
char a[80][80],ch[80];
cout<<"Enter no. of Names\n";
cin>>n;
cout<<"\nEnter the names one by one\n";
for(int i=0;i<n;i++)
gets(a[i]);
cout<<"\nEnter a name for checking\n";
gets(ch);
for(i=0;i<n;i++)
{
gh=strcmp(ch,a[i]);
if(gh==0)
{
pos=i+1;
break;
}
}
if(gh==0)
cout<<"Found in position : "<<pos;
else
cout<<"Not found";
getch();
}

