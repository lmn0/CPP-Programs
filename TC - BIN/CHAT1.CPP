#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{      clrscr();
char a[1000];                         int p=0;
ofstream ofile;
ifstream ifile;
ofile.open("txt1.txt");

while(1)
{
ifile.open("txt.txt");
ofile.open("txt1.txt",ios::app);
cout<<"\nU :";
gets(a);
ofile<<a;

while(1)
{
ifile.open("txt.txt");
if(ifile.eof()!=1)
{
cout<<"\nFrnd :";
ifile.seekg(p);
ifile.getline(a,1000,'\0');
p=ifile.tellg();
cout<<a<<"\n";
}
ifile.close();
}

if(a[0]==5)
exit(0);
ofile.close();
}

}