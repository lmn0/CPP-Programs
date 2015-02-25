#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,k,b;
char m,j;
cout<<"enter no. of lines";
cin>>n;
cout<<"\n";
b=n;
for(i=1;i<=b;i++)
{
for(k=1;k<=i;k++)
cout<<" ";
for(j=65;j<=64+n;j++)
cout<<j;
for(m=j-2;m>=65;m--)
cout<<m;
n=n-1;
cout<<endl;
}
getch( );
}

