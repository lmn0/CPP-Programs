#include<fstream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{      clrscr();
char a[1000];                         int p=0;
ofstream ofile;
ofile.open("txt1.txt");

while(1)
{
ifstream ifile;
ifile.open("txt.txt");

ofstream ofile;
ofile.open("txt1.txt",ios::app);

cout<<"\nU :";
gets(a);
ofile<<a;


cout<<"\nFrnd :";
ifile.seekg(p);
ifile.getline(a,1000,'\0');
p=ifile.tellg();
cout<<a<<"\n";


if(a[0]==5)
exit(0);

ifile.close();
ofile.close();
}

}