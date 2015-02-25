#include<iostream.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,up=0,lo=0,vowel=0,g,j,n=0;
	char a[100];
	cout<<"\t\tMENU\nCount \n1)Upper cases\n2)Lower cases\n3)Palindrom\n4)Vowels\n";
	cin>>g;
	if(g>4)
	goto x;
	cout<<"\nEnter the string :";
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
	if(isupper(a[i]))
	up++;
	if(islower(a[i]))
	lo++;
	}
	switch(g)
	{
	case 1:cout<<"\nUpper cases :"<<up;break;
	case 2:cout<<"\nLower cases :"<<lo;break;
	case 3:for(i=0,j=strlen(a)-1;i<=j;i++,j--)
	       {	
	       if(a[i]==a[j])
	       n=1;
	       else
	       n=0;
	       }
	       if(n==1)
	       cout<<"\nPalindrom";
	       else
	       cout<<"\nNot a palindrom";
	       break;
	case 4:for(i=0;a[i]!='\0';i++)
	       switch(a[i])
	       {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':vowel++;break;
	       }
	       cout<<"\nNo. of vowels ="<<vowel;
	       break;
	x: default:cout<<"\nWrong choice";break;
	}
	getch();
}

