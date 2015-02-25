#include<all.h>

void main()
{
int d=DETECT,m,x=170,i,flag=0,j=0,flag2=0;char ch='r';
initgraph(&d,&m,"c:\\tc\\bgi");

setcolor(BLUE);
outtextxy(100,100,"MADE BY");

for(i=1;i<=9;i++,x=x+10)
{
if(kbhit()!=0)
ch=getch();

if(ch=='r')
{sound(j*10+500);j++;}

if(ch=='s' && flag==0)
{flag=1;flag2=1;ch='e';}

if(ch=='s' && flag==1)
{flag2=0;flag=0;ch=='e';}


if(flag2==1)
{nosound();}

if(ch!='r' && flag2==0)
{sound(j*10+500);j++;}

if(i==8)
continue;
setcolor(i);
outtextxy(x,150,"A");if(i==5)continue; delay(200);
setcolor(BLACK);
outtextxy(x,150,"A");
if(kbhit()!=0)
ch=getch();

setcolor(i+1);
outtextxy(x,150,"B");delay(200);
setcolor(BLACK);
outtextxy(x,150,"B");
if(kbhit()!=0)
ch=getch();

setcolor(i+2);
outtextxy(x,150,"C");delay(200);
setcolor(BLACK);
outtextxy(x,150,"C");
if(kbhit()!=0)
ch=getch();

setcolor(i+3);
outtextxy(x,150,"D");delay(200);
setcolor(BLACK);
outtextxy(x,150,"D");
if(kbhit()!=0)
ch=getch();

setcolor(i+4);
outtextxy(x,150,"E");delay(200);if(i==3)continue;
setcolor(BLACK);
outtextxy(x,150,"E");
if(kbhit()!=0)
ch=getch();

setcolor(i+5);
outtextxy(x,150,"F");delay(200);
setcolor(BLACK);
outtextxy(x,150,"F");
if(kbhit()!=0)
ch=getch();

setcolor(i+6);
outtextxy(x,150,"G");delay(200);
setcolor(BLACK);
outtextxy(x,150,"G");
if(kbhit()!=0)
ch=getch();

setcolor(i+7);
outtextxy(x,150,"H");delay(200);if(i==2)continue;
setcolor(BLACK);
outtextxy(x,150,"H");
if(kbhit()!=0)
ch=getch();

setcolor(i+8);
outtextxy(x,150,"I");delay(200);
setcolor(BLACK);
outtextxy(x,150,"I");
if(kbhit()!=0)
ch=getch();

setcolor(i+9);
outtextxy(x,150,"J");delay(200);if(i==4)continue;
setcolor(BLACK);
outtextxy(x,150,"J");
if(kbhit()!=0)
ch=getch();

setcolor(i+10);
outtextxy(x,150,"K");delay(200);if(i==9){nosound();break;}
setcolor(BLACK);
outtextxy(x,150,"K");
if(kbhit()!=0)
ch=getch();

setcolor(i+11);
outtextxy(x,150,"L");delay(200);
setcolor(BLACK);
outtextxy(x,150,"L");
if(kbhit()!=0)
ch=getch();

setcolor(i+12);
outtextxy(x,150,"M");delay(200);
setcolor(BLACK);
outtextxy(x,150,"M");
if(kbhit()!=0)
ch=getch();

setcolor(i+13);
outtextxy(x,150,"N");delay(200);
setcolor(BLACK);
outtextxy(x,150,"N");
if(kbhit()!=0)
ch=getch();

setcolor(i+14);
outtextxy(x,150,"O");delay(200);
setcolor(BLACK);
outtextxy(x,150,"O");
if(kbhit()!=0)
ch=getch();

setcolor(i+15);
outtextxy(x,150,"P");delay(200);
setcolor(BLACK);
outtextxy(x,150,"P");
if(kbhit()!=0)
ch=getch();

setcolor(i+16);
outtextxy(x,150,"Q");delay(200);
setcolor(BLACK);
outtextxy(x,150,"Q");
if(kbhit()!=0)
ch=getch();

setcolor(i+17);
outtextxy(x,150,"R");delay(200);
setcolor(BLACK);
outtextxy(x,150,"R");
if(kbhit()!=0)
ch=getch();

setcolor(i+18);
outtextxy(x,150,"S");delay(200);if(i==6 || i==7)continue;
setcolor(BLACK);
outtextxy(x,150,"S");
if(kbhit()!=0)
ch=getch();

setcolor(i+19);
outtextxy(x,150,"T");delay(200);if(i==1)continue;
setcolor(BLACK);
outtextxy(x,150,"T");
if(kbhit()!=0)
ch=getch();

setcolor(i+20);
outtextxy(x,150,"U");delay(200);
setcolor(BLACK);
outtextxy(x,150,"U");
if(kbhit()!=0)
ch=getch();

setcolor(i+21);
outtextxy(x,150,"V");delay(200);
setcolor(BLACK);
outtextxy(x,150,"V");
if(kbhit()!=0)
ch=getch();

setcolor(i+22);
outtextxy(x,150,"W");delay(200);
setcolor(BLACK);
outtextxy(x,150,"W");
if(kbhit()!=0)
ch=getch();

setcolor(i+23);
outtextxy(x,150,"X");delay(200);
setcolor(BLACK);
outtextxy(x,150,"X");
if(kbhit()!=0)
ch=getch();

setcolor(i+24);
outtextxy(x,150,"Y");delay(200);
setcolor(BLACK);
outtextxy(x,150,"Y");
if(kbhit()!=0)
ch=getch();

setcolor(i+25);
outtextxy(x,150,"Z");delay(200);
setcolor(BLACK);
outtextxy(x,150,"Z");
if(kbhit()!=0)
ch=getch();

}
getch();

}