# include <iostream.h>//Ra}{uL T]-[E GrE@T
# include <conio.h>
# include <stdio.h>
# include <string.h>
# include <dos.h>
# include <fstream.h>
# include <process.h>
# include <time.h>
# include <graphics.h>
# include <stdlib.h>
void transpose(int a[10][10],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<a[j][i]<<"\t";
}
}

void rowcol(int a[10][10],int m,int n)
{
int i,j,coltot=0,rowtot=0;
j=0;
while(j<n)
{
for(i=0;i<m;i++)
coltot+=a[i][j];
cout<<"\nSum of Coloumn "<<i<<" = "<<coltot;
j++;coltot=0;
}
i=0;
while(i<m)
{
for(j=0;j<n;j++)
rowtot+=a[i][j];
cout<<"\nSum of Row "<<j<<" = "<<rowtot;
i++;rowtot=0;
}
}

void diagonal(int a[10][10],int m,int n)
{
int i,j,main=0,side=0;
for(i=0,j=0;i<m,j<n;i++,j++)
main+=a[i][j];
cout<<"\nSum of Main Diagonal is "<<main;
for(i=0,j=m-1;i<m,j>=0;i++,j--)
side+=a[i][j];
cout<<"\nSum of Side Diagonal is "<<side;
}


void main()
{
a:
clrscr();
int i,j,a[10][10],ch,m,n;
char x;
cout<<"\nEnter values of m and n";
cin>>m>>n;
cout<<"\nEnter the values";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>a[i][j];
cout<<"\nMENU\n(1) Transpose a matrix";
cout<<"\n(2) Row tot and coloumn tot";
cout<<"\n(3) Diagonal total";
cout<<"\nEnter your choice-->";
cin>>ch;
switch(ch)
{
case 1:transpose(a,m,n);break;
case 2:rowcol(a,m,n);break;
case 3:diagonal(a,m,n);break;
default:cout<<"\nError !!!";
}
cout<<"\nDo you want to continue";
cin>>x;
if(x=='Y'||x=='y')
goto a;
}

