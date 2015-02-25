#include "fstream.h"//Rahul the Great
#include "conio.h"
#include "stdio.h"
class flight
{
int fl_no;
char dest[35];
float dist;
public:
friend void input();
void output();
}s;
void input()
{
cout<<"\nEnter flight no :";
cin>>s.fl_no;
cout<<"\nEnter destination name :";
gets(s.dest);
cout<<"\nEnter distance :";
cin>>s.dist;
ofstream ofile;
ofile.open("FLIGHT.DAT",ios::binary);
ofile.write((char*)&s,sizeof(s));
ofile.close();
}

void flight::output()
{
clrscr();
ifstream ifile;
ifile.open("FLIGHT.DAT",ios::binary);
ifile.read((char*)&s,sizeof(s));
cout<<"\nYour flight number is :"<<s.fl_no<<endl;
cout<<"\nYour destination is :"<<s.dest<<endl;
cout<<"\nDistance travelled is :"<<s.dist<<endl;
ifile.close();
}


void main()
{
clrscr();
x:flight f;
input();
f.output();
cout<<"\n Do you want to continue ? -->";
char ch;
cin>>ch;
if(ch=='Y'||ch=='y')
goto x;
else;
}