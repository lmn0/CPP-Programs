#include<all.h>
#include<fstream.h>
int score=0,bonus=0;
class name
{
char buffer[100];
int tot;
public:
void accept();
void cal()
{
tot=score+bonus;
}
void disp();

};
void name::disp()
{
{static int kl=1;  clrscr();
cleardevice();

cout<<"\n\n\n"<<kl<<".";

cout<<"               "<<tot;
outtextxy(20,40,buffer);
outtextxy(100,10,"Score Board");

}
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




void scor()
{
ofstream ofile;
ofile.open("c:\\tc\\XII\\proj\\score.txt",ios::app);

name n;
n.cal();
n.accept();

ofile.write((char*)&n,sizeof(n));
outtextxy(10,90,"Name saved");

ofile.close();

 cleardevice();
				  setbkcolor(BLACK);
ifstream ifile;            int qw=0;
ifile.open("c:\\tc\\XII\\proj\\score.txt");
while(ifile.read((char*)&n,sizeof(n)))
{
n.disp();
}
ifile.close();


getch();
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




void main()
{
int d=DETECT,mod;
initgraph(&d,&mod,"c:\\tc\\bgi");

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

int n=-1,m=0,l=0,x,y=90,tx,ty,tl=-1,flag=0,k=1,ti;
char word[23][20]={"the\0","he\0","yup\0","google\0","msn\0","video\0","tuesday\0","wedness\0","fool\0","kochi\0","delhi\0","mumbai\0","flood\0","search\0","run\0","project\0","theju\0","comp\0","imation\0","europe\0","zeebra\0","bench\0","xmcn.\0"},ch=' ',wd[20]={"\0"},er[20];
e: n=-1;
randomize();
l=rand()%23;
x=rand()%300+90;

if(tl==l)
goto e;



settextstyle(1,0,1);

for(y=90;y<=383;y=y+10)
{

if(kbhit()!=0)
{ch=getch();n++;}

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
settextstyle(1,0,1);
outtextxy(10,90,"Your score is :");
cout<<score+bonus;
getch();cleardevice();
scor();

exit(0);
}

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

if(flag==0)
{
for(m=0;m<n+1;m++)
er[m]=word[l][m];
er[m]=word[l][n+1];
er[m+1]='\0';
}

setcolor(RED);
outtextxy(x,y,er);

if(n!=-1)
{setcolor(GREEN);
outtextxy(x,y,wd);}

flag=1;
}


x=rand()%300+90;
delay(350);
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

