#include<iostream.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>

class student
{
	private:
		int rollno;
		char name[20],grade[20];
		float m[5],total;
		float calctot()
	{
		float a;
		a=m[0]+m[1]+m[2]+m[3]+m[4];
		return a;
	}

	public:
		void readdata()
 {
  cout<<"\n Roll no:";
  cin>>rollno;
  cout<<"\n Name:";
  gets(name);
  cout<<"\n Enter the 5 subject marks:";
  for(int i=0;i<5;i++)
  cin>>m[i];
 }

 void calculate()
 {
 total=calctot();

 if (total>=470)
 strcpy(grade,"FIRST CLASS");
 else if(total>=350)
 strcpy(grade,"SECOND CLASS");
 else if(total>=250)
 strcpy(grade,"THIRD CLASS");
 else
 strcpy(grade,"FAIL");
}


void putdata()
{
cout<<"\n"<<rollno<<"\t"<<name<<"\t"<<m[0]<<"\t"<<m[1]<<"\t"<<m[2]<<"\t"<<m[3]<<"\t"<<m[4]<<"\t"<<total<<"\t"<<grade<<"\n";
}
		
}s[10];


 

int n,i=0;



void main()
{
int ch;
do
{
clrscr();
cout<<"\n\t\t\tMenu";
cout<<"\n 1.Enter the student Details:";
cout<<"\n 2.Display all the details:";
cout<<"\n 3.Exit";
cout<<"\n Enter ur choice-->";
cin>>ch;

switch(ch)
{
case 1:
cout<<"\n Enter the no: of students :";
cin>>n;
for(i=0;i<n;i++)
{
s[i].readdata();
s[i].calculate();
}
break;

case 2:
cout<<"\n Rno:"<<"\t"<<"NAME"<<"\t"<<"M1"<<"\t"<<"M2"<<"\t"<<"M3"<<"\t"<<"M4"<<"\t"<<"M5"<<"\t"
		<<"TOTAL"<<"\t"<<"GRADE"<<"\n";
		for(i=0;i<n;i++)
		s[i].putdata();
		break;

case 3:		exit(0);
default:	cout<<"\n Pls check ur choice";
		}
	getch();  }
		while(ch!=3);
		}
