#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
void main()
{ clrscr();

int x,i,j,flag=1;
double p=1.0;

for(x=1;x<=10;x++)
{

for(i=2;i<=30;i++)
{
for(j=2;j<=i/2;j++)
if(i%j==0){flag=0;break;}
if(flag==1)
p+=(double)pow(i,-x);
flag=1;
}
cout<<x<<" "<<(double)p<<endl;
p=1.0;
}

getch();
}






