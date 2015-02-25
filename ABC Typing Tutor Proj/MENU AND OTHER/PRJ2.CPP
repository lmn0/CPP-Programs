#include<all.h>
#include<math.h>
void greengets(char buffer[],int x,int y,int fore=10, int back=BLACK,int limit=80)
{
	int width=textwidth("W");
	int height=textheight("A");
	int cursor=x,i=0;
	char ch;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);
	while(1)
	{
		//If you donot want to diplay a flashing cursor, then remove
		//the kbhit() while loop
		///*
		while(!kbhit())
		{
			setcolor(10);
			line(cursor,y+height,cursor+width,y+height);
			delay(200);
			//clear out a rectangle of widthXheight
			setcolor(back);
			setfillstyle(1,back);
			int a[8];
			a[0]=cursor;
			a[1]=y;
			a[2]=cursor+width;
			a[3]=y;
			a[4]=cursor+width;
			a[5]=y+height+1;
			a[6]=cursor;
			a[7]=y+height+1;
			fillpoly(4,a);
			delay(200);
		}
		//till here*/

		ch=getch();sound(2000);delay(50);nosound();
		if( isprint(ch) )
		{
			if(i<limit)
			{
			buffer[i++]=ch;
			buffer[i]='\0';

			char tempstr[2]={ch,'\0'};

			//If you want to input a password,
			//then replace the above line with:
			//char tempstr[2]={'*','\0'};

			//clear out a rectangle of widthXheight
			setcolor(back);
			setfillstyle(1,back);
			int a[8];
			a[0]=cursor;
			a[1]=y;
			a[2]=cursor+width;
			a[3]=y;
			a[4]=cursor+width;
			a[5]=y+height+1;
			a[6]=cursor;
			a[7]=y+height+1;
			fillpoly(4,a);

			setcolor(fore);
			outtextxy(cursor,y,tempstr);
			cursor+=width;
			}
		}
		else if( ch==8 )	//code for Backspace
		{
			if(i>0)
			{
				buffer[--i]='\0';
				cursor-=width;

				//clear out a rectangle of widthXheight
				setcolor(back);
				setfillstyle(1,back);
				int a[8];
				a[0]=cursor;
				a[1]=y;
				a[2]=cursor+width;
				a[3]=y;
				a[4]=cursor+width;
				a[5]=y+height+1;
				a[6]=cursor;
				a[7]=y+height+1;
				fillpoly(4,a);

				setcolor(fore);
			sound(2000);delay(50);nosound();
			}
		}
		else if( ch==13 )	//The Enter key was pressed.
		{			//You can put a similar exit
		   break;		//for Esc key (ch==27)
		}
	}
	setcolor(fore);
}

void fun2()
{



}

void main()
{
//1 fun
int detect=DETECT,mode,p=1;
initgraph(&detect,&mode,"c:\\tc\\bgi");      /*
for(int k=0;k<300;k++)
{
setcolor(k);
bar3d(90,120,100+k,200,20,30);
setcolor(k);
outtextxy(140,300,"Loading");
if(k%50==0)
{setcolor(RED);
outtextxy(200+k/10,300,".");}
p++;
delay(30);
}
cleardevice();
setcolor(BLUE);
outtextxy(200,300,"LOADED");delay(100);
cleardevice();                                */

//2 fun
int style,size=5;
style=TRIPLEX_FONT;
settextstyle(style, HORIZ_DIR, size);
setcolor(RED);
outtextxy(190,40,"MENU");
setcolor(BLUE);
circle(250,250,220);
setcolor(YELLOW);
arc(250,250,290,90,100);
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.GAME");
setcolor(GREEN);
outtextxy(343,170,"2.FUN");
setcolor(MAGENTA);
outtextxy(360,230,"3.OPT");
setcolor(CYAN);
outtextxy(330,305,"4.OPT");

for(int j=0;j<250;j++)
{setcolor(RED); delay(20);
circle(250,250,220+j);}

//3 fun
char ch='d',t; int s=1,i=0;
while(i==0)
{
//down
if(ch=='P' && s==1)
{setcolor(YELLOW);settextstyle(style, HORIZ_DIR,2);
outtextxy(280,120,"1.GAME");s++;ch='d';
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT1");
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"GAME");
}
if(ch=='P' && s==2)
{settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.GAME");
setcolor(YELLOW);
outtextxy(343,170,"2.FUN");
ch='d';s++;
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"FUN");
}
if(ch=='P' && s==3)
{settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.FUN");
setcolor(YELLOW);
outtextxy(360,230,"3.OPT");
ch='d';s++;
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"FUN");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT");
}
if(ch=='P' && s==4)
{settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.OPT");
setcolor(YELLOW);
outtextxy(330,305,"4.OPT");
ch='d';s++;
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT1");
}
if(ch=='P' && s==5)
{settextstyle(style, HORIZ_DIR,2);
s=1;  setcolor(CYAN);ch='s';
outtextxy(330,305,"4.OPT");
settextstyle(style, HORIZ_DIR,2);
/*setcolor(YELLOW);
outtextxy(280,120,"1.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT1");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME"); */
}

if(ch=='H')
{
if(s==2)
{settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.GAME");
setcolor(YELLOW);
outtextxy(330,305,"4.OPT");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT1");s=5;ch='r';
}
if(s==3)
{settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(280,120,"1.GAME");
setcolor(GREEN);
outtextxy(343,170,"2.FUN");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"FUN");
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");ch='r';s--;
}
if(s==4)
{
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(343,170,"2.FUN");
setcolor(MAGENTA);
outtextxy(360,230,"3.OPT");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"OPT");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"FUN");ch='r';s--;
}

if(ch=='H' && s==5)
{
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.OPT");
setcolor(YELLOW);
outtextxy(360,230,"3.OPT");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"OPT1");ch='r';s--;
setcolor(YELLOW);
outtextxy(200,210,"OPT");
}
if(s==1)
{settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"OPT1");ch='r';s=5;
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(330,305,"4.OPT");
}
}

if(ch==13)
break;

if(ch==27)
exit(0);
t=ch;
ch=getch();
}cleardevice();
if(s==2)
cout<<"GAME";
if(s==3)
cout<<"FUN";
if(s==4)
cout<<"OPT";

//Exit
   int i1=3,y,ti,ty,m=1,x,tm;
if(s==5)                               cleardevice();
{
for(i1=0;i1<300;i1++)     {delay(20);
{
settextstyle(5,0,5);
setcolor(BLACK);
outtextxy(ti+9,ti-5,"K");
settextstyle(5,0,5);
setcolor(BLUE);
outtextxy(i1+9,i1-5,"K");

setcolor(BLACK);
settextstyle(4,0,5);
outtextxy(400-ti,ti,"T");
setcolor(GREEN);
settextstyle(4,0,5);
outtextxy(400-i1,i1,"T");

settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(140,ti,"H");
setcolor(CYAN);
settextstyle(1,0,5);
outtextxy(140,i1,"H");

if(400-i1>=300)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(170,400-ti,"E");
setcolor(RED);
settextstyle(1,0,5);
outtextxy(170,400-i1,"E");
}

if(i1<=200)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(ti,300,"J");
setcolor(YELLOW);
settextstyle(1,0,5);
outtextxy(i1,300,"J");
if(430-i1<330)
{setcolor(RED);
settextstyle(1,0,5);
outtextxy(170,300,"E");}
}

if(400-i1>=220)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(400-ti,300,"A");
setcolor(MAGENTA);
settextstyle(1,0,5);
outtextxy(400-i1,300,"A");
}

if(i1<=340){
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(250,ti,"S");
setcolor(LIGHTCYAN);
settextstyle(1,0,5);
outtextxy(250,i1,"S");
}

if(400-i1>=300)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(275,400-ti,"S");
setcolor(LIGHTRED);
settextstyle(1,0,5);
outtextxy(275,400-i1,"S");
}
if(i1>100){
/*settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(300,ti,"S"); */
setcolor(LIGHTRED);
settextstyle(1,0,5);
outtextxy(275,300,"S");
}

ti=i1;
outtextxy(300,300,".");
}
outtextxy(130,130,"MADE BY");
}



getch();
exit(0);
}

getch();
}

