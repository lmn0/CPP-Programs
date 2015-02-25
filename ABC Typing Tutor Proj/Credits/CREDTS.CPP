#include<all.h>
void main()
{
//credits
int mode,d=DETECT;
initgraph(&d,&mode,"c:\\tc\\bgi");
setbkcolor(BLUE);
settextstyle(5,0,1);
outtextxy(200,90,"CREDITS");

for(int i=0;i<10;i++)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Project Designer");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,180,222);
delay(500);
}
setcolor(BLUE);
outtextxy(40,200,"Project Designer");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,195,222);

for(i=5;i<15;i++)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Logic Development");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,195,222);
delay(500);
}
setcolor(BLUE);
outtextxy(40,200,"Logic Development");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,195,222);

for(i=7;i<17;i++)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Visual Effects");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,155,222);
delay(500);
}

setcolor(BLUE);
outtextxy(40,200,"Visual Effects");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,155,222);

for(int i=10;i>0;i--)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Inspiration");
outtextxy(40,220,"Mr. Retna Singh");
line(40,222,125,222);
delay(500);
}
for(i=0;i<50;i++)
{
setcolor(i);
outtextxy(100,200,"Thank you for using ABC Typing");
delay(200);
}
}
