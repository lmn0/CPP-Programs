#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
cout<<"Etner the consumer no.";
cin>>c;
cout<<"\nEtner the present reading :";
cin>>a;
cout<<"\nEtner the previous reading:";
cin>>b;
int d=a-b;
double bill;

if(d<=100)
bill=d*2;

if(d>=100 && d<=300)
bill=200+(d-100)*2.5;

if(d>=300 && d<=500)
bill=700+(d-300)*3;

if(d>500)
bill=1300+(d-500)*3.5;

cout<<"Bill= "<<bill;
getch();
}




