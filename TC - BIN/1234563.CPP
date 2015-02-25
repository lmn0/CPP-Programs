#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,m,n;
cout<<"enter the no. of times";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=n;k>=i;k--)
cout<<" ";
cout<<k<<"         ";
for(j=1;j<=i;j++)
cout<<j;
for(m=k;m>=1;m--)
cout<<m;
cout<<endl;
}
getch();
}
