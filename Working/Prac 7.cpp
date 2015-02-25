# include <iostream.h>
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
void sum(int a[10][10],int b[10][10],int m,int n)
{
int c[10][10],i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
c[i][j]=a[i][j]+b[i][j];
}
cout<<"\n\n\n\nThe sum of the 2 matrices is\n";
for(i=0;i<m;i++)
{
cout<<endl;
for(j=0;j<n;j++)
cout<<c[i][j]<<"\t";
}
}

void difference(int a[10][10],int b[10][10],int m,int n)
{
int c[10][10],i,j;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
c[i][j]=a[i][j]-b[i][j];

cout<<"\n\n\n\nThe sum of the 2 matrices is\n";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cout<<"\n"<<c[i][j]<<"\t";
}
void main()
{
a:
clrscr();
int m,n,p,q,i,j,a[10][10],b[10][10],ch;
char x;
cout<<"\nEnter size of Matrice 'A'";
cin>> m>>n;
cout<<"\nEnter the elements one by one\t:";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<"\n\nEnter size of Matrice 'B'";
cin>>p>>q;
cout<<"\nEnter elements one by one";
for(i=0;i<p;i++)
for(j=0;j<q;j++)
cin>>b[i][j];
if(m==p&&n==q)
{
cout<<"\nMENU";
cout<<"\n(1) Sum of the two arrays";
cout<<"\n(2) Difference of the arrays";
cout<<"\nEnter your choice";
cin>>ch;
switch(ch)
{
case 1:sum(a,b,m,n);break;
case 2:difference(a,b,m,n);break;
default:cout<<"\nWrong choice";
}
}
cout<<"\nDo you wish to retry?";
cin>>x;
if(x=='Y'||x=='y')
goto a;
}


