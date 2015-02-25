#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{ clrscr();

int i,j,k=0,l,p;
char a[3][80],b[20][80],c[20][80];
for(i=0;i<2;i++)
gets(a[i]);

i=0;

while(i<strlen(a[0]))
{

l=i;
p=0;

for(j=0;j<strlen(a[1]);j++)
if(a[0][l]==a[1][j])
{
b[k][p]=a[0][j];l++;p++;
b[k][p]='\0';
}
k++;
i++;
}

for(i=0;i<k;i++)
puts(b[i]);


}