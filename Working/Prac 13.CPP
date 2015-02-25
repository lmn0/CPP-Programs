#include <fstream.h>//Rahul the Great
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
void main()
{
clrscr();
ofstream ofile;
ofile.open("TEXT.TXT");
char str[50],x,ch;
int i,spac=0,vow=0,dig=0,spcl=0,alph=0,word=0;
cout<<"\nEnter  a string : ";
gets(str);
for(i=0;str[i]!='\0';i++)
ofile.put(str[i]);
ofile.close();
ifstream ifile;
ifile.open("TEXT.TXT");
ifile.get(ch);
while(ifile)
{
if(isalpha(ch)) alph++;
else if(isdigit(ch)) dig ++;
else if(isspace(ch)) spac++;
else if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
vow++;
else spcl++;
ifile.get(ch);
}

word=spac+1;
cout<<"\n\n\n\n\nNumber of words = "<<word;
cout<<"\nNumber of spaces = "<<spac;
cout<<"\nNunber of digits = "<<dig;
cout<<"\nNumber of alphabets = "<<alph;
cout<<"\nNumber of Special Charecters = "<<spcl;
getch();
ifile.close();
}






