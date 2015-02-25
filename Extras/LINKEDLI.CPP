#include<iostream.h>
#include<process.h>
#include<conio.h>

struct node
{
int rno;
node *next;
}*top=NULL;
		 int flag=-1;

void ins()
{ flag=1;
node *pt;
int rn;
cout<<"\nEnter the roll no. :";
cin>>rn;
pt=new node;
pt->rno=rn;
pt->next=top;
top=pt;
}


void del()
{
node *ptr;
ptr=top;

if(top->next==NULL && flag==1)
{cout<<"Stack empty";flag=0;}

if(top==NULL)
cout<<"\nDeletion not possible";

if(top!=NULL)
{
top=top->next;
delete ptr;
}

}

void disp()
{ cout<<"\n";
while(top!=NULL)
{
cout<<top->rno;
top=top->next;
}
}

void main()
{int ch;
while(1)
{clrscr();cout<<"MENU\n1)INS\n2)DEL\n3)DISP\n4)exit\n";
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


