#include<iostream.h>
#include<conio.h>
#include<graphics.h>
 #include<stdio.h>
       #include<conio.h>
       #include<dos.h>
       union REGS in,out;

       int callmouse()
       {
	     in.x.ax=1;
              int86(51,&in,&out);
              return 1;
       }
       void mouseposi(int &xpos,int &ypos,int &click)
       { 
	     in.x.ax=3;
	     int86(51,&in,&out);
	     click=out.x.bx;
	     xpos=out.x.cx;
	     ypos=out.x.dx;
        }
       int mousehide()
       {
	     in.x.ax=2;
	     int86(51,&in,&out);
              return 1;
       }
      void setposi(int &xpos,int &ypos)
      { 
             in.x.ax=4;
             in.x.cx=xpos;
	    in.x.dx=ypos;
	    int86(51,&in,&out);
      }
      void restrictmouseptr(int x1,int y1,int x2,int y2)
          {
                 in.x.ax=7;
	        in.x.cx=x1;
                 in.x.dx=x2;
	        int86(51,&in,&out);
	        in.x.ax=8;
                 in.x.cx=y1;
	        in.x.dx=y2;
                 int86(51,&in,&out);
	 }

 void main()
 { int d=DETECT,m;int cl,x,y,i=1;
 initgraph(&d,&m,"e:\\tc\\bgi");
 restrictmouseptr(0,0,635,400);
 callmouse();
 outtextxy(50,50,"Player 1:");
 outtextxy(textwidth("Player 1:")+50,50,"X");
 outtextxy(textwidth("Player 1:")+50+textwidth("X")+10,50,"O");
 outtextxy(50,50+50,"Player 2:");
 outtextxy(textwidth("Player 2:")+50,50+50,"X");
 outtextxy(textwidth("Player 2:")+50+textwidth("X")+10,50+50,"O");
 char p1[2],p2[2],t1,t2; int f1=0,f2=0;
 while(1)
 {
 mouseposi(x,y,cl);
 if(cl==1 && x>=textwidth("Player 1:")+50 && x<=textwidth("Player 1:")+50+textwidth("X")+5 && y>=50 && y<=60 && t2!='X')
 {t1='X';cl=0;f1=1;setcolor(RED);outtextxy(textwidth("Player 1:")+50,50,"X");}
 if(cl==1 && x>=textwidth("Player 1:")+50+10 && x<=textwidth("Player 1:")+50+textwidth("X")+20 && y>=50 && y<=60 && t2!='O')
 {t1='O';cl=0;f1=1;setcolor(RED);outtextxy(textwidth("Player 1:")+50+textwidth("X")+10,50,"O");}
 if(cl==1 && x>=textwidth("Player 2:")+50 && x<=textwidth("Player 2:")+50+textwidth("X")+5 && y>=100 && y<=110 && t1!='X')
 {t2='X';cl=0;f2=1;setcolor(RED);outtextxy(textwidth("Player 2:")+50,50+50,"X");}
 if(cl==1 && x>=textwidth("Player 2:")+50+10 && x<=textwidth("Player 1:")+50+textwidth("X")+20 && y>=100 && y<=110 && t1!='O')
 {t2='O';cl=0;f2=1;setcolor(RED);outtextxy(textwidth("Player 2:")+50+textwidth("X")+10,50+50,"O");}
 if(f1==1 && f2==1)
 break;
 }            p1[0]=t1;p1[1]='\0'; p2[0]=t2;p2[1]='\0';
 cleardevice();
 settextstyle(3,0,3);                 int xy1[5][2],xy2[4][2],ga[3][3]={0,0,0,0,0,0,0,0,0};i=1;
 setcolor(BLUE);                                   int j=0,k=0,v=0,w=0,flag=0;
 outtextxy(100,200,"WELCOME");delay(500);
 setposi(400,400);
 bar(50,50,275,300);
 setcolor(RED);
 line(125,50,125,300);
 line(195,50,195,300);
 line(50,125,275,125);
 line(50,215,275,215);
 while(1)
 {
 mouseposi(x,y,cl);
 if(cl==1 && x>=50 && x<=125 && y>=50 && y<=125 && ga[0][0]==0)
 {if(i%2!=0){ga[0][0]=1;settextstyle(3,0,5);outtextxy(60+10,60,p1);}else {ga[0][0]=2;settextstyle(3,0,5);outtextxy(60+10,60,p2);}i++;}

 if(cl==1 && x>=125 && x<=195 && y>=50 && y<=125 && ga[0][1]==0)
 {if(i%2!=0){ga[0][1]=1;settextstyle(3,0,5);outtextxy(135+10,60,p1);}else {ga[0][1]=2;settextstyle(3,0,5);outtextxy(135+10,60,p2);}i++;}

 if(cl==1 && x>=195 && x<=275 && y>=50 && y<=125 && ga[0][2]==0)
 {if(i%2!=0){ga[0][2]=1;settextstyle(3,0,5);outtextxy(205+10,60,p1);}else {ga[0][2]=2;settextstyle(3,0,5);outtextxy(205+10,60,p2);}i++;}

 if(cl==1 && x>=50 && x<=125 && y>=125 && y<=215 && ga[1][0]==0)
 {if(i%2!=0){ga[1][0]=1;settextstyle(3,0,5);outtextxy(60+10,125+10,p1);}else {ga[1][0]=2;settextstyle(3,0,5);outtextxy(60+10,125+10,p2);}i++;}

 if(cl==1 && x>=125 && x<=195 && y>=125 && y<=215 && ga[1][1]==0)
 {if(i%2!=0){ga[1][1]=1;settextstyle(3,0,5);outtextxy(135+10,125+10,p1);}else {ga[1][1]=2;settextstyle(3,0,5);outtextxy(135+10,125+10,p2);}i++;}

 if(cl==1 && x>=195 && x<=275 && y>=125 && y<=215 && ga[1][2]==0)
 {if(i%2!=0){ga[1][2]=1;settextstyle(3,0,5);outtextxy(205+10,125+10,p1);}else {ga[1][2]=2;settextstyle(3,0,5);outtextxy(205+10,125+10,p2);}i++;}

 if(cl==1 && x>=50 && x<=125 && y>=215 && y<=300 && ga[2][0]==0)
 {if(i%2!=0){ga[2][0]=1;settextstyle(3,0,5);outtextxy(60+10,215+10,p1);}else {ga[2][0]=2;settextstyle(3,0,5);outtextxy(60+10,215+10,p2);}i++;}

 if(cl==1 && x>=125 && x<=195 && y>=215 && y<=300 && ga[2][1]==0)
 {if(i%2!=0){ga[2][1]=1;settextstyle(3,0,5);outtextxy(135+10,215+10,p1);}else {ga[2][1]=2;settextstyle(3,0,5);outtextxy(135+10,215+10,p2);}i++;}

 if(cl==1 && x>=195 && x<=275 && y>=215 && y<=300 && ga[2][2]==0)
 {if(i%2!=0){ga[2][2]=1;settextstyle(3,0,5);outtextxy(205+10,215+10,p1);}else {ga[2][2]=2;settextstyle(3,0,5);outtextxy(205+10,215+10,p2);}i++;}

 for(k=0;k<=2;k++)
 {
 if(ga[k][0]==ga[k][1] && ga[k][1]==ga[k][2] && ga[k][0]!=0 && ga[k][1]!=0 && ga[k][2]!=0)
 v=1;
 if(v==1){flag=1;w=ga[k][0];goto x;}
 }

 for(k=0;k<=2;k++)
 {
 if(ga[0][k]==ga[1][k] && ga[1][k]==ga[2][k] && ga[0][k]!=0 && ga[1][k]!=0 && ga[2][k]!=0)
 v=1;
 if(v==1){w=ga[0][k];flag=2;goto x;}
 }

 if(ga[0][0]==ga[1][1] && ga[1][1]==ga[2][2]&& ga[0][0]!=0 && ga[1][1]!=0 && ga[2][2]!=0)
 {
 v=1;
 if(v==1){w=ga[0][0];flag=3;goto x;}
 }

 if(ga[0][2]==ga[1][1] && ga[1][1]==ga[2][0]&&ga[0][2]!=0 && ga[1][1]!=0 && ga[2][2]!=0)
 {
 v=1;
 if(v==1){w=ga[0][2];flag=4;goto x;}
 }
 if(w==0 && ga[0][0]!=0&& ga[0][1]!=0&& ga[0][2]!=0&& ga[1][0]!=0&& ga[1][1]!=0&& ga[1][2]!=0&& ga[2][0]!=0&& ga[2][1]!=0&& ga[2][2]!=0)
 break;

 x:
 if(v==1)
 break;
 }

 if(flag==1)
 {
 if(k==0)
 {
 setcolor(BLUE);
 line(50,82,275,82);
 }
 if(k==1)
 {
 setcolor(BLUE);
 line(50,(125+215)/2,275,(125+215)/2);
 }
 if(k==2)
 {
 setcolor(BLUE);
 line(50,(300+215)/2,275,(300+215)/2);
 }
 }

 if(flag==2)
 {
 if(k==0)
 {
 setcolor(BLUE);
 line((50+125)/2,50,(50+125)/2,300);
 }
 if(k==1)
 {
 setcolor(BLUE);
 line((125+195)/2,50,(125+195)/2,300);
 }
 if(k==2)
 {
 setcolor(BLUE);
 line((275+195)/2,50,(275+195)/2,300);
 }
 }

 if(flag==3)
 {
 setcolor(BLUE);
 line(50,50,275,300);
 }

 if(flag==4)
 {
 setcolor(BLUE);
 line(275,50,50,300);
 }

 if(w==0)
 {cleardevice();outtextxy(1,1,"HEHE No one WON");}

 getch();

 cleardevice();
 if(w==1)
 outtextxy(50,100,"The WINNER is Player 1");
 if(w==2)
 outtextxy(50,100,"The WINNER is Player 2");

 getch();
 mousehide();
 }

