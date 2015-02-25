#include<fstream.h>
#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
char stack[100],out[100],in[100],ch; int i=0,j=0,t,s=1,h=0;

gets(in);


i=0;
     stack[0]='(';
while(in[i]!='\0')
{
switch(in[i])
{
case '+':stack[s]='+';s++;break;
case '*':stack[s]='*';s++;break;
case '/':stack[s]='/';s++;break;
case '-':stack[s]='-';s++;break;
case '(':stack[s]='(';s++;break;
case ')':j=s-1;t=h;while(stack[j]!='('){out[t++]=stack[j];j--;}break;
default:out[h]=in[i];h++;break;
}
i++;
}
puts(out);

getch();
}



