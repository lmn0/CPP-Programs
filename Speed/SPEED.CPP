#include<all.h>
#include<fstream.h>
#include<time.h>

void help()
{ cleardevice();
setbkcolor(RED);
settextstyle(4,0,2);
setcolor(BLUE);
outtextxy(300,50,"HELP");
settextstyle(4,0,1);
outtextxy(10,100,"In this speed testing level we give you a passage to type.");
outtextxy(10,130,"The untyped letter are in white colour. When you type a   ");
outtextxy(10,160,"letter the colour of the letter changes to green if the   ");
outtextxy(10,190,"letter typed is wrong then the colour changes to red. In  ");
outtextxy(10,220,"case of new line you need not press enter button to go to ");
outtextxy(10,250,"next line. As soon as the screen comes the clock starts   ");
outtextxy(10,280,"ticking so you must start typing as soon as the screen ap-");
outtextxy(10,310,"pears. Hope you'll enjoy the test!!!");
getch();
cleardevice();
}
void main()
{
int detect=DETECT,mode,p=1;
initgraph(&detect,&mode,"c:\\tc\\bgi");
cleardevice();ifstream ifile;int i=0,x=0,y=50,sum=0,h;

d:
randomize();
h=rand()%3+1;

switch(h)
{
case 1:ifile.open("c:\\tc\\XII\\proj\\speed1.txt");break;
case 2:ifile.open("c:\\tc\\XII\\proj\\speed2.txt");break;
case 3:ifile.open("c:\\tc\\XII\\proj\\speed3.txt");break;
}

char ch,m,b[2];
setbkcolor(BLACK);
setcolor(RED);
settextstyle(3,0,1);
outtextxy(50,20,"SPEED TESTING");
setcolor(GREEN);
outtextxy(400,400,"Press * for help");

setcolor(WHITE);
while(i<=497)
{if(x==560)
{x=0;y+=10;}

ch=ifile.get();
b[0]=ch;b[1]='\0';settextstyle(2,0,0);
if(ch=='\n')
{y+=10;x=-10;}
outtextxy(x,y,b);
x+=10;

i++;
}

x=0;y=50;
ifile.close();
i=0;

switch(h)
{
case 1:ifile.open("c:\\tc\\XII\\proj\\speed1.txt");break;
case 2:ifile.open("c:\\tc\\XII\\proj\\speed2.txt");break;
case 3:ifile.open("c:\\tc\\XII\\proj\\speed3.txt");break;
}

clock_t start, end;

start = clock();

while(i<=497)
{
i++;
ch=ifile.get();
m=getch();
if(m==ch)
{
setcolor(GREEN);
b[0]=ch;b[1]='\0';settextstyle(2,0,0);
outtextxy(x,y,b); sum++;
}
if(m=='\n' || ch=='\n')
{x=-10;y+=10;}
end = clock();

if(m!=ch)
{
setcolor(RED); b[0]=ch;b[1]='\0';
outtextxy(x,y,b);
}

x+=10;

if(x==560)
{x=0;y+=10;}

if(m==27)
exit(0);

if(m=='*')
{ifile.close();
help();
goto d;
}

}

//speed.

int g;
g=((end-start-2)/CLK_TCK)/60;

for(i=0;i<=5;i++)
{setbkcolor(i);delay(300);}




cleardevice();
setbkcolor(GREEN);
setcolor(RED);
cout<<"\n\n\n\n\n\n                            ";
settextstyle(4,0,1);
outtextxy(50,20,"SPEED TESTING");
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(10,90,"Your typing speed is :");
cout<<(int)sum/g<<" Letters per minute";
getch();

}