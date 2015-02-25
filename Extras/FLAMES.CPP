#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[100],b[100],temp,check[]={"flames"};
int i,n,m,j,tot,k=0,g,h;
cout<<"\nEnter the first name :";
gets(a);
cout<<"\nEnter the second name :";
gets(b);
n=strlen(a);
m=strlen(b);
i=0;
j=0;
while(i<strlen(a))
{while(j<strlen(b))
{
if(a[i]==b[j])
{
for(g=i;g<strlen(a)-1;g++)
a[g]=a[g+1];
a[g]='\0';
for(h=j;h<strlen(b)-1;h++)
b[h]=b[h+1];
b[h]='\0';
i=0;j=0;
}
else if(a[i]!=b[j])
j++;
}
if(a[i]!=b[j] && (j)==strlen(b))
{i++;j=0;}}
tot=strlen(a)+strlen(b);cout<<"\nTot ="<<tot;i=0;g=0;

while(strlen(check)!=1)
{
for(i=0;i<tot;i++)
{
g++;
if(g-1==strlen(check))
g=0;
}
for(j=g-1;j<strlen(check);j++)
check[j]=check[j+1];
check[j]='\0';
cout<<"\n";
puts(check);
if(g==strlen(check))
g=0;
}
cout<<"\nITS :"<<check[0];
getch();
}




