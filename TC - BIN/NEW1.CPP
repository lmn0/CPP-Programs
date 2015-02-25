#include<fstream.h>
#include<iostream.h>
#include<all.h>
#include<conio.h>
void main()
{
ifstream o1,o2;
o1.open("c:\\t\\a.txt");
//o2.open("b.txt");
ofstream i1;
i1.open("c:\\t\\d.txt");
char ch;

	 int n=-1;
do
{
ch=o1.get();
n++;
}
while(!o1.eof());
o1.close();

o1.open("c:\\t\\a.txt");

do
{
o1.seekg(--n);
o1.get(ch);
i1.put(ch);
}
while(n>0);


o1.close();
i1.close();

}
