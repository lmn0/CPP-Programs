#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
float bill;
cout<<"enter the no .";
cin>>n;
if(n>100)
{
	n=n-100;
	bill=200;
	if(n>0)
	{
		if(n>=200)
		{
		n=n-200;
		bill=bill+500;
		}
		else
		{
		bill=bill+n*2.5;
		goto y;
		}
	}
	if(n>0)
	{
		if(n>=200)
		{
		n=n-200;
		bill=bill+600;
		}
		else
		{
		bill=bill+n*3;
		goto y;
		}
	}
	if(n>0)
	bill=bill+n*1;

}
y:cout<<"\nBill ="<<bill;
getch();
}