#include<conio.h>
#include<iostream.h>
#include<graphics.h>
void main()
{clrscr();
long int a,b,c;
int   driver = DETECT,mode;
char ab[20],f;
int mat,phy,che,c1,eng;
float sum,avg;
cout<<"Enter your name : ";
cin>>ab;
cout<<"\nEnter the marks which you obtained in each subject (MAT,PHY,CHEM,C++,ENG)\n";
cin>>mat>>phy>>che>>c1>>eng;
cout<<"Have you paid the fee(y/n)";
cin>>f;
if (f=='n')
{
cout<<"You cannot continue in the school";
}
if (f=='y')
{
cout<<"\n YOUR STATISTICS IS AS FOLLOWS:(press enter)\n";
initgraph(&driver,&mode,"c:\\tc\\bgi");
line(0,0,650,0);
line(350,32,215,32);
line(0,0,0,650);
line(0,477,650,477);
line(635,0,635,477);
avg=(mat+phy+che+c1+eng)/5.0;
cout<<"\n      			   MES INDIAN SCHOOL";
cout<<"\n\n                           TERMINAL EXAM\n";
cout<<"\n	NAME            :"<<ab;
cout<<"\n";
cout<<"\n       MATHEMATICS     :"<<mat<<"\n";
cout<<"\n       PHYSICS         :"<<phy<<"\n";
cout<<"\n       CHEMISTRY       :"<<che<<"\n";
cout<<"\n       COMPUTER SCI    :"<<c1<<"\n";
cout<<"\n       ENGLISH         :"<<eng<<"\n";
cout<<"\n       TOTAL           :"<<mat+phy+che+c1+eng<<"\n";
cout<<"\n       PERCENTAGE      :"<<avg<<"\n";
cout<<"\n     YOU HAVE PAID THE FEE. PASSED AND PROMOTED";
}
getch();
}


