#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int d=DETECT,m;
initgraph(&d,&m,"d:\\tc\\bgi");x:cleardevice();
char ch='a'; int x=20,y=300,tx,ty,s=0,j=0,k=0,flag=0,i=0,t=20,k1=1;
while(ch!=27)
{
setcolor(RED);
circle(x,y,11);
if(tx!=x || ty!=y)
{
setcolor(BLACK);
circle(tx,ty,11);
tx=x;ty=y;
}
setfillstyle(SOLID_FILL,BLUE);
bar(0,310,210,340);
bar(210,330,250,340);
bar(250,310,400,340);
bar(400,330,490,340);
bar(470,310,650,340);
bar(180,310,170,290);



if(x>650)
{x=20;y=300;}

if(ch== 'M')
x=x+5;

if(x>210 && x<250)
{

}

if(ch=='K')
{x=x-5;ch='a';}

if(ch== 'H' ||flag==1)
	{
	flag=1;
	if(j<=20)
	{
	y=y-j;j+=2;
	}
	else {
	     t=20;
	     if(x>210 && x<250)
	     t=21;
	     if(k<=t)
	     {
	     y=y+k;k+=2;
	     }
	     else {j=0;k=0;ch='a';flag=0;}
	     }
	 }

if(kbhit()!=0)
{ch=getch();}

delay(50);
}
}
