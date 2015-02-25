#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<all.h>
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
{
int d=DETECT,m,ma,mq,cl;
initgraph(&d,&m,"C:\\tc\\bgi");
callmouse();
int a[5]={0,0,0,0,5},b[5]={1,2,3,4,5},c[5]={0,0,0,0,5},i=3,j=3,pos=-1,t;
char ch,tch;
while(1)
{
pos=-1;t=-1;

mousehide();
clrscr();
cleardevice();
callmouse();

setfillstyle(SOLID_FILL,WHITE);
bar(50,100,120,200);
bar(150,100,220,200);
bar(250,100,320,200);

mouseposi(ma,mq,cl);

for(int k=0;k<=3;k++)
{
setfillstyle(SOLID_FILL,BLUE);
if(a[k]==1 && k==0)
bar(50,
}


cout<<"Pop from :";cin>>ch;
switch(ch)
{
case 'a':for(i=0;i<=3;i++)if(a[i]!=0){t=a[i];a[i]=0;break;}  break;
case 'b':for(i=0;i<=3;i++)if(b[i]!=0){t=b[i];b[i]=0;break;}  break;
case 'c':for(i=0;i<=3;i++)if(c[i]!=0){t=c[i];c[i]=0;break;}  break;
}
tch=ch;
if(t==-1)
cout<<"\nNot possible";
else
{
cout<<"\nPush to :";cin>>ch;
switch(ch)
{
case 'a': for(j=3;j!=0;j--)if(a[j]==0 && t<a[j+1]){a[j]=t;pos=0;break;}if(pos==-1){if(tch=='c')c[i]=t;else b[i]=t;cout<<"\nNot possible";} break;
case 'b': for(j=3;j!=0;j--)if(b[j]==0 && t<b[j+1]){b[j]=t;pos=0;break;}if(pos==-1){if(tch=='a')a[i]=t;else c[i]=t;cout<<"\nNot possible";} break;
case 'c': for(j=3;j!=0;j--)if(c[j]==0 && t<c[j+1]){c[j]=t;pos=0;break;}if(pos==-1){if(tch=='b')b[i]=t;else a[i]=t;cout<<"\nNot possible";} break;
}
}
getch();
}

}
