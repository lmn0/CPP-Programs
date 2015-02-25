#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{
int itm;
node *next;
}*top=NULL;


void stlin()
{
node *ptr;
ptr=new node;
cout<<"\nEnter item to be inserted :";
cin>>ptr->itm;
ptr->next=top;
top=ptr;
}

void del()
{
node *ptr;
ptr=top;
if(ptr==NULL)
     cout<<"\nDeletion not possible";
else
     {
     if(ptr->next==NULL)
     cout<<"\nStack empty now";
     top=top->next;
     }
delete ptr;
}

void disp()
{
node *ptr;
ptr=top;
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
case 1:stlin();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
default:cout<<"\nEnter correct choice";
}
getch();
}
}
