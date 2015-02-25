#include<iostream.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>

void dispcl();
void dispasce();

struct students
{
int rno,sub[3],tot;
char name[20],grade;
float avg;
}s[100],temp;
int n;

void main()
{
clrscr();
int i,j,ch;
char g;
cout<<"Enter no. of students :";
cin>>n;
cout<<"\n";
cout<<"Enter the student details \n";
for(i=0;i<n;i++)
{
cout<<"\nRoll No. :";
cin>>s[i].rno;
cout<<"\nName :";
gets(s[i].name);
for(j=0;j<3;j++)
{cout<<"\n"<<i+1<<"Sub marks"<<j+1;
cin>>s[i].sub[j];
}
cout<<"\n";
}
for(i=0;i<n;i++)
{
for(j=0;j<3;j++)
s[i].tot+=s[i].sub[j];
s[i].avg=s[i].tot/3.0;
if(s[i].avg>=40)
if(s[i].avg>=60)
if(s[i].avg>=80)
s[i].grade='A';
else
s[i].grade='B';
else
s[i].grade='C';
else
s[i].grade='D';
}
do {  clrscr();
cout<<"\t\tMENU\n";
cout<<"1)Display details\n2)Display students in ascending order\n3)Exit\n";
cin>>ch;
switch(ch)
{
case 1:dispcl();break;
case 2:dispasce();break;
case 3:exit(0);
default:cout<<"Sorry";
}
cout<<"Do you want to continue ?";
cin>>g;
}while(g=='y'||g=='Y');
getch();
}

void dispcl()
{
int i,j;
cout<<"\n\t\tSTUDENT DETAILS\n";
cout<<"-------------------------------------------------------------------------";
cout<<"\nRoll no.     Name          Total   Average     Grade \n";
cout<<"-------------------------------------------------------------------------\n";

for(i=0;i<n;i++)
cout<<s[i].rno<<"     "<<s[i].name<<"          "<<s[i].tot<<"   "<<s[i].avg<<"     "<<s[i].grade<<"\n";

}

void dispasce()
{
int i,j;
cout<<"\n\t\tSTUDENT DETAILS\n";
cout<<"-------------------------------------------------------------------------";
cout<<"\nRoll no.     Name          Total   Average     Grade \n";
cout<<"-------------------------------------------------------------------------\n";
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(s[j].tot<s[j+1].tot)
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}

for(i=0;i<n;i++)
cout<<s[i].rno<<"     "<<s[i].name<<"          "<<s[i].tot<<"   "<<s[i].avg<<"     "<<s[i].grade<<"\n";

}





