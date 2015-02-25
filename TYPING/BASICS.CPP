#include<all.h>
#include<fstream.h>

void inter()
{setcolor(WHITE);
setfillstyle(1,WHITE);
bar(463,422,10+50,300);
setcolor(BLACK);

line(10+50,340,400+145,340);
line(10+50,380,400+145,380);
for(int i=0;i<360;)  {
line(100+i,300,100+i,422);   i+=40;}

setcolor(BLACK);
settextstyle(1,0,2);

outtextxy(73,305,"q");
outtextxy(113,305,"w");
outtextxy(153,305,"e");
outtextxy(193,305,"r");
outtextxy(233,305,"t");
outtextxy(273,305,"y");
outtextxy(313,305,"u");
outtextxy(353,305,"i");
outtextxy(393,305,"o");
outtextxy(433,305,"p");

outtextxy(73,345,"a");
outtextxy(113,345,"s");
outtextxy(153,345,"d");
outtextxy(193,345,"f");
outtextxy(233,345,"g");
outtextxy(273,345,"h");
outtextxy(313,345,"j");
outtextxy(353,345,"k");
outtextxy(393,345,"l");
outtextxy(433,345,";");

outtextxy(73,385,"z");
outtextxy(113,385,"x");
outtextxy(153,385,"c");
outtextxy(193,385,"v");
outtextxy(233,385,"b");
outtextxy(273,385,"n");
outtextxy(313,385,"m");
outtextxy(353,385,",");
outtextxy(393,385,".");
outtextxy(433,385,"/");

bar(193-10,405+60,313+25,445);
outtextxy(235,440,"Space");
bar(433+100,380,433+40,335);
outtextxy(478,345,"Enter");
}

int level()
{   char ch;
setbkcolor(BLUE);
settextstyle(4,0,2);
outtextxy(200,20,"BASIC LEVEL");
outtextxy(100,100,"Enter the level :");
outtextxy(100,140,"1. Upper keys");
outtextxy(100,180,"2. Middle keys");
outtextxy(100,220,"3. Bottom keys");
outtextxy(100,260,"4.Exit");
//outtextxy(100,260,"4. Make your text file for typing");

a:ch=getch();

switch(ch)
{
case '1':case '2':case '3':clrscr();cleardevice();setbkcolor(BLACK);return(ch);
case '4':exit(0);
default:outtextxy(100,300,"Pls make correct choice");goto a;
}

getch();
}

void main()
{ clrscr();    char t;
int detect=DETECT,mode;
initgraph(&detect,&mode,"c:\\tc\\bgi");
t=level();
inter();

char ch=1,f[1000]; int j=0,tm=0;
ifstream ifile;
switch(t)
{
case '1':ifile.open("c:\\tc\\XII\\proj\\upper.txt");break;
case '2':ifile.open("c:\\tc\\XII\\proj\\middle.txt");break;
case '3':ifile.open("c:\\tc\\XII\\proj\\bottom.txt");break;
/*case '4':ofstream ofile;
	ofile.open("c:\\tc\\XII\\proj\\ur.txt");*/
}

ifile.read((char*)&f,sizeof(f));
while(1)
{    setcolor(RED);settextstyle(1,0,1);outtextxy(300,10,"Press Esc to Exit the Tutorial");
x:
if(f[j]=='a')
{inter();
setfillstyle(1,YELLOW);bar(61,342,99,379);setcolor(BLACK);outtextxy(73,345,"a");if(ch=='a' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='s')
{inter();
setfillstyle(1,YELLOW);bar(101,342,139,379);setcolor(BLACK); outtextxy(113,345,"s");if(ch=='s'&& tm==0){j++;tm=1; goto x;}}

if(f[j]=='d')
{inter();
setfillstyle(1,YELLOW);bar(141,342,179,379);setcolor(BLACK); outtextxy(153,345,"d");if(ch=='d' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='f')
{inter();
setfillstyle(1,YELLOW);bar(181,342,219,379);setcolor(BLACK); outtextxy(193,345,"f");if(ch=='f' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='g')
{inter();
setfillstyle(1,YELLOW);bar(221,342,259,379);setcolor(BLACK); outtextxy(233,345,"g");if(ch=='g' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='h')
{inter();
setfillstyle(1,YELLOW);bar(261,342,299,379);setcolor(BLACK); outtextxy(273,345,"h");if(ch=='h' && tm==0){j++;tm=1;goto x;}}

if(f[j]==' ')
{inter();setfillstyle(1,YELLOW);bar(193-10,405+60,313+25,445);
outtextxy(235,440,"Space");if(ch==' ' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='j')
{inter();
setfillstyle(1,YELLOW);bar(301,342,339,379);setcolor(BLACK); outtextxy(313,345,"j");if(ch=='j' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='k')
{inter();
setfillstyle(1,YELLOW);bar(341,342,379,379);setcolor(BLACK); outtextxy(353,345,"k");if(ch=='k' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='l')
{inter();
setfillstyle(1,YELLOW);bar(381,342,419,379);setcolor(BLACK); outtextxy(393,345,"l");if(ch=='l' && tm==0){j++;tm=1;goto x;}}

if(f[j]==';')
{inter();
setfillstyle(1,YELLOW);bar(421,342,459,379);setcolor(BLACK); outtextxy(433,345,";");if(ch==';' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='q')
{inter();
setfillstyle(1,YELLOW);bar(61,301,99,339);setcolor(BLACK); outtextxy(73,305,"q");if(ch=='q' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='w')
{inter();
setfillstyle(1,YELLOW);bar(101,301,138,339);setcolor(BLACK); outtextxy(113,305,"w");if(ch=='w' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='e')
{inter();
setfillstyle(1,YELLOW);bar(141,301,178,339);setcolor(BLACK); outtextxy(153,305,"e");if(ch=='e' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='r')
{inter();
setfillstyle(1,YELLOW);bar(181,301,218,339);setcolor(BLACK); outtextxy(193,305,"r");if(ch=='r' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='t')
{inter();
setfillstyle(1,YELLOW);bar(221,301,258,339);setcolor(BLACK); outtextxy(233,305,"t");if(ch=='t' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='y')
{inter();
setfillstyle(1,YELLOW);bar(261,301,298,339);setcolor(BLACK); outtextxy(273,305,"y");if(ch=='y' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='u')
{inter();
setfillstyle(1,YELLOW);bar(301,301,338,339);setcolor(BLACK); outtextxy(313,305,"u");if(ch=='u' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='i')
{inter();
setfillstyle(1,YELLOW);bar(341,301,378,339);setcolor(BLACK); outtextxy(353,305,"i");if(ch=='i' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='o')
{inter();
setfillstyle(1,YELLOW);bar(381,301,418,339);setcolor(BLACK); outtextxy(393,305,"o");if(ch=='o' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='p')
{inter();
setfillstyle(1,YELLOW);bar(421,301,462,339);setcolor(BLACK); outtextxy(433,305,"p");if(ch=='p' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='z')
{inter();
setfillstyle(1,YELLOW);bar(60,382,99,422);setcolor(BLACK); outtextxy(73,385,"z");if(ch=='z' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='x')
{inter();
setfillstyle(1,YELLOW);bar(102,382,139,422);setcolor(BLACK); outtextxy(113,385,"x");if(ch=='x' && tm==0){j++;tm=1;goto x;}}


if(f[j]=='c')
{inter();
setfillstyle(1,YELLOW);bar(142,382,179,422);setcolor(BLACK); outtextxy(153,385,"c");if(ch=='c' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='v')
{inter();
setfillstyle(1,YELLOW);bar(182,382,219,422);setcolor(BLACK); outtextxy(193,385,"v");if(ch=='v' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='b')
{inter();
setfillstyle(1,YELLOW);bar(222,382,259,422);setcolor(BLACK); outtextxy(233,385,"b");if(ch=='b' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='n')
{inter();
setfillstyle(1,YELLOW);bar(262,382,299,422);setcolor(BLACK); outtextxy(273,385,"n");if(ch=='n' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='m')
{inter();
setfillstyle(1,YELLOW);bar(302,382,339,422);setcolor(BLACK); outtextxy(313,385,"m");if(ch=='m' && tm==0){j++;tm=1;goto x;}}

if(f[j]==',')
{inter();
setfillstyle(1,YELLOW);bar(342,382,379,422);setcolor(BLACK); outtextxy(353,385,",");if(ch==',' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='.')
{inter();
setfillstyle(1,YELLOW);bar(382,382,419,422);setcolor(BLACK); outtextxy(393,385,".");if(ch=='.' && tm==0){j++;tm=1;goto x;}}

if(f[j]=='/')
{inter();
setfillstyle(1,YELLOW);bar(422,382,461,422);setcolor(BLACK); outtextxy(433,385,"/");if(ch=='/' && tm==0){j++;tm=1;goto x;}}



if(ch==27)
exit(0);

ch=getch();tm=0;
}


getch();
}
