#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
char ch;
cout<<"Enter a character :\n";
cin>>ch;
int num = ch;
cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
cout<<"After adding 1 to the character code: \n";
ch=ch+1;
num=ch;
cout<<"The ASCII code for "<<ch<<" is "<<num<<"\n";
getch();
}