#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<string.h>
#include<ctype.h>
void count(char a[])
{
int vow=0,con=0,dig=0,spa=0,spe=0,alpha=0;
for(int i=0;i<strlen(a);i++)
{
switch(a[i])
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':vow++;break;
case ' ':spa++;break;
default:;
}
if(isdigit(a[i])){dig++;}
if(isalpha(a[i])){alpha++;}
}
con=alpha-vow;
cout<<"VOWELS="<<vow<<"\nSPACES="<<spa<<"\nCONSONANTS="<<con<<"\nSPECIAL="<<strlen(a)-spa-vow-con-dig<<"\nDIGITS="<<dig;
}
void changecase(char a[50])
{
for(int i=0;i<strlen(a);i++)
{if(a[i]>=65&&a[i]<=90)
 a[i]=a[i]+32;
if(a[i]>=97&&a[i]<=120)
a[i]=a[i]-32;
}
cout<<a;
}
void reverse(char a[50])
{
int l=strlen(a)+1,k=0,m;char temp;
for(int i=0;i<=l;i++)
{
if(a[i]==' ' || a[i]=='\0')
 {
  m=i-1;
   while(m>k)
   {
    temp=a[m];
    a[m]=a[k];
    a[k]=temp;
    m--;k++;
   }
  k=i+1;
 }
}
cout<<"Reversed string is:";
puts(a);
}



void main()
{
char ch;
do
{
clrscr();
cout<<"Enter string:";
char a[50];
gets(a);
cout<<"MENU\n1)Count no. of vowels,consonants space7 and special characters\n2)change case\n3)Reverse string\n4)Reverse each word\nEnter your choice:";
int choice;
cin>>choice;
switch(choice)
{
case 1:count(a);break;
case 3:cout<<strrev(a);break;
case 2:changecase(a);break;
case 4:reverse(a);break;
default:cout<<"wrong choice";
}
cout<<"\nDo u want to continue:";
cin>>ch;
}while(ch=='y' || ch=='Y');
}


