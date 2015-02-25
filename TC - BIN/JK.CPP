#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{ clrscr();
float a=0.00000;
int n=2,i,j,flag=0;

for(i=2;i<=40;i++)
{
for(j=2;j<i/2;j++)
if(i%j==0)
{flag=1;break;}

if(flag==0)
{a+=pow(i,1/n);/*cout<<i;*/n++;}
flag=0;
}
cout<<" "<<(float)a<<"\n";
getch();
}




