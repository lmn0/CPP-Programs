#include<iostream.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,k=0;
cout<<"Enter a string :";
gets(a);
for(i=0;i<strlen(a);i++)
a[i]=toupper(a[i]);
for(i=65;i<=90;i++)
{
for(j=0;j<strlen(a);j++)
if((char)i==a[j])
++k;
cout<<(char)i<<"="<<(int)k<<endl;
k=0;
}
getch();
}



