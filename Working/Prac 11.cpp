# include "iostream.h"
# include "conio.h"
# include "math.h"
# include "stdio.h"
# include "process.h"

class Employee
{
int empno;
char name[10];
float basic,DA,HRA,PF,TAX,net;
float calnet()
{
return basic+DA+HRA-PF-TAX;
}

public:

void readdata()
{
cout<<"\nEnter Employee number: ";
cin>>empno;
cout<<"\nEnter Employee name :";
gets(name);
cout<<"\nEnter basic salary :";
cin>>basic;
}

void calculate()
{
if(basic<2000)
	{
	DA=0.12*basic;
	HRA=400;
	}
else if(basic>=2000&&basic<5000)
	{
	DA=0.15*basic;
	HRA=500;
	}
else if (basic>=5000&&basic<10000)
	{
	DA=0.40*basic;
	HRA=600;
	}
if(basic<=1000)
	TAX=0;
else if(basic>1000&&basic<=4000)
	TAX=0.20*basic;
else if(basic>4000&&basic<=15000)
	TAX=0.25*basic;
else if(basic>15000)
	TAX=0.3*basic;
PF=0.1*basic;
}

void display()
{
calculate();
net=calnet();
cout<<"\nEmployee number :"<<empno;
cout<<"\nEmployee name :"<<name;
cout<<"\nBasic Salary :"<<basic;
cout<<"\nDA :"<<DA<<"\nHRA :"<<HRA<<"\nPF :"<<PF<<"\nTAX :"<<TAX;
cout<<"\nNet Salary :"<<net<<"\n\n\n\n\n\n\n\n";
}
}e[10];

int i=0,n;

void main()
{
char x;
int ch;
do
{
clrscr();
cout<<"\nEnter the number of employee details you are going to enter :";
cin>>n;
for(i=0;i<n;i++)
e[i].readdata();
for(i=0;i<n;i++)
e[i].display();
cout<<"\n\nDo you want to continue ? (Y/y or N/n)";
cin>>x;
}
while(x=='Y'||x=='y');
}

