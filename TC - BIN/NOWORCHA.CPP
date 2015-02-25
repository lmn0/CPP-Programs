#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
clrscr();
char a[20][20];
int n,i,m,g;
cout<<"enter no. of names :";
cin>>g;
cout<<"Enter the string :";
for(i=0;i<g;i++)
gets(a[i]);
for(i=0;i<g;i++)
{
n=strlen(a[i]);
int sp=0;
for(int j=0;j<n;j++)
if(isspace(a[i][j]))
sp++;
cout<<i+1<<" Noof char ="<<n<<" noof words ="<<n-sp<<endl;
}
getch();
}
