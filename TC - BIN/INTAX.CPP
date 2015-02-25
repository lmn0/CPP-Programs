#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
char a[20],b,c;
float sal,sd,opd1,opd12,opd2,td,taxablein,intax,savings,rebate,rforw,tr,taxtoc,sur,nettax;
cout<<"enter your name: \n";
cin>>a;
cout<<"enter your salary: \n";
cin>>sal;
//salary is over//
//standard deduction//
{
if(sal<=60000)
sd=30000;
if(sal>60000 && sal<150000)
sd=25000;
if(sal>150000)
sd=20000;
}
//standard deductio is over//
{
cout<<"enter how much total you paid for charity first(if nill please enter 0: \n";
cin>>opd1;
cout<<"enter how much total you donated for your school, colleges etc.(if nill please enter 0) :\n";
cin>>opd12;
opd2=50*opd12/100;
}
td=opd1+opd2+sd;
taxablein=sal-td;
//next is income tax cal.//
{
if(sal<=60000)
intax=1000;
if(sal>60000 && sal<150000)
intax=1000+(20*(taxablein-60000)/100);
if(sal>150000)
intax=19000+(30*(taxablein-150000)/100);
}
//income tax is over//
//Savings//
cout<<"enter how much total savings do you make in an year :\n";
cin>>savings;
{
if(sal<=100000)
rebate=30*savings/100;
if(sal>100000 && sal<300000)
rebate=20*savings/100;
if(sal>300000)
rebate=15*savings/100;
}
//savings over//
cout<<"enter whether you are female or male: (f/m): \n";
cin>>c;
{
if(c=='f')
rforw=15000;
if(c=='m')
rforw=0;
}
tr=rebate+rforw;
//rebate is over//
taxtoc=intax-tr;
//Surcharge//
{
if(sal<=60000)
sur=0;
if(sal>60000 && sal<=150000)
sur=5*taxtoc;
if(sal>150000)
sur=5*taxtoc;
}
//sur is over//
nettax=taxtoc+sur;
cout<<"total Tax you will have to pay for this year will be :"<<nettax;
getch();
}



