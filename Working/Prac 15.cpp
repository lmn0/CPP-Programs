# include <fstream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
struct cow
{
int ino,qty;
char name[10];
float price;
}s;

void accept()
{
ofstream ofile;
ofile.open("struct.txt");
cout<<"\nEnter Item No. :";
cin>>s.ino;
cout<<"\nEnter Quantity :";
cin>>s.qty;
cout<<"\nEnter Product Name :";
gets(s.name);
cout<<"\nEnter Price :";
cin>>s.price;
ofile.write((char*)&s,sizeof(s));
ofile.close();
}


void display()
{
ifstream ifile;
ifile.open("struct.txt");
ifile.read((char*)&s,sizeof(s));
{
cout<<"\nItem Number is "<<s.ino;
cout<<"\nItem Name is "<<s.name;
cout<<"\nItem quantity is "<<s.qty;
cout<<"\nItem Price is "<<s.price;
}
ifile.close();
}

void append()
{
cow p;
ofstream ofile;
ifstream ifile;
ofile.open("temp.txt");
ifile.open("struct.txt");
cout<<"\nEnter Item Name :";
gets(p.name);
cout<<"\nEnter Item Code :";
cin>>p.ino;
cout<<"\nEnter Quantity :";
cin>>p.qty;
cout<<"\nEnter Price :";
cin>>p.price;
ofile.write((char*)&p,sizeof(p));
remove("struct.txt");
rename("temp.txt","struct.txt");
ifile.close();
ofile.close();
}

void main()
{
clrscr();
int ch;
cout<<"\nEnter Your Choice ";
cout<<"\n(1) Accept and Display";
cout<<"\n(2) Append the details of the file";
cout<<"\n(3) Exit";
cout<<"\nEnter your choice -->";
cin>>ch;
switch(ch)
{
case 1:	accept();
	display();
	break;
case 2: append();
	break;
case 3:	exit(0);
}
getch();
}