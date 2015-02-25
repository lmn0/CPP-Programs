#include<iostream.h>
#include<conio.h>
class bank
{
private:
int acno;
char type,name[20];
float bal;
public:
void get()
{
cout<<"Enter account no.";
cin>>acno;
cout<<"Enter the name:";
gets(name);
cout<<"Enter type ";
cin>>type;
cout<<"Balance";
cin>>bal;
}

void display()
{
cout<<"Acount no.:"<<acno<<"\nName :";
puts(name);
cout<<"Type :"<<type<<"\n";
cout<<"Balance :"<<bal;
}

void depo(float am,int acn);
void withdraw(float am,int acn);
}

void bank::dep(float am,int acn)
{
for(i=0;i<10;i++)
if(b[i].