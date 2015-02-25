#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void main()
{
clrscr();
int di=0,al=0,sp=0,tot=0,vowel=0,i;
char a[80];
cout<<"Enter the string (MAX 79) :\n";
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(isdigit(a[i]))
di++;
if(isalpha(a[i]))
al++;
if(isspace(a[i]))
sp++;
}
tot=strlen(a);
for(i=0;a[i]!='\0';i++)
switch(a[i])
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
case 'U':vowel++;
}
cout<<"No. of words ="<<tot<<"\nNo. of Vowels ="<<vowel<<"\nNo. of spaces ="<<sp<<"\nNo. of alphabets ="<<al<<"\nNo. of digits ="<<di;
getch();
}

