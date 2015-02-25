#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int d=DETECT,m; char ch;
initgraph(&d,&m,"c:\\tc\\bgi");
bar(200,0,210,460);
bar(350,0,360,460);
int x=220,y=430,tx=0,ty=0,sl=0,tsl=-1,i=1,r1y,r1=0;

bar(400,5,550,30);
setcolor(RED);   int flo=0;

while(ch!=27)
{
if(tx!=x || ty!=y)
{
setfillstyle(SOLID_FILL,WHITE);

for(;r1<=360;r1+=120)
bar((200+350)/2-5,r1,(200+350)/2+5,60+r1);

/*bar((200+350)/2-5,120,(200+350)/2+5,180);
bar((200+350)/2-5,240,(200+350)/2+5,300);
bar((200+350)/2-5,360,(200+350)/2+5,420);*/
if(flo==0)
{
setfillstyle(SOLID_FILL,BLACK);
bar(tx,ty,tx+20,ty+30);
setfillstyle(SOLID_FILL,BLUE);
bar(x,y,x+20,y+30);
tx=x;ty=y;
}
}

if(tsl!=sl)
{
setfillstyle(SOLID_FILL,WHITE);
bar(400,15,400+tsl,20);
setfillstyle(SOLID_FILL,RED);
bar(400,15,400+sl,20);
}
tsl=sl;
if(ch=='M')
{
x++;ch='a';
}

if(ch=='K')
{x--;ch='a';}

if(ch=='H' && y>=250)
{y-=i;ch='a';i++;sl++;r1++;flo=1;}

if(flo==1 && ch!='H')
{
for(int l=0;l<=50;l++)
{y--;setfillstyle(SOLID_FILL,BLACK);
bar(tx,ty,tx+20,ty+30);
setfillstyle(SOLID_FILL,BLUE);
bar(x,y,x+20,y+30);
tx=x;ty=y;delay(10);}
}
if(ch!='H' && 400+sl>=550)
sl--;

if(ch=='P' && y+30<=460)
{y+=i;ch='a';i++;sl--;}

if(y<=250 && ch=='H' && sl<=149)
sl++;
flo=0;
if(kbhit()!=0)
ch=getch();
else
while(kbhit()==0);
}


}