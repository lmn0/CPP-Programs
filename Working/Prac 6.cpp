#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<ctype.h>
void counter(char a[])
{
int vow=0,cons=0,dig=0,space=0,special=0,alpha=0,i;
for(i=0;i<strlen(a);i++)
{
switch(a[i])
{
case 'a':	case 'A':	case 'e':	case 'E':
case 'i':       case 'I':	case 'o':	case 'O':
case 'u':	case 'U':
vow++;break;
case ' ':space++;break;
}
if(isdigit(a[i])){dig++;}
if(isalpha(a[i])){alpha++;}
}
cons=alpha-vow;
special=strlen(a)-space-vow-cons-dig;
cout<<"\nNumber of Vowels ="<<vow<<"\nNumber of Spaces ="<<space<<"\nNumber of Consonants ="<<cons;
cout<<"\nNumber of Special Charecters = 0\nNumber of Digits ="<<dig;
}

void casechange(char a[50])
{
int i;
for(i=0;i<strlen(a);i++)
{
if(a[i]>=65 && a[i]<=90)
a[i]=a[i]+32;
else if(a[i]>=97 && a[i]<=120)
a[i]=a[i]-32;
}
for(i=0;i<strlen(a);i++)
cout<<a[i];
}

void revword(char a[50])
{
int l=strlen(a)+1,k=0,m,i;
char temp;
for(i=0;i<=l;i++)
{
if(a[i]==' ' || a[i]=='\0')
 {
 m=i-1;
 while(m>k)
 {
 temp=a[m];
 a[m]=a[k];
 a[k]=temp;
 m--;
 k++;
 }
 k=i+1;
 }
}
cout<<"\n The reversed string is:";
puts(a);
}

void main()
{
a:
char x,a[50];
int ch;
clrscr();
cout<<"\n\a\aEnter string:";
gets(a);
cout<<"\n\n\t\t\tM\tE\tN\tU\n\n(1)Count the total number of vowels,consonants,spaces and special characters";
cout<<"\n(2)Change the case\n(3)Reverse the whole string\n(4)Reverse each word of the entered string\n(5)Exit\n\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:counter(a);break;
case 3:cout<<strrev(a);break;
case 2:casechange(a);break;
case 4:revword(a);break;
case 5:exit(0);
default:cout<<"\nWrong choice";
}
cout<<"\nDo u want to continue:";
cin>>x;
if(x=='y' || x=='Y')
goto a;
}

