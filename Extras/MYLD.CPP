#include<all.h>
void main()
{

int d=DETECT,m;
initgraph(&d,&m,"c:\\tc\\bgi");

int x,y,mi,tx,ty,i,j,rd[201][2],l=0,k=0;
randomize();

for(mi=1;mi<=7;mi++,l=l+30,k=15)
{
for(i=150;i>=20;i-=10)
{
setcolor(i+mi);
for(j=0;j<=100;j++)
{
x=rand()%(i)+100+l/*-i*2*/;
y=rand()%(i)+200-k/*-i*2*/;
rd[j][0]=x;
rd[j][1]=y;
outtextxy(x,y,".");
}
//outtextxy(x,y,"L");
delay(250);
setcolor(BLACK);
for(j=0;j<=100;j++)
outtextxy(rd[j][0],rd[j][1],".");

}
settextstyle(1,0,2);
setcolor(i+mi+10);
if(mi==1)
outtextxy(100,200,"L");
if(mi==2)
outtextxy(130,200,"O");
if(mi==3)
outtextxy(160,200,"A");
if(mi==4)
outtextxy(190,200,"D");
if(mi==5)
outtextxy(220,200,"I");
if(mi==6)
outtextxy(250,200,"N");
if(mi==7)
outtextxy(280,200,"G");
}

delay(500);
setcolor(BLACK);
outtextxy(100,200,"L");
outtextxy(130,200,"O");
outtextxy(160,200,"A");
outtextxy(190,200,"D");
outtextxy(220,200,"I");
outtextxy(250,200,"N");
outtextxy(280,200,"G");

for(i=150;i>=20;i-=10)
{
setcolor(RED);
for(j=0;j<=200;j++)
{
x=rand()%(180+i)+100+l/*-i*2*/;
y=rand()%(30+i)+200-k/*-i*2*/;
rd[j][0]=x;
rd[j][1]=y;
outtextxy(x,y,".");
}
setcolor(BLACK);
for(j=0;j<=100;j++)
outtextxy(rd[j][0],rd[j][1],".");
}

getch();
}



