#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<math.h>
#include<process.h>
#include<graphics.h>
#include<stdlib.h>
#include<values.h>
#include<fstream.h>

void end();
char greengets();
void graphics();
char ggets();

void credits();
void loading();

class note
{
public:
int file(char buffer[],int &i);
int edit();
int format();
int help();
void notepad();
}n;

char greengets(char buffer[],int x,int y,int fore=10, int back=BLACK,int limit=80)
{
	int width=textwidth("W");
	int height=textheight("A")+1;
	int cursor=x,i=0;
	char ch;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);
	while(1)
	{
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


		ch=getch();sound(2000);delay(50);nosound();
		if( isprint(ch) )
		{
			if(i<limit)
			{
			buffer[i++]=ch;
			buffer[i]='\0';

			char tempstr[2]={ch,'\0'};

			//clear out a rectangle of widthXheight
			setcolor(back);
			setfillstyle(1,back);
			int a[8];
			a[0]=cursor;
			a[1]=y;
			a[2]=cursor+width;
			a[3]=y;
			a[4]=cursor+width;
			a[5]=y+height+2;
			a[6]=cursor;
			a[7]=y+height+2;
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
				a[5]=y+height+2;
				a[6]=cursor;
				a[7]=y+height+2;
				fillpoly(4,a);

				setcolor(fore);
			sound(2000);delay(50);nosound();
			}
		}
		if( ch==13 )
		{
		  return 'y';
		}
		if(ch==27)
		{
		   return 'e';

		}
	}
	setcolor(fore);
}


int note::file(char buffer[],int &i)
{
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
bar3d(525,65,600,215,2,10);
setfillstyle(SOLID_FILL,9);
bar3d(525,65,600,76,0,0);
setcolor(12);
outtextxy(530,90,"New");
setcolor(WHITE);
outtextxy(530,110,"Open");
outtextxy(530,130,"Save as");
outtextxy(530,150,"Exit");
int state=0,tstate=1;
char ch;
while(1)
{

if(kbhit()!=0)
{

ch=getch();
tstate=state;
if(state==0 && ch=='P')
{state=1;goto z;}
if(state==1 && ch=='P')
{state=2;goto z;}
if(state==2 && ch=='P')
{state=3;goto z;}
if(state==3 && ch=='P')
{state=0;goto z;}
if(state==0 && ch=='H')
{state=3;goto z;}
if(state==3 && ch=='H')
{state=2;goto z;}
if(state==2 && ch=='H')
{state=1;goto z;}
if(state==1 && ch=='H')
{state=0;goto z;}
z:

if(ch=='K'|| ch=='M')
{
sound(1500);delay(50);nosound();
sound(2000);delay(50);nosound();
state=0;
tstate=1;
}

if(ch==13)
 {
   sound(1500);delay(50);nosound();
   sound(2000);delay(50);nosound();

   switch(state)
   {
    case 0:setcolor(0);
	   setfillstyle(SOLID_FILL,BLACK);
	   bar3d(520,60,620,230,0,0);
	   return 0;break;
    case 1:
		graphics();
		settextstyle(2,0,4);
		char filename2[75],ch[50],test2;
		int j=0;
		setcolor(GREEN);
		outtextxy(50,10,"Enter filename:");
		test2=greengets(filename2,50+textwidth("Enter filename:"),10);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(20,10,450,30,0,0);


		if(test2!='e')
		{
		ifstream ifile;
		ifile.open(filename2);
		if(ifile.bad()!=0)
		{
		sound(2000);delay(75);nosound();
		sound(1500);delay(125);nosound();
		setcolor(GREEN);outtextxy(50,10,"Invalid file name");delay(2000);setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(20,10,450,30,0,0);
		goto c;
		}
		setcolor(YELLOW);
		i=0;int co=0;
		while(!ifile.eof())
		{
		ifile.getline(ch,50,'\n');
		int k1=0,k2=0;

		while(ch[k1]!='\0')
		{
		char che[2];
		buffer[i++]=ch[k1];
		che[0]=ch[k1];
		che[1]='\0';
		if(co<=25)
		outtextxy(53+k2,78+j,che);
		k2=k2+textwidth("A")+1;
		k1++;
		}
		buffer[i++]='\n';
		j=j+textheight("A")+3;
		co++;
		}
		i--;
		buffer[i++]='\0';

		ifile.close();
		}

	       c:state=1;tstate=2;

    break;
    case 2:
		char filename[75],test;
		setcolor(GREEN);
		outtextxy(50,10,"Enter filename:");
		test=greengets(filename,50+textwidth("Enter filename:"),10);

		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(20,10,450,30,0,0);

		if(test!='e')
		{
		ofstream ofile;
		ofile.open(filename,ios::noreplace);
		if(ofile.bad()!=0)
		{char check[20];

		setcolor(GREEN);outtextxy(50,10,"File already exists");
		sound(2000);delay(75);nosound();
		sound(1500);delay(125);nosound();
		delay(1000);
		sound(2000);delay(75);nosound();
		sound(1500);delay(125);nosound();
		outtextxy(50,20,"Do you want to overwrite file?");test=greengets(check,50+textwidth("Do you want to overwrite file?"),20);

		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(20,10,450,35,0,0);

		if( (strcmp(check,"yes")==0) || check[0]=='y')
		{ofile.open(filename,ios::trunc);
		goto f;}
		else
		goto d;
		}

		f:int tk=0;
		setcolor(GREEN);
		outtextxy(50,20,"Saving File");
		sound(1500);delay(300);nosound();
		outtextxy(50,20,"Saving File .");
		delay(300);
		outtextxy(50,20,"Saving File . .");

		sound(2000);delay(75);nosound();
		sound(1500);delay(125);nosound();


		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(20,10,450,35,0,0);


		while(tk<=i)
		{ofile.put(buffer[tk]);tk++;}

		ofile.close();
		}

		d:state=2;tstate=3;


    break;
    case 3:     setcolor(0);
		setfillstyle(SOLID_FILL,BLACK);
		bar3d(520,60,620,230,0,0);
		end();return 3;

   }

 }

if(state==0)
{
setcolor(12);
outtextxy(530,90,"New");
}
if(state==1)
{
setcolor(12);
outtextxy(530,110,"Open");
}
if(state==2)
{
setcolor(12);
outtextxy(530,130,"Save as");
}
if(state==3)
{
setcolor(12);
outtextxy(530,150,"Exit");
}

if(tstate==0)
{
setcolor(15);
outtextxy(530,90,"New");
}
if(tstate==1)
{
setcolor(15);
outtextxy(530,110,"Open");
}
if(tstate==2)
{
setcolor(15);
outtextxy(530,130,"Save as");
}
if(tstate==3)
{
setcolor(15);
outtextxy(530,150,"Exit");
}

if(ch==27)
{
sound(2000);delay(50);nosound();
sound(1500);delay(50);nosound();
setcolor(0);
setfillstyle(SOLID_FILL,BLACK);
bar3d(520,60,620,230,0,0);
return 4;
}




}

}

}
int note::edit()
{
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
bar3d(525,65,600,215,2,10);
setfillstyle(SOLID_FILL,9);
bar3d(525,65,600,76,0,0);
setcolor(12);
outtextxy(530,90,"Find");
setcolor(WHITE);
outtextxy(530,110,"Replace");
outtextxy(530,130,"Cut");
outtextxy(530,150,"Copy");
outtextxy(530,170,"Paste");

int state=0,tstate=1;
char ch;
while(1)
{
if(kbhit()!=0)
{

ch=getch();
tstate=state;

if(state==0 && ch=='P')
{state=1;goto z;}
if(state==1 && ch=='P')
{state=2;goto z;}
if(state==2 && ch=='P')
{state=3;goto z;}
if(state==3 && ch=='P')
{state=4;goto z;}
if(state==4 && ch=='P')
{state=0;goto z;}
if(state==0 && ch=='H')
{state=4;goto z;}
if(state==4 && ch=='H')
{state=3;goto z;}
if(state==3 && ch=='H')
{state=2;goto z;}
if(state==2 && ch=='H')
{state=1;goto z;}
if(state==1 && ch=='H')
{state=0;goto z;}
z:

if(ch=='K'|| ch=='M')
{
sound(1500);delay(50);nosound();
sound(2000);delay(50);nosound();
state=0;
tstate=1;
}


if(ch==13)
 {
   sound(1500);delay(50);nosound();
   sound(2000);delay(50);nosound();

   switch(state)
   {
    case 0:state=0;tstate=1;break;
    case 1:state=1;tstate=2;break;
    case 2:state=2;tstate=3;break;
    case 3:state=3;tstate=4;break;
    case 4:state=4;tstate=0;break;
   }

 }
if(state==0)
{
setcolor(12);
outtextxy(530,90,"Find");
}
if(state==1)
{
setcolor(12);
outtextxy(530,110,"Replace");
}
if(state==2)
{
setcolor(12);
outtextxy(530,130,"Cut");
}
if(state==3)
{
setcolor(12);
outtextxy(530,150,"Copy");
}

if(state==4)
{
setcolor(12);
outtextxy(530,170,"Paste");
}

if(tstate==0)
{
setcolor(15);
outtextxy(530,90,"Find");
}
if(tstate==1)
{
setcolor(15);
outtextxy(530,110,"Replace");
}
if(tstate==2)
{
setcolor(15);
outtextxy(530,130,"Cut");
}
if(tstate==3)
{
setcolor(15);
outtextxy(530,150,"Copy");
}

if(tstate==4)
{
setcolor(15);
outtextxy(530,170,"Paste");
}

if(ch==27)
{
sound(2000);delay(50);nosound();
sound(1500);delay(50);nosound();
setcolor(0);
setfillstyle(SOLID_FILL,BLACK);
bar3d(520,60,620,230,0,0);
return 0;
}

}

}
}

int note::format()
{
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
bar3d(525,65,600,215,2,10);
setfillstyle(SOLID_FILL,9);
bar3d(525,65,600,76,0,0);
setcolor(12);
outtextxy(530,90,"Word Wrap");
setcolor(WHITE);
outtextxy(530,110,"Font");
int state=0,tstate=1;
char ch;
while(1)
{
if(kbhit()!=0)
{

ch=getch();
tstate=state;

if(state==0 && ch=='P')
{state=1;goto z;}
if(state==1 && ch=='P')
{state=0;goto z;}
if(state==0 && ch=='H')
{state=1;goto z;}
if(state==1 && ch=='H')
{state=0;goto z;}
z:

if(ch=='K'|| ch=='M')
{
sound(1500);delay(50);nosound();
sound(2000);delay(50);nosound();
state=0;
tstate=1;
}


if(ch==13)
 {
   sound(1500);delay(50);nosound();
   sound(2000);delay(50);nosound();

   switch(state)
   {
    case 0:state=0;tstate=1;break;
    case 1:state=1;tstate=0;break;
   }

 }


if(state==0)
{
setcolor(12);
outtextxy(530,90,"Word Wrap");
}
if(state==1)
{
setcolor(12);
outtextxy(530,110,"Font");
}

if(tstate==0)
{
setcolor(15);
outtextxy(530,90,"Word Wrap");
}
if(tstate==1)
{
setcolor(15);
outtextxy(530,110,"Font");
}

if(ch==27)
{
sound(2000);delay(50);nosound();
sound(1500);delay(50);nosound();
setcolor(0);
setfillstyle(SOLID_FILL,BLACK);
bar3d(520,60,620,230,0,0);
return 0;
}


}

}
}

int note::help()
{
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
bar3d(525,65,620,215,2,10);
setfillstyle(SOLID_FILL,9);
bar3d(525,65,620,76,0,0);
setcolor(12);
outtextxy(530,90,"Help Topics");
setcolor(WHITE);
outtextxy(530,110,"About Notepad");
int state=0,tstate=1;
char ch;
while(1)
{
if(kbhit()!=0)
{

ch=getch();
tstate=state;

if(state==0 && ch=='P')
{state=1;goto z;}
if(state==1 && ch=='P')
{state=0;goto z;}
if(state==0 && ch=='H')
{state=1;goto z;}
if(state==1 && ch=='H')
{state=0;goto z;}
z:

if(ch=='K'|| ch=='M')
{
sound(1500);delay(50);nosound();
sound(2000);delay(50);nosound();
state=0;
tstate=1;
}


if(ch==13)
 {
   sound(1500);delay(50);nosound();
   sound(2000);delay(50);nosound();

   switch(state)
   {
    case 0:
    setcolor(3);
    setfillstyle(SOLID_FILL,BLUE);
    bar3d(100,5,400,45,2,10);
    setfillstyle(SOLID_FILL,9);
    bar3d(100,5,400,15,0,0);
    setcolor(YELLOW);
    outtextxy(197,18,"Help Topics");
    outtextxy(127,30,"Change font  Text formatting  Text saving");
    state=1;tstate=0;
    while(1)
    {

    if(kbhit()!=0)
    {
    ch=getch();
    sound(2000);delay(50);nosound();
    sound(1500);delay(50);nosound();
    break;
    }

    }

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar3d(100,5,400,45,2,10);

    state=0;tstate=1;break;
    ch=30;
    break;


    case 1:
    setcolor(3);
    setfillstyle(SOLID_FILL,BLUE);
    bar3d(100,5,300,45,2,10);
    setfillstyle(SOLID_FILL,9);
    bar3d(100,5,300,15,0,0);
    setcolor(YELLOW);
    outtextxy(177,18,"Notepad");
    outtextxy(167,30,"Version 1.0");
    state=1;tstate=0;
    while(1)
    {

    if(kbhit()!=0)
    {
    ch=getch();
    sound(2000);delay(50);nosound();
    sound(1500);delay(50);nosound();
    break;
    }

    }

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar3d(100,5,300,45,2,10);

    state=1;tstate=0;
    ch=30;
    break;

   }


 }



if(state==0)
{
setcolor(12);
outtextxy(530,90,"Help Topics");
}
if(state==1)
{
setcolor(12);
outtextxy(530,110,"About Notepad");
}

if(tstate==0)
{
setcolor(15);
outtextxy(530,90,"Help Topics");
}
if(tstate==1)
{
setcolor(15);
outtextxy(530,110,"About Notepad");
}
if(ch==27)
{
sound(2000);delay(50);nosound();
sound(1500);delay(50);nosound();
setcolor(0);
setfillstyle(SOLID_FILL,BLACK);
bar3d(520,60,630,230,0,0);
bar3d(100,5,300,45,2,10);

return 0;
}

}

}
}





char ggets(char buffer[],int x,int y,int fore=YELLOW, int back=BLUE,int limit=1500)
{
	int width=textwidth("W");
	int height=textheight("A")+1;
	int cursor=x,i=0;
	char ch,ch2;
	buffer[0]='\0';
	setcolor(fore);
	setfillstyle(1,back);
	int tempx[26],j=0,state=0,tstate=1;
	for(j=0;j<27;j++)
	tempx[j]=53;
	j=0;
	while(1)
	{
		while(!kbhit())              //code for cursor
		{
			setcolor(fore);
			line(cursor,y+height+2,cursor+width,y+height+2);
			delay(120);

					     //clear out a rectangle of widthXheight
			setcolor(back);
			line(cursor,y+height+2,cursor+width,y+height+2);
			delay(120);
		}


		if(cursor>=494 && j<=25)     //code for next line
		{

		if(kbhit()!=0)
		{

		  int k=i,h=0;
		  char tem[65],t;

		    for(;buffer[k]!=' ' && buffer[k]!='\n' && k>=0;k--) //copying letters into another string and clearing
		    {   tem[h++]=buffer[k];
			if(cursor>53)
			cursor-=width+1;

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


		    }

		buffer[k]='\n';
		tempx[j]=cursor-width-1;cursor=53;
		y=y+textheight("A")+3;j++;

		  h--;

		   for(k=0;k<=h;k++,h--)   //reversing copied string to get correct order
		    {
		     t=tem[k];
		     tem[k]=tem[h];
		     tem[h]=t;
		    }

		  h=0;

		 while(tem[h]!='\0')       //displaying characters on next line and setting cursor position
		  {
			char tempstr1[2]={tem[h],'\0'};

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
			if(cursor<494)
			{outtextxy(cursor,y,tempstr1);cursor+=width+1;}
			h++;

			if(cursor>=494 && j<=25)
			{buffer[i++]='\n';tempx[j]=cursor;cursor=53;y=y+textheight("A")+3;j++;}



		 }

		}

		}

		if(cursor==53 && ch==8 &&  j>=1) //code for previous line
		{
		if(kbhit()!=0)
		{cursor=tempx[j-1]+width+1;y=y-textheight("A")-3;j--;}
		}

		ch=getch();



		if(ch!='K' && ch!='M'&& ch!='H' && ch!='P')
		{if( isprint(ch) )
		{
			if(i<limit)
			{
			buffer[i++]=ch;
			buffer[i]='\0';

			char tempstr[2]={ch,'\0'};
			setcolor(back);           //clear out a rectangle of widthXheight
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
			if(cursor<=487)
			{outtextxy(cursor,y,tempstr);cursor+=width+1;}

			}
		}
		}
		if( ch==8 && cursor>53)	           //code for Backspace
		{
			if(i>0)
			{
				buffer[--i]='\0';
				cursor-=width+1;

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
			}
		}

		if( ch=='K' && cursor>53 )       //code for left arrow
		{
		cursor=cursor-width-1;
		}

		if( ch=='H' && j>=1 )            //code for up arrow
		{
		y=y-textheight("A")-3;j--;
		ch='-';
		}

		if( ch=='P' && j<=25 )           //code for down arrow
		{
		y=y+textheight("A")+3;j++;
		ch=200;
		}

		if( ch=='M' && cursor<487 )      //code for right arrow
		{
		cursor=cursor+width+1;
		}

		if( ch=='P' && j==26)
		{
		  setcolor(YELLOW);
		  settextstyle(5,0,1);
		  outtextxy(10,454,"Start");
		   while(1)
		   {
		    if(kbhit()!=0)
		    {
		     ch2=getch();
		      if(ch2=='H')
		      {
		       setcolor(GREEN);
		       settextstyle(5,0,1);
		       outtextxy(10,454,"Start");
		       setcolor(YELLOW);
		       settextstyle(2,0,4);
		       break;
		      }
		     }

		   }

		}
		if( ch=='H' && j==0 )
		{
		if(tempx[0]==53)
		tempx[0]=cursor;

		state=0;
		setcolor(12);
		settextstyle(2,0,4);
		outtextxy(53,64," FILE  ");

		while(1)
		{

		if(kbhit()!=0)
		{

		ch=getch();
		tstate=state;

		if(ch=='H')
		{
		sound(1500);delay(50);nosound();
		sound(2000);delay(50);nosound();

		state=0;
		tstate=1;

		}

		if(ch==13 )
		{
		sound(1500);delay(50);nosound();
		sound(2000);delay(50);nosound();
		 switch(state)
		 {
		 case 0:int t1=n.file(buffer,i);state=0;tstate=1;
			if(t1==0)
			return 'y';
			if(t1==3)
			{end();return 'n';}
			break;
		 case 1:int t2=n.edit();state=1;tstate=2;break;
		 case 2:int t3=n.format();state=2;tstate=3;break;
		 case 3:int t4=n.help();state=3;tstate=0;break;
		 }



		}

		if(state==0 && ch=='M')
		{state=1;goto z;}

		if(state==1 && ch=='M')
		{state=2;goto z;}

		if(state==2 && ch=='M')
		{state=3;goto z;}

		if(state==3 && ch=='M')
		{state=0;goto z;}

		if(state==0 && ch=='K')
		{state=3;goto z;}

		if(state==3 && ch=='K')
		{state=2;goto z;}

		if(state==2 && ch=='K')
		{state=1;goto z;}

		if(state==1 && ch=='K')
		{state=0;goto z;}


		z:
		if(state==0)
		{setcolor(12);
		settextstyle(2,0,4);
		outtextxy(53,64," FILE  ");
		}

		if(state==1)
		{setcolor(12);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  "),64,"EDIT");
		}

		if(state==2)
		{setcolor(12);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  EDIT  "),64,"FORMAT  ");
		}

		if(state==3)
		{setcolor(12);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  EDIT  FORMAT  "),64,"HELP");
		}


		if(tstate==0)
		{setcolor(BLACK);
		settextstyle(2,0,4);
		outtextxy(53,64," FILE  ");
		}

		if(tstate==1)
		{setcolor(BLACK);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  "),64,"EDIT");
		}

		if(tstate==2)
		{setcolor(BLACK);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  EDIT  "),64,"FORMAT  ");
		}

		if(tstate==3)
		{setcolor(BLACK);
		settextstyle(2,0,4);
		outtextxy(53+textwidth(" FILE  EDIT  FORMAT  "),64,"HELP");
		}



		}

		if( ch==27 )
		{
		   end();
		   return 'n';
		}

		if(ch=='P')
		{
		cursor=tempx[0];
		break;

		}

		}


		}


		if( ch==13 && j<=25)             //code for Enter
		{
		buffer[i++]='\n';tempx[j]=cursor;cursor=53;y=y+textheight("A")+3;j++;
		}

		else if( ch==27 )
		{                                //code for exit
		   end();
		   return 'n';

		}



	}

	setcolor(fore);
}

void graphics()
{
setcolor(3);
setfillstyle(SOLID_FILL,BLUE);
bar3d(50,50,500+2,404,2,10);
setfillstyle(SOLID_FILL,WHITE);
bar3d(50,50,500+2,65,2,10);
setfillstyle(SOLID_FILL,LIGHTGREEN);
bar3d(51,51,499+2,64,0,0);
setfillstyle(SOLID_FILL,9);
bar3d(51,64,499+2,76,0,0);

setcolor(13);
setfillstyle(SOLID_FILL,GREEN);
bar3d(0,460,639,510,0,0);

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(1,462,55,479,0,0);
pieslice(53,470,0,360,8);

setfillstyle(SOLID_FILL,8);
bar3d(460,53,469,62,0,0);
setfillstyle(SOLID_FILL,8);
bar3d(473,53,483,62,0,0);
setfillstyle(SOLID_FILL,8);
bar3d(486,53,496,62,0,0);

setcolor(BLACK);
settextstyle(0,0,1);
outtextxy(54,54,"NOTEPAD - Document 1");

setcolor(LIGHTGRAY);
settextstyle(0,0,1);
outtextxy(461,54,"-");
setcolor(LIGHTGRAY);
settextstyle(0,0,1);
outtextxy(475,54,"O");
setcolor(LIGHTGRAY);
settextstyle(0,0,1);
outtextxy(488,54,"X");


setcolor(BLACK);
settextstyle(2,0,4);
outtextxy(53,64," FILE  EDIT  FORMAT  HELP");
/*setcolor(LIGHTBLUE);
outtextxy(550,50,"EXIT : ESC");
*/
setcolor(GREEN);
settextstyle(5,0,1);
outtextxy(10,454,"Start");
setcolor(13);
setfillstyle(SOLID_FILL,BLUE);
line(550,460,550,510);
}

void end()
{
graphics();
}

void loading()
{
int i;

int x=210,y=200;
setcolor(6);
settextstyle(8,0,5);
outtextxy(x,y,"L");
x=x+textwidth("A")+2;


outtextxy(x,y,"O");
x=x+textwidth("A")+2;

outtextxy(x,y,"A");
x=x+textwidth("A")+2;

outtextxy(x,y,"D");
x=x+textwidth("A")+2;

outtextxy(x,y,"I");
x=x+textwidth("A")-8;

outtextxy(x,y,"N");
x=x+textwidth("A")+2;

outtextxy(x,y,"G");
delay(1000);

x=210;y=200;

int col=3,col2=10;

for(int j=0;j<6;j++)
{
if(j%2==0)
{col=11;col2=11;}
else
{col=6;col2=6;}

x=210;
delay(330);

for(i=0;i<=6;i++)
{
switch(i)
{

case 0:

setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"L");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"L");

break;
case 1:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"O");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"O");

break;

case 2:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"A");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"A");

break;

case 3:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"D");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"D");

break;

case 4:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"I");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"I");

break;

case 5:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"N");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"N");

break;

case 6:
setcolor(BLACK);
settextstyle(8,0,5);
outtextxy(x,y,"G");
setcolor(col2);
settextstyle(8,0,7);
outtextxy(x+1,y-18,"G");
break;

}



delay(150);
setcolor(BLACK);

switch(i)
{
case 0:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"L");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"L");

break;
case 1:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"O");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"O");

break;

case 2:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"A");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"A");

break;

case 3:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"D");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"D");

break;

case 4:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"I");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"I");
break;

case 5:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"N");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"N");
break;

case 6:
settextstyle(8,0,7);
outtextxy(x+1,y-18,"G");
setcolor(col);
settextstyle(8,0,5);
outtextxy(x,y,"G");
break;

}

if(i==4)
x=x+textwidth("A")-8;
else
x=x+textwidth("A")+2;

}

}

}

void note::notepad()
{
char str[1500],ch;
int d=DETECT,m;
initgraph(&d,&m,"e:\\tc\\bgi");

do
{
graphics();
settextstyle(2,0,4);
ch=ggets(str,53,78);
}while(ch=='y');

}


void credits()
{char ch[2];int i=0;
int col=1;
int x=175,y=200;
cleardevice();
setcolor(9);
settextstyle(2,0,4);
outtextxy(500,50,"S : Toggle Sound");
setcolor(13);
setfillstyle(SOLID_FILL,GREEN);
bar3d(0,460,639,510,0,0);

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(1,462,55,479,0,0);
pieslice(53,470,0,360,8);

setcolor(GREEN);
settextstyle(5,0,1);
outtextxy(10,454,"Start");
setcolor(13);
setfillstyle(SOLID_FILL,BLUE);
line(550,460,550,510);

setcolor(13);
setfillstyle(SOLID_FILL,BLACK);
bar3d(150,150,450,250,5,5);

settextstyle(0,0,2);
outtextxy(250,180,"MADE BY");
char a;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);
for(a='N';a>='A';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}

if(col==0)
col++;

setcolor(4);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='F';a<='S';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}

if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);



for(a='U';a>='H';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}




if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;


setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);


for(a='V';a>='I';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}


if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);


for(a='G';a<='S';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}



if(col==0)
col++;
setcolor(12);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);



for(a='U';a>='H';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}





if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
x=x+textwidth("A")+1;

i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);


for(a='C';a<='M';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}



if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='J';a>='A';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}


if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='A';a<='L';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}




if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='Q';a>='H';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}


if(col==0)
col++;
setcolor(10);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='D';a<='O';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}





if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='J';a<='T';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}



if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='H';a<='R';a++,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}




if(col==0)
col++;
setcolor(4);
outtextxy(x,y,ch);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

x=x+textwidth("A")+1;
i=0;

setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

for(a='D';a>='A';a--,i=i+20,col++)
{
ch[0]=a;
ch[1]='\0';
setcolor(col);
outtextxy(x,y,ch);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

sound(1500+i);delay(90);nosound();

setcolor(BLACK);
outtextxy(x,y,ch);
if(kbhit()!=0)
goto h;

}
if(col==0)
col++;
setcolor(col);
outtextxy(x,y,ch);

h:
if(kbhit!=0)
ch[0]=getch();
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
bar(x-2,y+textheight("A")+1,x+textwidth("A"),y+textheight("A")+2);

i=1;
x=175,y=200;
setcolor(i);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"S");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"I");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"S");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y," ");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"M");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"L");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"O");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"T");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"R");
x=x+textwidth("A")+1;i++;
setcolor(i);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;i++;

int so=i;


while(1)
{
setcolor(i);
settextstyle(0,0,2);
outtextxy(250,180,"MADE BY");

if(ch[0]!='s')
{sound(so+400);delay(200);nosound();so=so+2;}
if(ch[0]=='s')
delay(200);


i=i+2;
x=175;
setcolor(i);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;
setcolor(i+1);
outtextxy(x,y,"S");
x=x+textwidth("A")+1;
setcolor(i+2);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;
setcolor(i+3);
outtextxy(x,y,"I");
x=x+textwidth("A")+1;
setcolor(i+4);
outtextxy(x,y,"S");
x=x+textwidth("A")+1;
setcolor(i+5);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;
setcolor(i+6);
outtextxy(x,y," ");
x=x+textwidth("A")+1;
setcolor(i+7);
outtextxy(x,y,"M");
x=x+textwidth("A")+1;
setcolor(i+8);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;
setcolor(i+9);
outtextxy(x,y,"L");
x=x+textwidth("A")+1;
setcolor(i+10);
outtextxy(x,y,"H");
x=x+textwidth("A")+1;
setcolor(i+11);
outtextxy(x,y,"O");
x=x+textwidth("A")+1;
setcolor(i+12);
outtextxy(x,y,"T");
x=x+textwidth("A")+1;
setcolor(i+13);
outtextxy(x,y,"R");
x=x+textwidth("A")+1;
setcolor(i+14);
outtextxy(x,y,"A");
x=x+textwidth("A")+1;



if(kbhit()!=0)
{ ch[1]=ch[0];
  ch[0]=getch();


  if(ch[0]!='s')
  break;

  if(ch[0]=='s' && ch[1]=='s')
  ch[0]='g';


}


}

exit(0);


}



void main()
{

int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "e:\\tc\\bgi");

loading();

delay(500);

int i;
char temp='10';
do
{
cleardevice();
int poly[8];


setcolor(13);
setfillstyle(SOLID_FILL,GREEN);
bar3d(0,460,639,510,0,0);

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(1,462,55,479,0,0);
pieslice(53,470,0,360,8);

setcolor(GREEN);
settextstyle(5,0,1);
outtextxy(10,454,"Start");
setcolor(13);
setfillstyle(SOLID_FILL,BLUE);
line(550,460,550,510);

int u=0;

for(int j=200, k=160;j>=0;j=j-5,k=k-4)
   {

   delay(100);
   setcolor(0);
   setfillstyle(SOLID_FILL,0);
   bar(0,0,300,300);


   if(temp==13)
   {goto x;}

   if(kbhit()!=0)
   {
   temp=getch();
   }



   poly[0] = 120-j; /* 1st vertex */
   poly[1] = 10-k;

   poly[2] = 240-j; /* 2nd */
   poly[3] = 10-k;

   poly[4] = 200-j; /* 3rd */
   poly[5] = 195-k;

   poly[6] = 70-j;  /* 4th */
   poly[7] = 180-k;
   setcolor(3);
   setfillstyle(SOLID_FILL,9);
   fillpoly(4, poly);

for(i=130;i<240;i=i+15)
{
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLUE);
fillellipse(i-2-j,15-k,2,2);
setcolor(YELLOW);
arc(i-j,10-k,30,250,5);
}


}

for(j=504;j>0;j=j-8)
{
   setcolor(WHITE);
   setfillstyle(LINE_FILL,WHITE);
   bar3d(119+j,10,240+j,200,5,5);

   if(j<=150)
   {
   setcolor(3);
   setfillstyle(SOLID_FILL,9);
   fillpoly(4, poly);

   for(i=130;i<240;i=i+15)
   {
   setcolor(YELLOW);
   arc(i,10,30,250,5);
   }
   u=30;
   }
   delay(90-u);

   setcolor(0);
   setfillstyle(SOLID_FILL,0);
   bar3d(119+j,10,240+j,200,5,5);

   if(temp==13)
   {goto x;}

   if(kbhit()!=0)
   {temp=getch();}

}
  x:

   j=0;
   setcolor(WHITE);
   setfillstyle(LINE_FILL,WHITE);
   bar3d(119+j,10,240+j,200,5,5);

   poly[0] = 120; /* 1st vertex */
   poly[1] = 10;

   poly[2] = 240; /* 2nd */
   poly[3] = 10;

   poly[4] = 200; /* 3rd */
   poly[5] = 195;

   poly[6] = 70;  /* 4th */
   poly[7] = 180;
   setcolor(3);
   setfillstyle(SOLID_FILL,9);
   fillpoly(4, poly);

   for(i=130;i<240;i=i+15)
   {
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLUE);
    fillellipse(i-2,15,2,2);
    setcolor(YELLOW);
    arc(i,10,30,250,5);
   }

for(j=400,k=200;j>-10;j=j-10,k=k-5)
{

setcolor(RED);
setfillstyle(SOLID_FILL,12);
bar3d(410-j,325+k,565-j,455+k,5,5);
delay(80);
setcolor(13);
setfillstyle(SOLID_FILL,GREEN);
bar3d(65,460,550,510,0,0);
setcolor(0);
setfillstyle(SOLID_FILL,0);
bar3d(410-j,325+k,565-j,455+k,5,5);

if(temp==13)
{goto y;}

if(kbhit()!=0 )
{ temp=getch();}

}

y:

setcolor(13);
setfillstyle(SOLID_FILL,GREEN);
bar3d(0,460,639,510,0,0);

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
bar3d(1,462,55,479,0,0);
pieslice(53,470,0,360,8);

setcolor(GREEN);
settextstyle(5,0,1);
outtextxy(10,454,"Start");
setcolor(13);
setfillstyle(SOLID_FILL,BLUE);
line(550,460,550,510);



setcolor(RED);
setfillstyle(SOLID_FILL,12);
bar3d(410,325,565,455,5,5);

setfillstyle(EMPTY_FILL,BLUE);
for(i=45;i>=30;i--)
{
setcolor(RED);
fillellipse(490,390,i,i);
delay(50);
}

setfillstyle(SOLID_FILL,RED);
bar(460,381,520,399);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,9);
bar3d(110,220,250,260,5,1);

setcolor(15);
setfillstyle(SOLID_FILL,5);
bar3d(410,220,560,260,7,1);

setcolor(15);
setfillstyle(SOLID_FILL,3);
bar3d(110,275,250,315,7,1);

setcolor(15);
setfillstyle(SOLID_FILL,12);
bar3d(410,275,560,315,7,1);

setcolor(1);
settextstyle(4,0,3);
outtextxy(125,225,"NOTEPAD");
settextstyle(4,0,1);
setcolor(WHITE);
outtextxy(425,225,"RESTART");
outtextxy(125,280,"CREDITS");
outtextxy(450,280,"EXIT");


int state=0,tstate=1,g=0;
char ch,ch2;
while(g==0)
		{


		if(kbhit()!=0)
		{
		ch=getch();
		tstate=state;

		switch(state)
		{
		case 0:
		switch(ch)
		{
		case 'M':state=1;goto z;break;
		case 'K':state=1;goto z;break;
		case 'H':state=2;goto z;break;
		case 'P':state=2;goto z;break;
		}
		break;

		case 1:

		switch(ch)
		{
		case 'M':state=0;goto z;break;
		case 'K':state=0;goto z;break;
		case 'H':state=3;goto z;break;
		case 'P':state=3;goto z;break;
		}
		break;

		case 2:
		switch(ch)
		{
		case 'M':state=3;goto z;break;
		case 'K':state=3;goto z;break;
		case 'H':state=0;goto z;break;
		case 'P':
			 setcolor(YELLOW);
			 settextstyle(5,0,1);
			 outtextxy(10,454,"Start");
			 while(1)
			 {
			  if(kbhit()!=0)
			  {
			   ch2=getch();

			   if(ch2=='H')
			   {
			    setcolor(GREEN);
			    settextstyle(5,0,1);
			    outtextxy(10,454,"Start");
			    state=2;tstate=3;
			    break;
			   }

			  }

			 }
			 goto z;break;
		}
		break;

		case 3:
		switch(ch)
		{
		case 'M':state=2;goto z;break;
		case 'K':state=2;goto z;break;
		case 'H':state=1;goto z;break;
		case 'P':state=1;goto z;break;
		}
		break;
		}


		z:
		switch(state)
		{
		case 0:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(110,220,250,260,7,1);
		setcolor(14);
		setfillstyle(SOLID_FILL,9);
		bar3d(110,220,250,260,5,1);
		setcolor(9);
		settextstyle(4,0,1);
		outtextxy(125,225,"NOTEPAD");
		setcolor(1);
		settextstyle(4,0,2);
		outtextxy(125,225,"NOTEPAD");
		break;

		case 1:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(410,220,560,260,7,1);
		setcolor(14);
		setfillstyle(SOLID_FILL,5);
		bar3d(410,220,560,260,5,1);
		setcolor(5);
		settextstyle(4,0,1);
		outtextxy(425,225,"RESTART");
		setcolor(13);
		settextstyle(4,0,2);
		outtextxy(425,225,"RESTART");
		break;

		case 2:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(110,275,250,315,7,1);
		setcolor(14);
		setfillstyle(SOLID_FILL,3);
		bar3d(110,275,250,315,5,1);
		setcolor(3);
		settextstyle(4,0,1);
		outtextxy(125,280,"CREDITS");
		setcolor(11);
		settextstyle(4,0,2);
		outtextxy(125,280,"CREDITS");
		break;

		case 3:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(410,275,560,315,7,1);
		setcolor(14);
		setfillstyle(SOLID_FILL,12);
		bar3d(410,275,560,315,5,1);
		setcolor(12);
		settextstyle(4,0,1);
		outtextxy(450,280,"EXIT");
		setcolor(4);
		settextstyle(4,0,2);
		outtextxy(450,280,"EXIT");
		break;

		}
		switch(tstate)
		{
		case 0:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(110,220,250,260,5,1);
		setcolor(15);
		setfillstyle(SOLID_FILL,9);
		bar3d(110,220,250,260,7,1);
		setcolor(9);
		settextstyle(4,0,2);
		outtextxy(125,225,"NOTEPAD");
		setcolor(WHITE);
		settextstyle(4,0,1);
		outtextxy(125,225,"NOTEPAD");
		break;

		case 1:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(410,220,560,260,5,1);
		setcolor(15);
		setfillstyle(SOLID_FILL,5);
		bar3d(410,220,560,260,7,1);
		setcolor(5);
		settextstyle(4,0,2);
		outtextxy(425,225,"RESTART");
		setcolor(WHITE);
		settextstyle(4,0,1);
		outtextxy(425,225,"RESTART");
		break;

		case 2:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(110,275,250,315,5,1);
		setcolor(15);
		setfillstyle(SOLID_FILL,3);
		bar3d(110,275,250,315,7,1);
		setcolor(3);
		settextstyle(4,0,2);
		outtextxy(125,280,"CREDITS");
		setcolor(WHITE);
		settextstyle(4,0,1);
		outtextxy(125,280,"CREDITS");
		break;

		case 3:
		setcolor(0);
		setfillstyle(SOLID_FILL,0);
		bar3d(410,275,560,315,5,1);
		setcolor(15);
		setfillstyle(SOLID_FILL,12);
		bar3d(410,275,560,315,7,1);
		setcolor(12);
		settextstyle(4,0,2);
		outtextxy(450,280,"EXIT");
		setcolor(WHITE);
		settextstyle(4,0,1);
		outtextxy(450,280,"EXIT");
		break;

		}

		if(ch==13)
		{
		  sound(1500);delay(50);nosound();
		  sound(2000);delay(50);nosound();

		 switch(state)
		 {
		  case 0:n.notepad();break;
		  case 1:delay(500);break;
		  case 2:credits();break;
		  case 3:exit(0);break;
		 }

		break;
		}



		if(ch==27)
		 exit(0);

		sound(2000);delay(20);nosound();
		}



}

temp=13;
}while(1);

}

