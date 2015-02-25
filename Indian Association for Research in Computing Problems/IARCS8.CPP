#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void main()
{
char a[100],ch;
int m=0,i,n,j,k=0;

gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>='A' && a[i]<='M')
m++;
if(a[i]<='Z' && a[i]>'M')
m--;
}
if(m!=0)
{cout<<0;exit(0);}

for(i=0;i<n;i++)
{
if(a[i]>='A' && a[i]<='M')
{
k=0;
m=1;
ch=155-(int)a[i];

for(j=i+1;a[j]!=ch && j<n || k!=0;j++)
{

if(a[i]==a[j])
k++;

if(a[j]>='A' && a[j]<='M')
m++;
if(a[j]<='Z' && a[j]>'M')
{m--;if(k!=0)k--;}
}

if(a[j]==ch)
m--;

if(m!=0)
break;
}
}

if(m!=0)
cout<<0;
else
cout<<1;


getch();
}