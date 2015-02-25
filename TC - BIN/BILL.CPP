#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
long char a[20];
long float b,c,d;
long int e;
cout<<"Enter first name\n";
cin>>a;
cout<<"Enter your account no.\n";
cin>>e;
cout<<""<<a<<"'s current reading: \n";
cin>>b;
cout<<""<<a<<"'s prevoius reading: \n";
cin>>c;
d=(b-c)*.08;
cout<<"\n\nBILL= QR. "<<d;
getch();
}
