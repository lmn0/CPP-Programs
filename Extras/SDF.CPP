#include<all.h>
#include<fstream.h>
#include<math.h>
#include<time.h>

void load()
{
int i,ti,ste,tste;
settextstyle(TRIPLEX_FONT,0,5);
setcolor(BROWN);
outtextxy(200,210,"BASICS");
outtextxy(200,210,"SPEED");
outtextxy(200,210,"GAME");
outtextxy(200,210,"EXIT");
arc(250,250,-240+180,-90+180,100);
settextstyle(TRIPLEX_FONT,0,4);
for(ste=0;ste<=720;ste++)
{
setcolor(ste);
outtextxy(200,210,"Loading");
setcolor(BLACK);arc(250,250,-240+180+tste,-90+180+tste,100);setcolor(YELLOW);arc(250,250,-240+180+ste,-90+180+ste,100);delay(2);tste=ste;
}
}

void help()
{ cleardevice();
setbkcolor(RED);
settextstyle(4,0,2);
setcolor(BLUE);
outtextxy(250,50,"HELP");
settextstyle(4,0,1);
outtextxy(10,100,"In this speed testing level we give you a passage to type.");
outtextxy(10,130,"The untyped letters are in white colour. When you type a   ");
outtextxy(10,160,"letter the colour of the letter changes to green if the   ");
outtextxy(10,190,"letter typed is wrong then the colour changes to red. In  ");
outtextxy(10,220,"case of new line you need not press enter button to go to ");
outtextxy(10,250,"next line. As soon as the screen comes the clock starts   ");
outtextxy(10,280,"ticking so you must start typing as soon as the screen ap-");
outtextxy(10,310,"pears. Hope you'll enjoy the test!!!");
getch();
cleardevice();
}
void convert(int yu,char c2[])
{
int er;

for(er=3;er>=0;er--)
{
switch(yu%10)
{
case 0:c2[er]='0';break;
case 1:c2[er]='1';break;
case 2:c2[er]='2';break;
case 3:c2[er]='3';break;
case 4:c2[er]='4';break;
case 5:c2[er]='5';break;
case 6:c2[er]='6';break;
case 7:c2[er]='7';break;
case 8:c2[er]='8';break;
case 9:c2[er]='9';break;
}
yu=yu/10;
}                   c2[4]='\0';

}

int speed()
{


cleardevice();ifstream ifile;int i=0,x=10,y=50,sum=0,h;

d:x=10;y=50;
clrscr();cleardevice();setbkcolor(BLACK);
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
settextstyle(3,0,3);
outtextxy(150,10,"SPEED TESTING");
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(400,400,"Press * for Help");
outtextxy(400,380,"Press Esc to Exit");

setcolor(MAGENTA);
line(1,45,465,45);
line(1,45,1,300);
line(1,300,465,300);
line(465,45,465,300);

setcolor(WHITE);
while(1)
{if(x==460)
{x=10;y+=10;}
ch=ifile.get();

b[0]=ch;b[1]='\0';settextstyle(2,0,0);

if(ch=='\n')
{y+=10;x=10;}
if(ch=='*')
break;
outtextxy(x,y,b);
x+=10;

i++;
}

x=10;y=50;
ifile.close();
i=0;

switch(h)
{
case 1:ifile.open("c:\\tc\\XII\\proj\\speed1.txt");break;
case 2:ifile.open("c:\\tc\\XII\\proj\\speed2.txt");break;
case 3:ifile.open("c:\\tc\\XII\\proj\\speed3.txt");break;
}

clock_t start, end;   ch='r';

start = clock();

while(1)
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

if(m!=ch)
{
setcolor(RED); b[0]=ch;b[1]='\0';
outtextxy(x,y,b);
}
if(ch=='*')
break;

if(m=='\n' || ch=='\n')
{x=10;y+=10;}
x+=10;

if(x==460)
{x=10;y+=10;}

if(m==27)
return 0;

if(m=='*')
{ifile.close();cleardevice();
help();  setbkcolor(BLACK);
goto d;
}

}
end = clock();

//speed.
  cleardevice();setbkcolor(BLACK);
float g;
g=(float)((end-start-2)/CLK_TCK)/60.0;

/*for(i=0;i<=3;i++)
{setbkcolor(i);delay(300);}*/




cleardevice();
setbkcolor(MAGENTA);
setcolor(RED);
		     char cr[4],ex;
settextstyle(4,0,3);
outtextxy(50,20,"SPEED TESTING");
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(10,90,"Your typing speed is :");
convert((int)sum/g,cr);
outtextxy(300,90," Letters per minute");
outtextxy(250,90,cr);
while(1)
{
if(kbhit()!=0)
ex=getch();
if(ex==13)
break;
}  ifile.close();
return 0;
}
char helpg()
{
cleardevice();
settextstyle(4,0,1);
setcolor(BLUE);
setbkcolor(MAGENTA);
outtextxy(300,50,"HELP");
setcolor(RED);
outtextxy(10,100,"In this game you are supposed to type the word without ");
outtextxy(10,120,"making mistake before it hits the ground. If you type a");
outtextxy(10,140,"wrong letter that particular letter will become red and");
outtextxy(10,160,"you will have to type that letter inorder to move forward");
outtextxy(10,180,"Each time you blast a word you get points. If you blast 5");
outtextxy(10,200,"words continously you will get bonus point.");
getch();
cleardevice(); setbkcolor(BLACK);
settextstyle(4,0,1);
setcolor(BLUE);
setfillstyle(SOLID_FILL,RED);
outtextxy(250,50,"GAME");
setcolor(CYAN);
outtextxy(220,430,"Press * for help");
outtextxy(220,450,"Press Esc to exit");

setcolor(RED);
bar(90,400,460,405);

line(90,90,90,400);
line(460,90,460,405);
return ' ';
}

int score=0,bonus=0;
class name
{
public:
char buffer[100];
int tot,x,y,k;
name()
{
}

void first()
{tot=0;k=1;x=10;y=60;}


void accept();
void cal()
{
tot=score+bonus;
}
void disp();

}n,n1[100],m;
void name::disp()
{
char c[3],c2[4];
   settextstyle(3,0,3);
outtextxy(100,10,"Score Board");
       int uj=k;uj=k/10;
switch(uj)
{
case 0:c[0]='0';break;
case 1:c[0]='1';break;
case 2:c[0]='2';break;
case 3:c[0]='3';break;
case 4:c[0]='4';break;
case 5:c[0]='5';break;
case 6:c[0]='6';break;
case 7:c[0]='7';break;
case 8:c[0]='8';break;
case 9:c[0]='9';break;
}
	uj=k%10;
switch(uj)
{
case 0:c[1]='0';break;
case 1:c[1]='1';break;
case 2:c[1]='2';break;
case 3:c[1]='3';break;
case 4:c[1]='4';break;
case 5:c[1]='5';break;
case 6:c[1]='6';break;
case 7:c[1]='7';break;
case 8:c[1]='8';break;
case 9:c[1]='9';break;
}         c[2]='\0';


outtextxy(10,y,c);outtextxy(x+textwidth(c)+30,y,buffer);  convert(tot,c2);outtextxy(x+textwidth(buffer)+textwidth(c)+30+50,y,c2);

}

void name::accept()
{
int width=10;
	int height=10,x=65;
	int cursor=x,i=0;
	char ch;
	int y=40,fore=30,back=BLACK,limit=99;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);

	settextstyle(2,0,7);
	outtextxy(10,10,"Enter your details :");
	outtextxy(10,30,"Name:");


	while(1)
	{
		//If you donot want to diplay a flashing cursor, then remove
		//the kbhit() while loop
		///*
		while(!kbhit())
		{
			setcolor(10);
			line(cursor,y+height,cursor+width,y+height);
			delay(200);
			//clear out a rectangle of widthXheight
			setcolor(back);
			setfillstyle(1,back);
			int a[8];
			a[0]=cursor;
			a[1]=y;
			a[2]=cursor+width;
			a[3]=y;
			a[4]=cursor+width;
			a[5]=y+height+1;
			a[6]=cursor;
			a[7]=y+height+1;
			fillpoly(4,a);
			delay(200);
		}
		//till here*/

		ch=getch();sound(2000);delay(50);nosound();
		if( isprint(ch) )
		{
			if(i<limit)
			{
			buffer[i++]=ch;
			buffer[i]='\0';

			char tempstr[2]={ch,'\0'};

			//If you want to input a password,
			//then replace the above line with:
			//char tempstr[2]={'*','\0'};

			//clear out a rectangle of widthXheight
			setcolor(back);
			setfillstyle(1,back);
			int a[8];
			a[0]=cursor;
			a[1]=y;
			a[2]=cursor+width;
			a[3]=y;
			a[4]=cursor+width;
			a[5]=y+height+1;
			a[6]=cursor;
			a[7]=y+height+1;
			fillpoly(4,a);

			setcolor(fore);
			outtextxy(cursor,y-10,tempstr);
			cursor+=width;
			}
		}
		else if( ch==8 )	//code for Backspace
		{
			if(i>0)
			{
				buffer[--i]='\0';
				cursor-=width;

				//clear out a rectangle of widthXheight
				setcolor(back);
				setfillstyle(1,back);
				int a[8];
				a[0]=cursor;
				a[1]=y;
				a[2]=cursor+width;
				a[3]=y;
				a[4]=cursor+width;
				a[5]=y+height+1;
				a[6]=cursor;
				a[7]=y+height+1;
				fillpoly(4,a);

				setcolor(fore);
			sound(2000);delay(50);nosound();
			}
		}
		else if( ch==13 )	//The Enter key was pressed.
		{			//You can put a similar exit
		   break;		//for Esc key (ch==27)
		}
	}
	setcolor(fore);
	//return buffer;

     }

     void it()
     {

ifstream iifile;
iifile.open("c:\\tc\\XII\\proj\\speed.txt");
  iifile.close();
  iifile.open("c:\\tc\\XII\\proj\\score.txt");
  int jo=1;iifile.seekg(0);
iifile.read((char*)&m,sizeof(m));

while(jo<=m.k)
{
m.disp();
iifile.read((char*)&m,sizeof(m));
jo++;
}
iifile.close();
     }



void scor()
{
ofstream ofile;
ofile.open("c:\\tc\\XII\\proj\\score.txt",ios::app);

n.cal();
n.accept();


ofile.write((char*)&n,sizeof(n));
outtextxy(10,90,"Name saved");delay(600);

ofile.close();

 cleardevice();
				  setbkcolor(BLACK);
it();
}

int game()
{
cleardevice();
settextstyle(4,0,2);
settextstyle(4,0,2);
setcolor(GREEN);
setfillstyle(SOLID_FILL,RED);
outtextxy(250,50,"GAME");
settextstyle(4,0,1);
setcolor(CYAN);
outtextxy(220,430,"Press * for help");
outtextxy(220,450,"Press Esc to exit");

setcolor(RED);
bar(90,400,460,405);                             int fl=0;

line(90,90,90,400);
line(460,90,460,405);

ifstream ifile;

ifile.open("c:\\tc\\XII\\proj\\score.txt");
if(ifile.bad()==0)
{n.k++;n.y=n.y+50;n.x=10;}

else
n.first();
ifile.close();

int n=-1,m=0,l=0,x,y=90,tx,ty,tl=-1,flag=0,k=1,ti;

char word[30][20]={"the\0","he\0","yup\0","google\0","msn\0","video\0","tuesday\0","wedness\0","fool\0","kochi\0","delhi\0","mumbai\0","flood\0","search\0","run\0","project\0","theju\0","comp\0","imation\0","europe\0","zeebra\0","bench\0","xmcn.\0","record\0","science\0","physics\0","calculator\0","typingu\0","ideamobile\0","andiejsh\0"},ch=' ',wd[20]={"\0"},er[20];
e: n=-1;
randomize();
l=rand()%30;
x=rand()%300+90;

if(tl==l)
goto e;

settextstyle(7,0,2);

settextstyle(7,0,2);

for(y=90;y<=383;y=y+20)
{

if(kbhit()!=0)
{ch=getch();n++;}
settextstyle(7,0,2);

setcolor(BLACK);
outtextxy(tx,ty,word[l]);
setcolor(WHITE);
outtextxy(x,y,word[l]);
tx=x;ty=y;

if(ch==27 || m==30)
{
cleardevice();

setbkcolor(CYAN);
setcolor(RED);
cout<<"\n\n\n\n\n\n                   ";
settextstyle(4,0,1);
outtextxy(50,20,"GAME");
setcolor(BLUE);
settextstyle(1,0,1);  char c4[4];
outtextxy(10,90,"Your score is :");
convert(score+bonus,c4);
outtextxy(200,90,c4);
getch();cleardevice();
scor();getch();

return 0;
}
   settextstyle(7,0,2);

if((ch==word[l][n] && word[l][n]!='\0'))
{
setcolor(GREEN);
wd[n]=ch;
wd[n+1]='\0';
outtextxy(x,y,wd);

if(flag==1)
{
setcolor(RED);
outtextxy(x,y,er);
setcolor(GREEN);
outtextxy(x,y,wd);
}

if(strcmp(wd,word[l])==0)
{
setcolor(BLACK);
outtextxy(x,y,wd); tl=l;
wd[0]='\0';n=-1;flag=0;m++;

if(m==5*k)
{bonus+=10*k;k++;
		        settextstyle(7,0,2);

for(int i=0;i<5;i++)
{
settextstyle(1,0,10-i);
setcolor(GREEN);
outtextxy(120,120,"!!BONUS!!");
delay(500);
ti=i;
setcolor(BLACK);
settextstyle(1,0,10-ti);
outtextxy(120,120,"!!BONUS!!");
}

}

score+=5;
goto e;
}

}

if(ch=='*')
{ch=helpg();goto e;}

if(ch!=word[l][n] && n!=-1)
{

n--;
ch=word[l][n];

//if(flag==0)
{
for(m=0;m<n+1;m++)
er[m]=word[l][m];
er[m]=word[l][n+1];
er[m+1]='\0';
}

setcolor(RED);                      settextstyle(7,0,2);

outtextxy(x,y,er);

if(n!=-1)
{setcolor(GREEN);
outtextxy(x,y,wd);}

flag=1;
}


x=rand()%300+90;
delay(250);
}

cleardevice();

setbkcolor(CYAN);
setcolor(RED);
cout<<"\n\n\n\n\n\n                   ";
settextstyle(4,0,1);
outtextxy(50,20,"GAME");
setcolor(BLUE);
settextstyle(1,0,1);
outtextxy(10,90,"Your score is :");
cout<<score+bonus;
cleardevice();
scor();

getch();
}


void credits()
{
//credits

setbkcolor(BLUE);
settextstyle(5,0,1);
outtextxy(200,90,"CREDITS");

for(int i=0;i<10;i++)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Project Designer");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,180,222); sound(60*i+500);
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
line(40,222,195,222);   sound(50*i+500);
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
line(40,222,155,222);   sound(50*i+500);
delay(500);
}

setcolor(BLUE);
outtextxy(40,200,"Visual Effects");
outtextxy(40,220,"Thejass Krishnan");
line(40,222,155,222);

for(i=10;i>0;i--)
{
settextstyle(3,0,1);
setcolor(i);
outtextxy(40,200,"Inspiration");
outtextxy(40,220,"Mr. Retna Singh");
line(40,222,125,222);     sound(20*i+400);
delay(500);
}
for(i=0;i<50;i++)
{
setcolor(i);
outtextxy(100,200,"Thank you for using ABC Typing");
delay(200); sound(40*i+200);sound(21*i+300);
}     nosound();
cleardevice();setbkcolor(BLACK);
}

void inter()
{
setcolor(BLUE);
line(1,260,460,260);
line(1,50,1,260);
line(1,50,460,50);
line(460,50,460,260);

setcolor(WHITE);
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
{   char ch;      cleardevice();
setbkcolor(BLUE);
settextstyle(4,0,2);
outtextxy(200,20,"BASIC LEVEL");
outtextxy(100,100,"Enter the level :");
outtextxy(100,140,"1. Upper keys");
outtextxy(100,180,"2. Middle keys");
outtextxy(100,220,"3. Bottom keys");
outtextxy(100,260,"4. Open your file");
outtextxy(100,300,"5. Exit");
//outtextxy(100,260,"4. Make your text file for typing");

a:ch=getch();

switch(ch)
{
case '1':case '2':case '3':case '4':clrscr();cleardevice();setbkcolor(BLACK);return(ch);
case '5':return 0;
default:outtextxy(100,300,"Pls make correct choice");goto a;
}
}

void type(char c,int xc,int yc)
{ setcolor(GREEN);settextstyle(3,0,1);char ch[2];
ch[0]=c;ch[1]='\0';
switch(c)
{
case 'a':outtextxy(xc,yc,ch);break;
case 'b':outtextxy(xc,yc,ch);break;
case 'c':outtextxy(xc,yc,ch);break;
case 'd':outtextxy(xc,yc,ch);break;
case 'e':outtextxy(xc,yc,ch);break;
case 'f':outtextxy(xc,yc,ch);break;
case 'g':outtextxy(xc,yc,ch);break;
case 'h':outtextxy(xc,yc,ch);break;
case 'i':outtextxy(xc,yc,ch);break;
case 'j':outtextxy(xc,yc,ch);break;
case 'k':outtextxy(xc,yc,ch);break;
case 'l':outtextxy(xc,yc,ch);break;
case 'm':outtextxy(xc,yc,ch);break;
case 'n':outtextxy(xc,yc,ch);break;
case 'o':outtextxy(xc,yc,ch);break;
case 'p':outtextxy(xc,yc,ch);break;
case 'q':outtextxy(xc,yc,ch);break;
case 'r':outtextxy(xc,yc,ch);break;
case 's':outtextxy(xc,yc,ch);break;
case 't':outtextxy(xc,yc,ch);break;
case 'u':outtextxy(xc,yc,ch);break;
case 'v':outtextxy(xc,yc,ch);break;
case 'w':outtextxy(xc,yc,ch);break;
case 'x':outtextxy(xc,yc,ch);break;
case 'y':outtextxy(xc,yc,ch);break;
case 'z':outtextxy(xc,yc,ch);break;
case ';':outtextxy(xc,yc,ch);break;
case ',':outtextxy(xc,yc,ch);break;
case '.':outtextxy(xc,yc,ch);break;
case '/':outtextxy(xc,yc,ch);break;
case ' ':outtextxy(xc,yc,ch);break;
case '\n':yc+=20;break;
default:setcolor(RED);outtextxy(xc,yc,ch);break;
}
}


int basics()
{
clrscr();    char t;

t=level();


char ch=1,f[1000],n[2],bg[200]; int j=0,tm=0,i=0,xc=10,yc=50;
ifstream ifile;
switch(t)
{
case '1':ifile.open("c:\\tc\\XII\\proj\\upper.txt");break;
case '2':ifile.open("c:\\tc\\XII\\proj\\middle.txt");break;
case '3':ifile.open("c:\\tc\\XII\\proj\\bottom.txt");break;
case '4':cout<<"\n\nEnter the file name. Pls take care that the ending of the file is marked by an  '*' symbol : ";gets(bg);ifile.open(bg);break;
default:return 0;
/*case '4':ofstream ofile;
	ofile.open("c:\\tc\\XII\\proj\\ur.txt");*/
}                                char cv[2];           int px,py;
	   cleardevice();
    ifile.read((char*)&f,sizeof(f));
    u:px=10;py=50;setcolor(WHITE); settextstyle(3,0,1);
while(f[i]!='*')
{n[0]=f[i];n[1]='\0';if(f[i]=='\n'){py+=20;px=10;}else {outtextxy(px,py,n);px+=10;}if(px==450){px=10;py+=20;}if(py==250)break;i++;}

while(f[j]!='*')
{ inter();   setcolor(RED);settextstyle(1,0,1);outtextxy(300,10,"Press Esc to Exit the Tutorial");
x:
if(f[j]=='a')
{inter();
setfillstyle(1,YELLOW);bar(61,342,99,379);setcolor(BLACK);outtextxy(73,345,"a");if(ch=='a' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='s')
{inter();
setfillstyle(1,YELLOW);bar(101,342,139,379);setcolor(BLACK); outtextxy(113,345,"s");if(ch=='s'&& tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1; goto x;}}

if(f[j]=='d')
{inter();
setfillstyle(1,YELLOW);bar(141,342,179,379);setcolor(BLACK); outtextxy(153,345,"d");if(ch=='d' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='f')
{inter();
setfillstyle(1,YELLOW);bar(181,342,219,379);setcolor(BLACK); outtextxy(193,345,"f");if(ch=='f' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='g')
{inter();
setfillstyle(1,YELLOW);bar(221,342,259,379);setcolor(BLACK); outtextxy(233,345,"g");if(ch=='g' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='h')
{inter();
setfillstyle(1,YELLOW);bar(261,342,299,379);setcolor(BLACK); outtextxy(273,345,"h");if(ch=='h' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]==' ')
{inter();setfillstyle(1,YELLOW);bar(193-10,405+60,313+25,445);
outtextxy(235,440,"Space");if(ch==' ' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='j')
{inter();
setfillstyle(1,YELLOW);bar(301,342,339,379);setcolor(BLACK); outtextxy(313,345,"j");if(ch=='j' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='k')
{inter();
setfillstyle(1,YELLOW);bar(341,342,379,379);setcolor(BLACK); outtextxy(353,345,"k");if(ch=='k' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='l')
{inter();
setfillstyle(1,YELLOW);bar(381,342,419,379);setcolor(BLACK); outtextxy(393,345,"l");if(ch=='l' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]==';')
{inter();
setfillstyle(1,YELLOW);bar(421,342,459,379);setcolor(BLACK); outtextxy(433,345,";");if(ch==';' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='q')
{inter();
setfillstyle(1,YELLOW);bar(61,301,99,339);setcolor(BLACK); outtextxy(73,305,"q");if(ch=='q' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='w')
{inter();
setfillstyle(1,YELLOW);bar(101,301,138,339);setcolor(BLACK); outtextxy(113,305,"w");if(ch=='w' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='e')
{inter();
setfillstyle(1,YELLOW);bar(141,301,178,339);setcolor(BLACK); outtextxy(153,305,"e");if(ch=='e' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='r')
{inter();
setfillstyle(1,YELLOW);bar(181,301,218,339);setcolor(BLACK); outtextxy(193,305,"r");if(ch=='r' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='t')
{inter();
setfillstyle(1,YELLOW);bar(221,301,258,339);setcolor(BLACK); outtextxy(233,305,"t");if(ch=='t' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='y')
{inter();
setfillstyle(1,YELLOW);bar(261,301,298,339);setcolor(BLACK); outtextxy(273,305,"y");if(ch=='y' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='u')
{inter();
setfillstyle(1,YELLOW);bar(301,301,338,339);setcolor(BLACK); outtextxy(313,305,"u");if(ch=='u' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='i')
{inter();
setfillstyle(1,YELLOW);bar(341,301,378,339);setcolor(BLACK); outtextxy(353,305,"i");if(ch=='i' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='o')
{inter();
setfillstyle(1,YELLOW);bar(381,301,418,339);setcolor(BLACK); outtextxy(393,305,"o");if(ch=='o' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='p')
{inter();
setfillstyle(1,YELLOW);bar(421,301,462,339);setcolor(BLACK); outtextxy(433,305,"p");if(ch=='p' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='z')
{inter();
setfillstyle(1,YELLOW);bar(60,382,99,422);setcolor(BLACK); outtextxy(73,385,"z");if(ch=='z' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='x')
{inter();
setfillstyle(1,YELLOW);bar(102,382,139,422);setcolor(BLACK); outtextxy(113,385,"x");if(ch=='x' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}


if(f[j]=='c')
{inter();
setfillstyle(1,YELLOW);bar(142,382,179,422);setcolor(BLACK); outtextxy(153,385,"c");if(ch=='c' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='v')
{inter();
setfillstyle(1,YELLOW);bar(182,382,219,422);setcolor(BLACK); outtextxy(193,385,"v");if(ch=='v' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='b')
{inter();
setfillstyle(1,YELLOW);bar(222,382,259,422);setcolor(BLACK); outtextxy(233,385,"b");if(ch=='b' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='n')
{inter();
setfillstyle(1,YELLOW);bar(262,382,299,422);setcolor(BLACK); outtextxy(273,385,"n");if(ch=='n' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='m')
{inter();
setfillstyle(1,YELLOW);bar(302,382,339,422);setcolor(BLACK); outtextxy(313,385,"m");if(ch=='m' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]==',')
{inter();
setfillstyle(1,YELLOW);bar(342,382,379,422);setcolor(BLACK); outtextxy(353,385,",");if(ch==',' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='.')
{inter();
setfillstyle(1,YELLOW);bar(382,382,419,422);setcolor(BLACK); outtextxy(393,385,".");if(ch=='.' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='/')
{inter();
setfillstyle(1,YELLOW);bar(422,382,461,422);setcolor(BLACK); outtextxy(433,385,"/");if(ch=='/' && tm==0){type(ch,xc,yc);xc+=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}

if(f[j]=='\n')
{inter();
setfillstyle(1,YELLOW);bar(433+100,380,433+40,335);setcolor(BLACK); outtextxy(478,345,"Enter");;if(ch==13 && tm==0){yc+=20;xc=10;if(xc==450){xc=10;yc+=20;}if(yc==250){yc=50;cleardevice();goto u;}j++;tm=1;goto x;}}



if(ch==27)
{cleardevice();return 0;}

ch=getch();tm=0;
}
if(f[j]=='*')
{setbkcolor(CYAN);cleardevice(); settextstyle(1,0,3);setcolor(GREEN);
outtextxy(50,100,"Course completed");}  getch();

}


void main()
{
//1 fun
int detect=DETECT,mode,p=1;
initgraph(&detect,&mode,"c:\\tc\\bgi");
int xx,yy,mi,txx,tyy,ii,jj,j,rd[201][2],l=0,k=0;
ofstream o1;
o1.open("c:\\tc\\XII\\proj\\score.txt");
o1.close();
randomize();

for(mi=1;mi<=7;mi++,l=l+30,k=15)
{
for(ii=150;ii>=20;ii-=10)
{
setcolor(ii+mi);
for(jj=0;jj<=100;jj++)
{
xx=rand()%(ii)+100+l;
yy=rand()%(ii)+200-k;
rd[jj][0]=xx;
rd[jj][1]=yy;
outtextxy(xx,yy,".");
}
//outtextxy(x,y,"L");
delay(80);
setcolor(BLACK);
for(jj=0;jj<=100;jj++)
outtextxy(rd[jj][0],rd[jj][1],".");

}  sound(ii+300);
settextstyle(1,0,2);
setcolor(ii+mi+10);
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
nosound();
delay(500);


for(ii=0;ii<=150;ii+=10)
{setcolor(ii);

for(jj=0;jj<=200;jj++)
{sound(ii-jj+400);
xx=rand()%(180+ii)+100;
yy=rand()%(30+ii)+200-ii;
rd[jj][0]=xx;
rd[jj][1]=yy;
outtextxy(xx,yy,".");
}               delay(30);
setcolor(BLACK);
for(jj=0;jj<=100;jj++)
outtextxy(rd[jj][0],rd[jj][1],".");
}

cleardevice();
setcolor(BLUE);
outtextxy(200,300,"LOADED");delay(200);nosound();
cleardevice();

//2 fun
const int style=TRIPLEX_FONT,size=5;
s:
settextjustify(100,100);
setbkcolor(BLACK);clrscr();cleardevice();
//style=TRIPLEX_FONT;
settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
setcolor(WHITE);

{
sound(311.1);
delay(200);

sound(370);
delay(200);

sound(440);

delay(200);

sound(261.6);
delay(200);

sound(493.9);
delay(200);

sound(415.3);
delay(200);

sound(370);
delay(200);

sound(293.7);
delay(200);

sound(523.2);
delay(200);

nosound();
}
outtextxy(120,70,"ABC TYPING");
setcolor(BLUE);                int tste;
circle(250,250,220);
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,2);
for(int ste=0;ste<=6;ste++)
{
settextstyle(style,0,8-tste);
setcolor(BLACK);
outtextxy(280,120,"1.BASICS");

settextstyle(style,0,8-ste);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
delay(300);                        setcolor(BLUE);circle(250,250,220);
if(kbhit()!=0)
{settextstyle(style,0,8-ste);
setcolor(BLACK);
outtextxy(280,120,"1.BASICS");goto c;}

tste=ste;
}   tste=0;
setcolor(BLUE);
circle(250,250,220);
for(ste=0;ste<=6;ste++)
{
settextstyle(style,0,8-tste);
setcolor(BLACK);
outtextxy(343,170,"2.GAME");
settextstyle(style,0,8-ste);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
delay(300);                                  setcolor(BLUE);circle(250,250,220);
if(kbhit()!=0)
{settextstyle(style,0,8-ste);
setcolor(BLACK);
outtextxy(343,170,"2.GAME");goto  c; }

tste=ste;
}   tste=0;
setcolor(BLUE);
circle(250,250,220);

for(ste=0;ste<=6;ste++)
{
settextstyle(style,0,8-tste);
setcolor(BLACK);
outtextxy(360,230,"3.SPEED");
settextstyle(style,0,8-ste);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
delay(300);                             setcolor(BLUE);circle(250,250,220);
if(kbhit()!=0)
{settextstyle(style,0,8-ste);
setcolor(BLACK);
outtextxy(360,230,"3.SPEED");goto c;}

tste=ste;
}   tste=0;
setcolor(BLUE);
circle(250,250,220);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
		        tste=0;
for(ste=0;ste<=180;ste++)
{setcolor(BLACK);arc(250,250,-240+tste,-90+tste,100);setcolor(YELLOW);arc(250,250,-240+ste,-90+ste,100);delay(20);tste=ste;
if(kbhit()!=0)
{setcolor(BLACK);arc(250,250,-240+ste,-90+ste,100);goto c;}
}
for(j=0;j<250;j++)
{setcolor(BLUE); delay(5);
circle(250,250,220+j);if(kbhit()!=0)goto c;}

for(j=0;j<250;j++)
{setcolor(RED); delay(5);
circle(250,250,220+2*j+1);if(kbhit()!=0)
goto c;}

c:
setcolor(BLUE);
circle(250,250,220);
settextstyle(style,0,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
		        tste=0;

setcolor(BLUE);
circle(250,250,219);
setcolor(YELLOW);
arc(250,250,-240+180,-90+180,100);
settextstyle(style, HORIZ_DIR,2);
 setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
if(kbhit()!=0){
for(j=0;j<250;j++)
{setcolor(BLUE);
circle(250,250,220+j);}
for(j=0;j<250;j++)
{setcolor(RED);
circle(250,250,220+2*j+1);
}              }
 char ui;
if(kbhit()!=0)
ui=getch();

setfillstyle(1,BROWN);
pieslice(250,250,0,360,98);
//3 fun
char ch='d',t; int s=1,i=0;
f:while(i==0)
{
//down
h:if(ch=='P' && s==1)
{setcolor(YELLOW);settextstyle(style, HORIZ_DIR,2);
outtextxy(280,120,"1.BASICS");s++;ch='r';
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"BASICS");
}
if(ch=='P' && s==2)
{settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(YELLOW);
outtextxy(343,170,"2.GAME");
ch='r';s++;
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
}
if(ch=='P' && s==3)
{settextstyle(style, HORIZ_DIR,2);
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(YELLOW);
outtextxy(360,230,"3.SPEED");
ch='r';s++;
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
}
if(ch=='P' && s==4)
{settextstyle(style, HORIZ_DIR,2);
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
ch='r';s++;
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");
}
if(ch=='P' && s==5)
{  s=1;goto h;
}

if(ch=='H')
{
if(s==2)
{settextstyle(style, HORIZ_DIR,2);
setcolor(BLUE);
outtextxy(280,120,"1.BASICS");
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"EXIT");s=1;ch='r';
}
if(s==3)
{settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(280,120,"1.BASICS");
setcolor(GREEN);
outtextxy(343,170,"2.GAME");
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"BASICS");ch='r';s--;
}
if(s==4)
{
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(343,170,"2.GAME");
setcolor(MAGENTA);
outtextxy(360,230,"3.SPEED");
setcolor(BROWN);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"SPEED");
setcolor(YELLOW);
settextstyle(style, HORIZ_DIR,5);
outtextxy(200,210,"GAME");ch='r';s--;
}

if(s==5)
{
settextstyle(style, HORIZ_DIR,2);
setcolor(CYAN);
outtextxy(330,305,"4.EXIT");
setcolor(YELLOW);
outtextxy(360,230,"3.SPEED");
settextstyle(style, HORIZ_DIR,5);
setcolor(BROWN);
outtextxy(200,210,"EXIT");ch='r';s--;
setcolor(YELLOW);
outtextxy(200,210,"SPEED");
}
if(s==1)
{
settextstyle(style, HORIZ_DIR,5);
setcolor(YELLOW);
outtextxy(200,210,"EXIT");ch='r';s=5;
settextstyle(style, HORIZ_DIR,2);
setcolor(YELLOW);
outtextxy(330,305,"4.EXIT");
}
}
if(ch=='+')
{credits();goto s;}

if(ch==13 && s!=1)
break;

if(ch==27)
exit(0);
t=ch;
ch=getch();
}
if(s==2)
{load();cleardevice();basics();goto s;}
if(s==3)
{load();cleardevice();game();goto s;}
if(s==4)
{load();cleardevice();speed();goto s;}

//Exit
   int i1=3,y,ti,ty,m=1,x,tm;

if(s==5)
{     cleardevice();
for(i1=0;i1<300;i1++)     {delay(20);
{
settextstyle(5,0,5);
setcolor(BLACK);
outtextxy(ti+9,ti-5,"K");
settextstyle(5,0,5);
setcolor(BLUE);
outtextxy(i1+9,i1-5,"K");
 sound(i1+1+100);
setcolor(BLACK);
settextstyle(4,0,5);
outtextxy(400-ti,ti,"T");
setcolor(GREEN);
settextstyle(4,0,5);
outtextxy(400-i1,i1,"T");
 sound(i1*2+100);
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(140,ti,"H");
setcolor(CYAN);
settextstyle(1,0,5);
outtextxy(140,i1,"H");

if(400-i1>=300)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(170,400-ti,"E");
setcolor(RED);
settextstyle(1,0,5);
outtextxy(170,400-i1,"E");
}
 sound(i1*3+100);
if(i1<=200)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(ti,300,"J");
setcolor(YELLOW);
settextstyle(1,0,5);
outtextxy(i1,300,"J");
if(430-i1<330)
{setcolor(RED);
settextstyle(1,0,5);
outtextxy(170,300,"E");}
}
	    sound(i1*4+100);
if(400-i1>=220)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(400-ti,300,"A");
setcolor(MAGENTA);
settextstyle(1,0,5);
outtextxy(400-i1,300,"A");
}

if(i1<=340){
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(250,ti,"S");
setcolor(LIGHTCYAN);
settextstyle(1,0,5);
outtextxy(250,i1,"S");
}

if(400-i1>=300)
{
settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(275,400-ti,"S");
setcolor(LIGHTRED);
settextstyle(1,0,5);
outtextxy(275,400-i1,"S");
}                  sound(i1*3+100);
if(i1>100){
/*settextstyle(1,0,5);
setcolor(BLACK);
outtextxy(300,ti,"S"); */
setcolor(LIGHTRED);
settextstyle(1,0,5);
outtextxy(275,300,"S");
}

ti=i1;
outtextxy(300,300,".");
}
outtextxy(130,130,"MADE BY");
sound(i1+900);
}

nosound();

getch();
exit(0);
}

getch();
}

