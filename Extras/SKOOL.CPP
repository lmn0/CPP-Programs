#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class school
{
int reg,roll,tfee,m1,m2,m3,tot,cla,tuf;
char name[20];
float avg;
public:
void geta()
{
cout<<"Enter the name :";
gets(name);
cout<<"\nEnter the register no. :";
cin>>reg;
cout<<"\nEnter the roll no. :";
cin>>roll;
cout<<"\nEnter the class :";
cin>>cla;
cout<<"\nEnter the marks 1,2,3 :";
cin>>m1>>m2>>m3;
cal();
cout<<"\nEnter the fee :";
accounts();
}
private:
void cal()
{
tot=m1+m2+m3;
avg=tot/3.0;
}
void accounts()
{
cout<<"\nTransport :";
cin>>tfee;
cout<<"\nTution fee :";
cin>>tuf;
}
public:
void display(int rl)
{
if(rl==reg)
{
cout<<"Name :";
puts(name);
cout<<"\nRegister no. :";
cout<<reg;
cout<<"\nRoll no. :";
cout<<roll;
cout<<"\nClass :";
cout<<cla;
cout<<"\nMarks 1,2,3 :";
cout<<m1<<"\n"<<m2<<"\n"<<m3;
cout<<"\nFee :";
cout<<"Tution  :"<<tuf<<"\nTransport :"<<tfee;
cout<<"TOTAL :"<<tot;
}
}

}s[3];

void main()
{  clrscr();
int i=0,n,g,j,rl;char h;
do
{
cout<<"MENU\n";
cout<<"1)Enter the details\n2)Display\n3)Exit";
cin>>g;
switch(g)
{
case 1:s[i].geta();
       i++;break;
case 2:cout<<"Enter the reg no. :";
       cin>>rl;
       for(j=0;j<i;j++)
       s[j].display(rl);
       break;
case 3:h='n';break;
}
}
while(h!='n');
getch();
}







