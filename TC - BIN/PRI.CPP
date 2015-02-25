#include<iostream.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
void main()
{
int i,j,flag=1; double h;

clrscr();
for(i=1;;i++)
{
for(j=2;j<=i/2;j++)
if(i%j==0)
{flag=0;break;}
if(flag==1) {
h=(double)(pow(i,-1));
cout<<i<<"="<<(double)h<<"  ";  }
flag=1;

}

getch();
}
