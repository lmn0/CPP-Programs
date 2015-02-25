#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int n1,a,b,c,d,n2;
cout<<"enter 4 digit no.s";
cin>>n1;
a=n1%10;
n1=n1/10;
b=n1%10;
n1=n1/10;
c=n1%10;
d=n1/10;
n2=1000*a+100*b+10*c+d;
cout<<"reversed no. is "<<n2;
getch();
}
