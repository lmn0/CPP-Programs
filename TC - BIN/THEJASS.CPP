#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int a,b=1,n=1;
printf("enter a no.");
scanf("%d",&a);
while (n<=a)
{
b=b*n;
n=n+1;
printf("%d*",b);
}
getch();
}