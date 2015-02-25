#include<iostream.h>
#include<process.h>
#include<conio.h>

int a[10],top=-1;

void push()
{
int it;

if(top==9)
cout<<"\nStack full";

else
{
cout<<"\nEnter the item :";
cin>>it;
top=top+1;
a[top]=it;
}

}

void del()
{

if(top==-1)
	cout<<"Deletion not possible";

else
	{
	if(top==0)
	cout<<"Stack empty now";
	top=top-1;
	}

}

void disp()
{
int i=0;
if(top==-1)
	cout<<"No element";

else
	for(;i<=top;i++)
	cout<<a[i]<<" ";
}

void main()
{

int ch;
while(1)
{
clrscr();
cout<<"MENU\n)Ins\n2)Del\n3)Disp\n4)Exit\nEnter ur choice:";
cin>>ch;
switch(ch)
{
case 1:push();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
}
getch();
}

}
