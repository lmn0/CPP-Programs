#include<conio.h>
#include<iostream.h>
int Check(int b[3][3], int p);
void Assign(int b[3][3], int position , int player);
void Insert(unsigned char ch, int col, int row);
void Initdisplay();
void main();
{
clrscr();
int A[3][3], player1 , player2, count=0, r, flag=0, position, row=4;
Initdisplay();
char ch;
while(1)
{
gotoxy(2,3);
cout<<"player1, enter your choice(0 for 0, 1 for X):";
cin>>ch;
if(ch!='0' && ch!='1')
{
gotoxy(10,20);
cout<<"Valid choices are 0 or 1. please reenter!");
getch();
gotoxy(10,20);
clreol();
}
else
{
player1=(int)ch;
if(player1==0)
player2=1;
else
player2=0;
row=4;
break;
}
}
while(count<=9)
{
gotoxy(2, row++);
cout<<"player1's chance:");
cin>>position;
Assign(A, position, player1);
if(player1==0)
Insert('0',(postion%3)*6+2, (postion/3)*4+1);
else
Insert('X',(postion%3)*6+2, (postion/3)*4+1);
count++;
if(count>4)
{
r=Check(A, player1);
if(r==1)
{
gotoxy(5, row+2);
cout<<"player1 is winner";
flag=1;
break;
}
}
if(count>=9)
break;
gotoxy(2, row++);
cout<<"player2's chance:";
cin>>position;
Assign(A, position, player2);
if(player2==0)
Insert('0',(postion%3)*6+2, (postion/3)*4+1);
else
Insert('X',(postion%3)*6+2, (postion/3)*4+1);
count++;
if(count>4)
{
r=Check(A, player2);
if(r==1)
{
gotoxy(5, row+2);
cout<<"player2 is winner";
flag=1;
break;
}
}
}
if(flag==0)
{
gotoxy(5,row+2);
cout<<"No one is Winner";
}
getch();
}
void Assign(int b[3][3], int position, int player)
{
switch(position)
{
case 0:b[0][0]=player;
break;
case 1:b[0][1]=player;
break;
case 2:b[0][2]=player;
break;
case 3:b[1][0]=player;
break;
case 4:b[1][1]=player;
break;
case 5:b[1][2]=player;
break;
case 6:b[2][0]=player;
break;
case 7:b[2][1]=player;
break;
case 8:b[2][2]=player;
break;
}
}
int Check(int b[3][3], int p)
{
if(b[0][0]==p&&b[1][1]==p&&b[2][2]==p)
return 1;
else
{
whoplays newp=(player==machine)?human:machine;
posptr->setplayer(newp);
posptr->evaluate(score2);
if(score2==winscore)
waswin=true;
else
wasother=true;
totalscore+=score2;
if(score2>highscore)
{
highscore=score2;
returnmove=move;
}
}
delete posptr;
}
if(legalmoves==0)
{
score=drawscore;
--deep;
return(99);
}
else
{
int avgscore=totalscore/legalmoves;
if(waswin&&wasother)
score=winscore-(winscore-avgscore)/5;
else
score=avgscore;
score=100-score;
--deep;
return(returnmove);
}
void main()
{
int move, sc,movecount=0, cursrow=0;
position current;
position::initdisplay();
while(1)
{
current.setplayer(human);
current.display();
gotoxy(1,++cursrow);
}
cout<"Make your move 0 to 8:";
cin>>move;
for(col=1; col<=17; col++)
{
Insert(block, col,3);
Insert(block, col,7);
}
for(int j=0; j<9; j++) Insert((char)(j+'0'),(j%3)*6+4,(j/3)*4);
}
