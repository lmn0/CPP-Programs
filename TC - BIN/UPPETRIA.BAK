#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>
void main()
{
clrscr();
int m,n,a[80][80],i,j,sum=0,k;
cout<<"Enter the no. of rows and column :\n";
cin>>m>>n;
cout<<"Elements :";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
if(m!=n)
{
cout<<"NOT A SQUARE";
exit(0);
}
cout<<"\n\n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
cout<<a[i][j];
cout<<endl;
}
for(i=0;i<m;i++)
{
for(j=0;j<n-i;j++)
sum=sum+a[i][j];
}
cout<<"\n\nSUM ="<<sum;
getch();
}

