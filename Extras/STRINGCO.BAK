#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[20],b[20],temp[20][20];
cout<<"Enter a char :";
gets(a);
cout<<"Enter the next char :";
gets(b);

int i,j,k,l,flag=0,g,o,h,p,m;

for(i=0;i<strlen(a);i++)
{
for(j=0;j<strlen(b) && i<strlen(a);j++)
{
o=0;flag=0;
if(a[i]==b[j])
{                // if(a[i]==b[j])  begins
p=0;
for(m=i,g=j;;m++,g++)
{
if(a[m]==b[g])
{flag=1;temp[o][p++]=a[m];}
else
break;
}    // for(m=i,g=j;;m++,g++) ends
if(flag==1)
o++;
}    // if(a[i]==b[j]) ends
}    //1st 4 loop
}    //2nd 4 loop
cout<<endl;
for(i=0;i<5;i++)
puts(temp[i]);
getch();
}


