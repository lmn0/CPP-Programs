#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n,m;
cout<<"Enter no. of line :";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=n;k>=i;k--)
cout<<" ";
for(m=1;m<i;m++)
cout<<m;
for(j=i;j>0;j--)
cout<<j;
cout<<endl;
}
getch();
}



