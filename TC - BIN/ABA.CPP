#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,k;
char m,j;
cout<<"enter no. of lines";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=1;k<=i;k++)
cout<<" ";
for(j=64+i;j>64+i;j--)
cout<<j;
for(m=j;m>=65;m++)
cout<<m;
cout<<endl;
}
getch( );
}

