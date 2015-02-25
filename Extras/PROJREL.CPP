#include<all.h>
void fun2()
{
	    int x=100,fore=2,back=0;
	    char buffer[1000];
int width=10;    char let[100];
	int height=10;
	int cursor=x,i=0,y=100,limit=999;
	char ch;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);
	gets(let);


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

		ch=getch();//sound(2000);delay(50);nosound();
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

			settextstyle(2, HORIZ_DIR, 4);
			setcolor(fore);
			outtextxy(cursor,y-5,tempstr);
			cursor+=width+1;
			}
		}
		else if( ch==8 )	//code for Backspace
		{
			if(i>0)
			{
				buffer[--i]='\0';
				cursor-=(width+1);

				//clear out a rectangle of widthXheight
				setcolor(back);
				setfillstyle(1,back);
				int a[8];
				a[0]=cursor;
				a[1]=y-5;
				a[2]=cursor+width;
				a[3]=y-5;
				a[4]=cursor+width;
				a[5]=y+height-4;
				a[6]=cursor;
				a[7]=y+height-4;
				fillpoly(4,a);

				setcolor(fore);
			sound(2000);delay(50);nosound();
			}
		}
		if(ch==13)
		{
		y=y+20;
		cursor=100;
		}

		else if( ch==27  )	//The Enter key was pressed.
		{			//You can put a similar exit
		   break;		//for Esc key (ch==27)
		}
	}
	setcolor(fore);

}
void main()
{int mode,d=DETECT;
initgraph(&d,&mode,"c:\\tc\\bgi");
cleardevice();fun2();getch();
}