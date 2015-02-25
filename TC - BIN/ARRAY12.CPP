#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
clrscr();
char name[4][4][4],f;
int m[3][3],i,n,e,n1,g;
x:clrscr();cout<<"\t\tMENU\n";
cout<<"1.Enter a name to the list\n2.Check for the student\n";
cout<<"Enter your choice :";
cin>>g;
clrscr();
switch(g)
{
case 1:cout<<"Enter the no. of students to enter :";
cin>>n1;
clrscr();
cout<<"ROLLNO. NAME MARK1 MARK2 MARK3\n";
for(i=0;i<n1;i++)
{
cout<<i+1<<" ";
gets(name[i][1]);
cin>>m[i][1]>>m[i][2]>>m[i][3];
}
cout<<"\n\nDo you want to exit(y or n)?..IF YOU EXIT ALL THE DATAS STORED WILL BE ERASED \n";
cin>>f;
if(f=='y')
goto y;
if(f=='n')
goto x;
case 2:
cout<<"\n\n\n\n Enter the roll no. :";
cin>>n;
for(i=0;i<n;i++)
{
cout<<name[i]<<" "<<m[i][1]<<" "<<m[i][2]<<" "<<m[i][3];
}
cout<<"\n\nDo you want to exit(y or n)?..IF YOU EXIT ,ALL THE DATAS STORED WILL BE ERASED \n";
cin>>f;
if(f=='y')
goto y;
if(f=='n')
goto x;
}
getch();
y:
}
