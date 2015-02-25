#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class bank
{
private:
char name[20];
int acno;
char type;
float balance;
public:
void intialise()
{cout<<"Enter name:";
gets(name);
cout<<"Enter account number:";
cin>>acno;
cout<<"Enter account type(C or S):";
cin>>type;
cout<<"Enter balance:";
cin>>balance;
}
void deposit(float amount