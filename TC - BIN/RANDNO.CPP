#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
void main()
{
clrscr();
int n,x,score=0,i;
char ch;
for(i=0;i<5;i++)
{
x=rand()%2+1;
cout<<"\tThe computer has gussed a no. between 0 and 100 try to guess it out you will be given 5 chances:";
cout<<"\nEnter ur no. :";
cin>>n;
if(n==x)
{
cout<<"\nCongrats !! your score(MAX - 100) is :";
score=100-i*18;
cout<<score;
getch();
cout<<"\nDo u want to continue :";
cin>>ch;
if(ch!='y')
exit(0);
}
else if(n<x)
{
cout<<"OOPS!! its too low \n Do u want to continue ? :";
cin>>ch;
if(ch!='y')
exit(0);
}
else if(n>x)
{
cout<<"OOPS!! its too high \n Do u want to continue ? :";
cin>>ch;
if(ch!='y')
exit(0);
}
}
getch();
}

