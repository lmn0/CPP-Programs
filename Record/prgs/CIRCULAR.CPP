#include<iostream.h>
#include<process.h>
#include<conio.h>
	 int a[5],size=5,front=-1,rear=-1;
void ins()
{
int itm;
clrscr();
cout<<"\nEnter the item :";
cin>>itm;
if((rear+1)%size!=front)
{
rear=(rear+1)%size;
a[rear]=itm;
}
else
cout<<"\nQueue full";
if(front==-1)
front=0;
}

void del()
{
if(front==rear && front!=-1)
cout<<"\nQueue Empty";

if(front==-1)
cout<<"\nDeletion not possible";
else
{
if(front!=rear)
front=(front+1)%size;
else
front=rear=-1;
}

}

void disp()
{
int fr=front;
if(front==-1)
cout<<"\nNo element";
else
while(fr!=rear+1)
{
cout<<" "<<a[fr];
fr=(fr+1)%size;
}
}

void main()
{

int ch;
while(1)
{
clrscr();
cout<<"\nMENU\n1)Ins\n2)Del\n3)Disp\n4)Exit\nEnter ur choice :";
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