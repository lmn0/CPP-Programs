 #include<graphics.h>
 #include<iostream.h>
 #include<conio.h>
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

      void main()
      { clrscr();
      int d=DETECT,m,g=0,i=0;
      initgraph(&d,&m,"c:\\tc\\bgi");
      char ch,text[100];
      callmouse();  setposi(0,0);
      int ma,mq,ta,xc,yc,tq,cl=1,tcl=0,ti,tx,ty,x,y,tma,tmq;
      while(ch!=27)
      {

      mouseposi(ma,mq,cl);
      if(cl==1)
      {setcolor(BLACK);
      circle(tma,tmq,10);
      setcolor(RED);
      circle(ma,mq,10); g++;x=ma;y=mq;tma=ma;tmq=mq;ti=0;i=0;
      }
      if(cl==2 && g!=0)
      {

      setcolor(RED);
      circle(x,y,10+i);
      setcolor(BLACK);
      circle(tx,ty,10+ti);ti=i;
      setcolor(RED);
      circle(x,y,10+i);
      if(tq<mq)
      i++;
      if(tq>mq)
      i--;
      tx=x;ty=y;

      }

      if(cl!=3)tcl=0;

      if(cl==3)
      {
      if(tcl==0)
      {outtextxy(0,0,"Enter the text");gets(text);cleardevice();}
      setcolor(BLACK);outtextxy(ta,tq,text);
      /*while(cl!=3)
      mouseposi(xc,yc,cl);  */

      setcolor(RED);outtextxy(ma,mq-20,text);
      tcl=1;
      }


      ta=ma;tq=mq;
      if(kbhit()!=0)
      ch=getch();

      }


      }