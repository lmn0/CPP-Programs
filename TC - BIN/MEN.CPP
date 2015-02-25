#include<iostream.h>
#include<all.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
union REGS in,out;

       int callmouse()
       {
              in.x.ax=1;
              int86(51,&in,&out);
	     return 1;
       }
       void mouseposi(int &xpos,int &ypos,int &click)
       { 
	     in.x.ax=3;
	     int86(51,&in,&out);
	     click=out.x.bx;
	     xpos=out.x.cx;
	     ypos=out.x.dx;
        }
       int mousehide()
       {
              in.x.ax=2;
	     int86(51,&in,&out);
              return 1;
       }
      void setposi(int &xpos,int &ypos)
      { 
             in.x.ax=4;
             in.x.cx=xpos;
	    in.x.dx=ypos;
             int86(51,&in,&out);
      }
	void restrictmouseptr(int x1,int y1,int x2,int y2)
	 {
                 in.x.ax=7;
	        in.x.cx=x1;
                 in.x.dx=x2;
                 int86(51,&in,&out);
                 in.x.ax=8;
                 in.x.cx=y1;
                 in.x.dx=y2;
                 int86(51,&in,&out);
	 }
	 void menu(int &s,int &ts)
	 { int style=1;
	 switch(s)
{
case 0:
switch(ts)
{
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"BASICS");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,2);
outtextxy(280,120,"1.BASICS");ts=-1;
break;
case 1:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
settextstyle(style, HORIZ_DIR,5);
setcolor(BLACK);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(343,170,"2.GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");ts=-1;
break;
case 2:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 3:
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(360,230,"3.SPEED");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");ts=-1;
break;
case 3:
switch(ts)
{
case 0:
settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
break;
case 1:
settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
break;
case 2:
settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BLACK);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
break;
}
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");ts=-1;

break;
}

}


void main()
{             restrictmouseptr(0,0,500,400);
setposi(300,300);
int detect=DETECT,mode,style=1;
initgraph(&detect,&mode,"c:\\tc\\bgi");
settextstyle(style, HORIZ_DIR,2);
 setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");

   int s=-1,ma,mq,cl,ts=-1,tx,ty;
char ch;   callmouse();
while(1)
{
while(kbhit()==0)
{
mouseposi(ma,mq,cl);
if(ma>280 && ma<280+textwidth("1.BASICS") && mq>120 && mq<120+textheight("1.BASICS"))
{ts=s;s=0;}
if(ma>343 && ma<343+textwidth("2.GAME") && mq>170 && mq<170+textheight("2.GAME"))
{ts=s;s=1;}
if(ma>360 && ma<360+textwidth("3.SPEED") && mq>230 && mq<230+textheight("3.SPEED"))
{ts=s;s=2;}
if(ma>330 && ma<330+textwidth("4.EXIT") && mq>305 && mq<305+textheight("4.EXIT"))
{ts=s;s=3;}
menu(s,ts);
}
if(s==-1)
s=0;
ch=getch();
switch(ch)
{
case 'P':
ts=s;s=(s+1)%4;
break;
case 'H':
ts=s;s=s--;if(s<0)s=3;
break;
//default:exit(0);
}
menu(s,ts);
}


}