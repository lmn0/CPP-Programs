#include<iostream.h>
#include<process.h>
#include<conio.h>

int a[10],front=-1,rear=-1,size=10;

void inq()
{int it;

if(rear==-1)
	front=0;

if(rear==size-1)
	cout<<"\nQue full";
else
	{
	rear=rear+1;
	cout<<"\nEnter the item to be inserted :";
	cin>>it;
	a[rear]=it;
	}

}

void del()
{
if(rear==front && front!=-1)
     {cout<<"\nQueue Empty now";front=rear=-1;}

else
     if(front==-1)
     cout<<"\nDeletion not possible";
     else
     front=front+1;
}

void disp()
{
int i=front;

if(front==-1)
     cout<<"\nNo element";
else
     while(i<=rear)
     {
     cout<<a[i]<<" ";
     i++;
     }
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
case 1:inq();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
}
getch();
}
}