#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int vowels=0,other=0;
char line[100];
cout<<"Enter the line :\n";
gets(line);
for(int i=0;line[i]!='\0';i++)
{
switch(line[i])
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':++vowels;break;
default:++other;
}
}
cout<<"The Vowels ="<<vowels<<"  The consonants ="<<other;
getch();
}
