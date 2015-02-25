#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
int n;
struct country
{
	char name[20];
	char capital[20];
	float percp;
}c[50];

void input()
{
	cout<<"Enter total no. of countries:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"\nEnter name:";
	gets(c[i].name);
	cout<<"\nEnter capital:";
	gets(c[i].capital);
	cout<<"\nEnter per capita income:";
	cin>>c[i].percp;
	}

}
void dispcapital(char cname[20])
{
	int flag=0;
	for(int i=0;i<n;i++)
	{

	if(strcmp(c[i].name,cname)==0)
	{cout<<"\nCapital is "<<c[i].capital;flag=1;}

	}
	if(flag==0)
	cout<<"No country with such a capital exists!!";
}

void dispname(char cname[20])
{
	int flag=0;
	for(int i=0;i<n;i++)
	{

	if(strcmp(c[i].capital,cname)==0)
	{cout<<"\nCountry is "<<c[i].name;flag=1;}

	}

	if(flag==0)
	cout<<"No country with such a name exists!!";

}


void dispdetails(float income)
{
	int flag=0;
	for(int i=0;i<n;i++)
	{

	if(c[i].percp>income)
	{cout<<"\nCountry:"<<c[i].name;
	cout<<"\nCapital:"<<c[i].capital;
	cout<<"\nIncome:"<<c[i].percp;
	flag=1;
	cout<<endl;
	}
	if(flag==0)
	cout<<"No such country exists!!";

	}
}

void main()
{
	char ch;
	do
	{
	clrscr();
	char cname[20];
	cout<<"\nMENU\n1)Display capital\n2)Display country\n3)Display country details\nEnter your choice:";
	int choice;
	input();
	cin>>choice;
	switch(choice)
	{
	case 1:cout<<"Enter country name:";
	       gets(cname);
	       dispcapital(cname);
	       break;
	case 2:cout<<"Enter capital name:";
	       gets(cname);
	       dispname(cname);
	       break;
	case 3:cout<<"Enter income:";
	       float income;
	       cin>>income;
	       dispdetails(income);
	       break;
	default:cout<<"Wrong choice";
	}
	cout<<"\nDo u want to continue:";
	cin>>ch;
	}while(ch=='y' || ch=='Y');
}



