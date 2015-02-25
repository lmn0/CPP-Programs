#include<all.h>
class name
{
public:
void accept();
};

void name::accept()
{
int width=10;
	int height=10,x=50;
	int cursor=x,i=0;
	char ch,buffer[1000];
	int y=30,fore=10,back=BLACK,limit=99;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);

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
			outtextxy(cursor,y,tempstr);
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

void main()
{
int d=DETECT,mod;
initgraph(&d,&mod,"c:\\tc\\bgi");

ofstrem ofile;
ofile.open("c:\\tc\\XII\\proj\\score.txt",ios::app);

name n;
n.accept();
getch();
}
