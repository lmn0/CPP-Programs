#include<iostream.h>
#include<conio.h>
#include<process.h>

int a[10],front=-1,rear=-1,size=5;

void qin()
{ int it;

if((rear+1)%size==front)
cout<<"\nQue full";

else
     {
     if(rear==-1)
     front=0;
     rear=(rear+1)%size;
     cout<<"\nEnter the item to insert :";
     cin>>it;
     a[rear]=it;
     }


}

void del()
{
if(front==-1)
     cout<<"\nDeletion not possible";

else if(front==rear && front!=-1)
     {cout<<"\nQueue Empty now";front=rear=-1;}
     else
     front=(front+1)%size;

}

void disp()
{
int i=front;

if(rear==-1)
     cout<<"\nNo element";
else
     {
     for(;i!=rear;i=(i+1)%size)
     cout<<a[i];
     cout<<a[i];
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
case 1:qin();break;
case 2:del();break;
case 3:disp();break;
case 4:exit(0);
}
getch();
}
}
