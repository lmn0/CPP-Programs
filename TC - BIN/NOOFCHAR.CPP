#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
clrscr();
char a[80];
int n,i,one=0,al=0,two=0,three=0,g=0;
cout<<"Enter a string :";
gets(a);
for(i=0;a[i]!='\0';i++)
{
n=0;
while(a[i]!=' ')
{
n=n+1;
i++;
}
if(n==1)one++;
if(n==2)two++;
if(n==3)three++;
i++;
}
cout<<"   "<< one<<" "<<two<<" "<<three;
for(i=0;i<strlen(a);i++)
if(isalpha(a[i]))
al++;
cout<<"\nNo. of alphabets ="<<al;
getch();
}

