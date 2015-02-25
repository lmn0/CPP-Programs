# include <fstream.h>
# include <conio.h>
# include <graphics.h>
# include <dos.h>
# include <ctype.h>
# include <process.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int i=0;

class hotel
{
struct address
{
int house_no,street_no;
char city_name[10];
};
int rno,mobno;
char name[20],type;
address ad;
public:
friend void check_in() ;
friend void check_out();
friend void search();
friend void display();
}h;



void check_in()
{
int temp,rno;
char type;
cleardevice();
ofstream ofile;
ofile.open("Hotel.txt",ios::app);
gotoxy(10,20);
cout<<"\nEnter your name : ";
gets(h.name);
cout<<"\nEnter Mobile number : ";
cin>>h.mobno;
cout<<"\nEnter address details :";
cout<<"\nEnter House No. : ";
cin>>h.ad.house_no;
cout<<"\nEnter Street No.: ";
cin>>h.ad.street_no;
cout<<"\nEnter City Name : ";
gets(h.ad.city_name);
c:
cout<<"\nEnter Type of room needed (S/D)-->";
cin>>h.type;
{
if(h,type=='S')
	{
	a:randomize();
	temp=(int)(rand()%300);
	if(temp>0 && temp<=300)
	rno=temp;
	else
	goto a;
	}

else if(h.type=='D')
	{
	b:randomize();
	temp=(int)(rand()%500);
	if(temp>300 && temp<=500)
	rno=temp;
	else
	goto b;
	}

}
ifstream ifile("HOTEL.TXT");
h.rno=rno;
cout<<"\nYour room number is :"<<h.rno;
ofile.write((char*)&h,sizeof(h));
ofile.close();
getch();
}



/*void check_out()
{
ifstream ifile;
ofstream ofile;
ifile.open("Hotel.txt"ios::app);
ofile.open("Temp.txt");
char name[15];
int pos;
cout<<"\nEnter name of person who is checking out :";
gets(name);
while(ifile)
{
for(i=0;i<500;i++)
{
if(strcmp(c[i].name,name)==0)
pos=i;
break;
}
for(i=pos;i<500;i++)
{
c[i].rno=c[i+1].rno;
strcpy(c[i].name,c[i+1].name);
c[i].type=c[i+1].type;
c[i].mobno=c[i+1].mobno;
c[i].ad.house_no=c[i+1].house_no;
c[i].ad.street_no=c[i+1].street_no;
strcpy(c[i].city_name,c[i+1].city_name);
}
ofile.write((char*)c,sizeof(c));
}                               */


/*void search()
{
cleardevice();
ifstream ifile;
ifile.open("HOTEL.DAT",ios::binary);
char name[15];
int pos=-1;
cout<<"\nEnter name of person to be searched :";
gets(name);
while (!ifile)
cout<<"\n\n\n\t\t\aERROR OPENING THE FILE, PLEASE CHECK !!!";
while(ifile)
{
for(i=0;i<500;i++)
if(strcmp(h[i].name,name)==0)
pos=i;
else
cout<<"\n\aSuch a person not found in the hotel data file !!";
}
cout<<"\n\n\a\tName :\t"<<h[pos].name;
cout<<"\n\tRoom Number :\t"<<h[pos].rno;
cout<<"\n\tMobile Number :\t"<<h[pos].mobno;
cout<<"\n\tAddress :\t"<<h[pos].ad.house_no<<", "<<h[pos].ad.street_no<<", ";
cout<<h[pos].ad.city_name;
cout<<"\n\tType of room occupied :\t";
if(h[pos].type=='S')
cout<<"Single Room";
else
cout<<"Double Room";
cout<<"\n\n\n\n\tPress any key to continue......";
getch();
} */



void display()
{
int sin=0,dub=0;
ifstream ifile;
ifile.open("Hotel.txt",ios::app);
while(ifile)
{
if(h.rno>0&&h.rno<=300)	sin++;
else	dub++;
}
ifile.close();
cout<<"\nThe number of Single Rooms available are : 300";
cout<<"\nThe number of Single Rooms occupied are  : "<<sin;
cout<<"\nThe number of Single Rooms free are	  : "<<300-sin<<endl;
cout<<"\nThe number of Double Rooms available are : 200";
cout<<"\nThe number of Double Rooms occupied are  : "<<dub;
cout<<"\nThe number of Double Rooms free are	  : "<<200-dub<<endl;
cout<<"\nThe total number of  Rooms available are : 500";
cout<<"\nThe total number of  Rooms occupied are  : "<<sin+dub;
cout<<"\nThe total number of  Rooms free are 	  : "<<500-sin-dub<<endl;
}




void exit()
{
clrscr();
setcolor(1);
rectangle(20,200,20,200);
setcolor(BLUE);
outtextxy(170,150,"Thank You for Checking out my Project");
outtextxy(155,165,"===========================================");
setcolor(LIGHTRED);
outtextxy(180,200,"For any details or suggestions");
outtextxy(180,220,"Contact us @ rahuldagreat@gmail.com");
outtextxy(268,235,"@ rahulm2005@hotmail.com");
outtextxy(268,250,"@ rahulm2005@rediffmail .com");
outtextxy(268,265,"@ faraz_freetorhyme@hotmail.com");
setcolor(RED);
outtextxy(390,400,"All Rights Reserved");
outtextxy(395,415,"Rahul The Great");
delay(4000);
exit(0);
}

char pwd[]="openthis";


void load()
{
cleardevice();
outtextxy(150,50,"L O A D I N G ");
delay(2000);
{
for(int i=0;i<78;i++)
{cout<<"*";delay(70);}
}
cout<<"\a\t\t\t     Load Complete !!!!";
delay(3000);
}


void main()
{
int ch;
char ret,pass[9];
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "c:\\tc\\bgi\\");
/*
sound(3000);
delay(945);
sound(2500);
delay(670);
nosound();*/
setcolor(21);
rectangle(10,10,300,40);
setcolor(LIGHTBLUE);
outtextxy(20,20,"Enter password  -->");
gotoxy(25,2.5);
gets(pass);
if(strcmp(pass,pwd)!=0)
exit();
else
//load();
a:cleardevice();
setcolor(CYAN);
{
outtextxy(180,80,"Welcome to The White Fort Hotel");
outtextxy(140,90,"===========================================");
}
setcolor(LIGHTGREEN);
{
outtextxy(175,170,"(1) Check In");
outtextxy(175,190,"(2) Check Out");
outtextxy(175,210,"(3) Search with Room Number");
outtextxy(175,230,"(4) Display Current Details");
outtextxy(175,250,"(5) Exit");
}
setcolor(YELLOW);
outtextxy(175,305,"Enter your choice here -->");
setcolor(2);
rectangle(40,40,600,440);
gotoxy(50,20);
cin>>ch;
switch(ch)
{
case 5:	exit();
case 4:	display();
	break;
//case 3:	search();
  //	break;
case 1:	check_in();
	break;
//case 2:	check_out();
  //	break;
}
cleardevice();
outtextxy(175,150,"Do you want to retry ? (Y/y or N/n)");
cin>>ret;
if(ret=='y'||ret=='Y')
goto a;
else
exit();
getch();
}


