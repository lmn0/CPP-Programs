#include<fstream.h>
#include<conio.h>
void main()
{
int flag=0,i=0;
char ch=' ',tch;

ifstream ifile;
ifile.open("first.txt");
ofstream ofile;
ofile.open("second.txt");

while(!ifile.eof())
{
tch=ch;
ch=ifile.get();
if((ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') && tch==' ')
flag=1;
if(flag==1)
{ofile.put(ch);if(ch==' ')flag=0;}
}
ifile.close();
ofile.close();


}
