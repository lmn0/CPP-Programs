#include<fstream.h>
#include<conio.h>
void main()
{
clrscr();
ifstream ifile;
ifile.open("story.txt");
int count=0;
char ch[200];
while(!ifile.eof())
{
ifile.getline(ch,'.');
if(ch[0]!='A')
count++;
}

cout<<count;
getch();

}

