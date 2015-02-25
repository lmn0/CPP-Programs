#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int itm;
node *next;
}*front=NULL,*rear=NULL;

void qlin()
{
node *ptr;
ptr=new node;

cout<<"Enter the item to be inserted :";
cin>>ptr->itm;

if(rear==NULL)
rear=front=ptr;
else
rear->next=ptr;

ptr->next=NULL;
rear=ptr;

}

void del()
{
node *ptr;
ptr=front;
if(front==NULL)
     cout<<"\nDeletion not possible";
else
     if(front==rear)
     {cout<<"\nQueue empty now";front=rear=NULL;}
     else
     front=front->next;

delete ptr;
}

void disp()
{
node *ptr=front;
if(ptr==NULL)
cout<<"\nNo element";
else
while(ptr!=NULL)
{
cout<<ptr->itm;
ptr=ptr->next;
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
case 1:qlin();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
}
getch();
}
}

