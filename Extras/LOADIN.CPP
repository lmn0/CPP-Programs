#include<all.h>

void main()
{
int d=DETECT,m,ti;
initgraph(&d,&m,"c:\\tc\\bgi");

settextstyle(3,0,3);
setcolor(WHITE);
outtextxy(150,150,"L");
outtextxy(170,150,"O");
outtextxy(190,150,"A");
outtextxy(210,150,"D");
outtextxy(230,150,"I");
outtextxy(250,150,"N");
outtextxy(270,150,"G");

delay(1000);
int i=0,g;

for(i=0;i<2;i++)
{
if(i==0)
g=15;
else
g=4;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(150,150,"L");
setcolor(g);
settextstyle(3,0,5);
outtextxy(150,140,"L");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(150,140,"L");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(150,150,"L")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(170,150,"O");
setcolor(g);
settextstyle(3,0,5);
outtextxy(170,140,"O");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(170,140,"O");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(170,150,"O")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(190,150,"A");
setcolor(g);
settextstyle(3,0,5);
outtextxy(190,140,"A");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(190,140,"A");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(190,150,"A")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(210,150,"D");
setcolor(g);
settextstyle(3,0,5);
outtextxy(210,140,"D");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(210,140,"D");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(210,150,"D")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(230,150,"I");
setcolor(g);
settextstyle(3,0,5);
outtextxy(230,140,"I");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(230,140,"I");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(230,150,"I")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(250,150,"N");
setcolor(g);
settextstyle(3,0,5);
outtextxy(250,140,"N");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(250,140,"N");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(250,150,"N")   ;

setcolor(BLACK);
settextstyle(3,0,3);
outtextxy(270,150,"G");
setcolor(g);
settextstyle(3,0,5);
outtextxy(270,140,"G");
delay(200);
setcolor(BLACK);
settextstyle(3,0,5);
outtextxy(270,140,"G");
//delay(200);
setcolor(g);
settextstyle(3,0,3);
outtextxy(270,150,"G")   ;

}


getch();
}