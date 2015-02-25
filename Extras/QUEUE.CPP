#include<iostream.h>
#include<process.h>
#include<conio.h>

struct node
{
int rno;
node *n;
}*rear=NULL,*front=NULL;

void ins()
{
int rn; static int flag=1;
node *ptr;
ptr=new node;
cout<<"\nEnter the roll no.:";
cin>>rn;
ptr->rno=rn;
if(flag==1)
front=ptr;
ptr->n=rear;
rear=ptr;
flag++;
}

void del()
{
node *ptr,*del;
ptr=rear;
while((ptr->n)->n!=NULL && ptr->n!=NULL)
{
ptr=ptr->n;
}
del=ptr;

if(ptr->n!=NULL)
{

del=del->n;
ptr->n=NULL;
delete del;

}
else
{delete del;rear=NULL;front=NULL;}
}

void disp()
{
node *ptr=rear;
if(ptr==NULL)
cout<<"\nNo element";

else
while(ptr!=NULL)
{
cout<<ptr->rno;
ptr=ptr->n;
}

}


void main()
{
int ch;
while(1)
{clrscr();
cout<<"MENU\n1)INS\n2)DEL\n3)DISP\n4)EXIT\n";
cin>>ch;
switch(ch)
{
case 1:ins();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
}
getch();
}
}

