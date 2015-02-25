#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
char s1[10],s2[10];
gets(s1);
gets(s2);

int n=0;
for(int i=0;i<strlen(s1);i++)
for(int j=0;j<strlen(s2);j++)
{
if(s1[i]==s2[j])
{s1[i]='/';s2[i]='/';break;}
}

for(i=0;i<strlen(s1);i++)
if(s1[i]!='/')
n++;

for(i=0;i<strlen(s2);i++)
if(s2[i]!='/')
n++;

char fl[7]={"flames\0"};

int p=0,m=0;
clrscr();
cout<<n<<endl;
i=0;
while(m!=1)
{

for(;p!=n;i=(i+1)%6)
{
if(fl[i]!='/')
p++;
}
fl[--i]='/';

m=0;
for(j=0;j<6;j++)
if(fl[j]!='/')
m++;

}
for(i=0;i<6;i++)
if(fl[i]!='/')
cout<<fl[i];
getch();
}