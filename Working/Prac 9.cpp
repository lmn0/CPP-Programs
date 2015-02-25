# include<fstream.h>
# include<conio.h>
# include<ctype.h>
# include<string.h>
# include<stdio.h>


struct country
{
char cname[10];
char capital[10];
float percapita;
}
c[10];

int i=0,n;

void dispcap()
{
int flag=0;
char name[10];
cout<<"\nEnter country name to be displayed :";
gets(name);
for(i=0;i<n;i++)
if(strcmp(c[i].cname,name)==0)
{
cout<<"\n\nCapital :"<<c[i].capital;
cout<<"\n\nPer Capita :"<<c[i].percapita;
flag++;
}
if(flag==0)
cout<<"\nCountry not found !!";
}

void dispincome()
{
float inc;
int i,flag=0;
cout<<"\nEnter percapita income";
cin>>inc;
for(i=0;i<n;i++)
if(c[i].percapita<inc)
{
cout<<endl<<c[i].cname;
flag++;
}
if(flag==0)
cout<<"\nNo countries have per capita income lesser than entered";
}


void main()
{
int ch;
char x;
do
{
clrscr();
cout<<"\nEnter number of country details you are going to enter :";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter country name "<<i+1<<" :";
gets(c[i].cname);
cout<<"\nEnter capital name "<<i+1<<" :";
gets(c[i].capital);
cout<<"\nEnter per-capita income of the country :";
cin>>c[i].percapita;
}
cout<<"\n\t\t*************** MENU ******************";
cout<<"\n(1) Accept country name and display details";
cout<<"\n(2) Accept per-capita and display countries having less than entered value";
cout<<"\nEnter your choice-->";
cin>>ch;
switch(ch)
{
case 1:dispcap();break;
case 2:dispincome();break;
default:cout<<"\n\aWrong choice";
}
cout<<"\n\n\n\n\n\aDo you want to continue? (Y/y or N/n)";
cin>>x;
}
while(x=='Y'||x=='y');
}

