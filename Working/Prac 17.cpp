# include <fstream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
int rear=-1,front=-1,i=0,a[10];
const int size=10;
void insert(int item)
{
if(rear==size)
cout<<"\n\aSorry! Array Full";
else if(rear==-1)
{
rear=0;
front=0;
}
else rear++;
a[rear]=item;
}

void delt()
{
if(front==-1)
cout<<"\n\aSorry! Array empty ";
else if(front==rear)
{
front=-1;
rear=-1;
}
else front++;
}

void display()
{
for(i=front;i<=rear;i++)
cout<<a[i]<<", ";
}

void main()
{
int item,ch;
char x;
a:clrscr();
cout<<"\n(1) Insert into Queue\n(2) Delete from Queue\n(3) Diplay Queue\n(4) Exit";
cout<<"\nEnter Your Choice -->";
cin>>ch;
switch(ch)
{
case 1:cout<<"\nEnter Item to be inserted :";cin>>item;insert(item);break;
case 2:delt();break;
case 3:display();break;
case 4:exit(0);
default: cout<<"\nWrong Choice";
}
getch();
goto a;
}




