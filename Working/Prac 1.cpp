# include <iostream.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <process.h>
# include <dos.h>
void sum(int a[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
sum+=a[i];
cout<<"\nSum ="<<sum;
}

void product(int a[],int n)
{
int pro=1,i;
for(i=0;i<n;i++)
pro*=a[i];
cout<<"\nProduct = "<<pro;
}

void average(int a[],int n)
{
int tot=0,i;
float avg;
for(i=0;i<n;i++)
tot=+a[i];
avg=tot/n;
cout<<"\nAverage = "<<avg;
}

void main()
{
clrscr();
int n,i,ch,a[20];
char x;
a:cout<<"\a\tEnter size of the array -->";
cin>>n;
cout<<"\nNow enter the elements one by one"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n\t\aM\t\aE\t\aN\t\aU";
cout<<"\n\t(1) Find the sum of the entered numbers";
cout<<"\n\t(2) Find the product of the entered numbers";
cout<<"\n\t(3) Find the average of the entered numbers";
cout<<"\n\t(4) Exit";
cout<<"\n\n\n\tEnter your choice ";
cin>>ch;
switch(ch)
{
case 1:sum(a,n);break;
case 2:product(a,n);break;
case 3:average(a,n);break;
case 4:exit(0);
default:cout<<"\n\a\a\t\t\tWrong Choice";
}
cout<<"\n\nDo you want to try again ??";
cin>>x;
if(x=='Y'||x=='y')
goto a;
else exit(0);
getch();
}
