#include<all.h>
void main()
{
int detect=DETECT,mode;
initgraph(&detect,&mode,"c:\\tc\\bgi");

int s=0;

 char ch=' ';      setcolor(BLUE);
 outtextxy(100,50,"a");
 outtextxy(100,90,"b");
 outtextxy(100,150,"c");

while(1)
{
if(ch=='s')
{s++;if(s==4)s=1;}
if(ch=='w')
{s--;if(s==0)s=3; }

if(s==1)
{
setcolor(BLUE);
outtextxy(100,90,"b");
outtextxy(100,150,"c");
		      ch=' ';
setcolor(YELLOW);
outtextxy(100,50,"a");

}
if(s==2)
{
setcolor(BLUE);
outtextxy(100,50,"a");
outtextxy(100,150,"c");

setcolor(YELLOW);outtextxy(100,90,"b");

}
if(s==3)
{
setcolor(BLUE);
outtextxy(100,50,"a");outtextxy(100,90,"b");
     ch=' ';

setcolor(YELLOW);outtextxy(100,150,"c");
}
if(ch==13)
break;

if(s==3 && ch=='s')
{
setcolor(BLUE);
outtextxy(100,90,"b");
outtextxy(100,150,"c");

setcolor(YELLOW);
outtextxy(100,50,"a");
}

if(s==1 && ch=='w')
{
setcolor(BLUE);
outtextxy(100,50,"a");outtextxy(100,90,"b");


setcolor(YELLOW);outtextxy(100,150,"c");
}
ch=getch();

}



getch();
}