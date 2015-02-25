#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,m,n;
cout<<"Enter no. of lines :";
cin>>n;
for(i=1;i<=n;i++)
{
for(k=n;k>=i;k--)
cout<<" ";
for(m=1;m<i;m++)
cout<<(char)(m+64);
for(j=i;j>0;j--)
cout<<(char)(j+64);
cout<<endl;
}
getch();
}


