#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char a[80];
int word1=0,word2=0,word3=0,multi=0,i,j;
cout<<"Enter the sring :\n";
gets(a);
for(i=0;i<strlen(a);i++)
for(j=i;a[i]!=' ';j++)
{
word1++;
}
cout<<"1 WORD CHAR ="<<word1<<word1<<"\n2 WORD CHAR ="<<word2<<"\n3 WORD CHAR ="<<word3<<"\nMULTI CHAR  ="<<multi;
getch();
}
