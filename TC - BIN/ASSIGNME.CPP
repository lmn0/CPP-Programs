#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
clrscr();
int d=DETECT,m,r=10,a;
initgraph(&d,&m,"c:\\tc\\bgi");
setcolor(RED);
circle(35,25,12);
cout<<"\n    1";
cout<<"\n\n  Febinocci";
setcolor(BLUE);
circle(30,89,12);
cout<<"\n\n   2";
cout<<"\n\n  Bill";
cin>>a;
switch(a)
{
case 1:clrscr();
int f=0,i,n,s=1,t;
cout<<"enter no. of times";
cin>>n;
for(i=1;i<=n;i++)
{
t=f+s;
cout<<" "<<f<<" ";
f=s;
s=t;
}break;
case 2:clrscr();
long char a[20];
long float b,c,d;
long int e;
cout<<"Enter first name\n";
cin>>a;
cout<<"Enter your account no.\n";
cin>>e;
cout<<""<<a<<"'s current reading: \n";
cin>>b;
cout<<""<<a<<"'s prevoius reading: \n";
cin>>c;
d=(b-c)*.08;
cout<<"\n\nBILL= QR. "<<d;break;
default:
cout<<"Windows Error";break;
}
getch();
}
