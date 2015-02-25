#include<all.h>

void main()
{
int d=DETECT,m,x=170,i,flag=0,j=0,k=1,flag2=0;char ch='r',gh=65,b[2];
initgraph(&d,&m,"c:\\tc\\bgi");

setcolor(BLUE);
outtextxy(100,100,"MADE BY");

for(i=1;i<=9;i++,x=x+10)
{
while(k!=0)
{
b[0]=gh;
b[1]='\0';
setcolor(k);
outtextxy(x,150,b);
gh++;
if((i==1 && k==20)||(i==2 && k==8) ||(i==3 && k==5) || (i==4 && k==10) || (i==5 && k==1) ||(i==6 && k==19) || (i==7 && k==19)||(i==8) ||(i==9 && k==11))
{k=1;gh=65;if(i==7)gh=' ';b[0]='\0';break;}
delay(200);
setcolor(BLACK);
outtextxy(x,150,b);

if(kbhit()!=0)
ch=getch();

if(ch=='r')
{sound(j*10+400);j++;}

if(ch=='s' && flag==0)
{flag=1;flag2=1;ch='e';}

if(ch=='s' && flag==1)
{flag2=0;flag=0;ch='e';}


if(flag2==1)
{nosound();}

if(ch!='r' && flag2==0)
{sound(j*10+400);j++;}

k++;
}
if(i==9)
break;

}
getch();
}