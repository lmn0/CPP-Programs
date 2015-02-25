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
const int size=10;
int i=0,a[10],top=-1;
void  push(int item)
{
if(top+1>size) cout<<"\n\aSorry ! Array Full ";
else
{
top++;
a[top]=item;
}
}

void pop()
{
if(top==-1)
cout<<"\n\aSorry! Array Empty ";
else top--;
}

void display()
{
for(i=0;i<=top;i++)
cout<<a[i]<<", ";
}

void main()
{
a:clrscr();
int item,ch;
cout<<"\n(1) Push\n(2) Pop\n(3) Diplay\n(4) Exit\n\nEnter your choice -->";
cin>>ch;
switch(ch)
{
case 1: cout<<"\nEnter Item to be pushed :";cin>>item;
	push(item);break;
case 2: cout<<"\nPopping";delay(200);pop();break;
case 3: display();break;
case 4: cout<<"\n\aExiting !!";delay(800);exit(0);
default:cout<<"\nWrong Choice ";
}

getch();
goto a;
}



