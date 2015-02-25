#include <stdio.h>
#include<iostream.h>
#include<process.h>
#include <conio.h>
void sum(int a[50][50],int b[50][50],int n,int m)
{
	int c[50][50],i,j,k;

	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	c[i][j]=a[i][j]+b[i][j];

	for(i=0;i<n;i++){
	for(j=0;j<m;j++)
	cout<<c[i][j]<<" ";
	cout<<endl;}

}

void diff(int a[50][50],int b[50][50],int n,int m)
{
	int i,j,c[50][50];

	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	c[i][j]=a[i][j]-b[i][j];


	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<c[i][j]<<" ";
	cout<<endl;
	}
}

void main()
{
	char g;
	int n,m,p,q,a[50][50],b[50][50],ch;
	do{                          clrscr();
	cout<<"Enter the row and coloumn size of A";
	cin>>n>>m;
	cout<<"Enter the row and coloumn size of B";
	cin>>p>>q;

	if(p!=n || q!=m)
	goto x;

	cout<<"Enter the values of A";
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	cout<<"Enter the vaules of B";
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	cin>>b[i][j];
	cout<<"MENU\n1)Sum\n2)Diff";
	cin>>ch;
	x:
	switch(ch)
	{
	case 1:sum(a,b,n,m);break;
	case 2:diff(a,b,n,m);break;
	default:cout<<"sorry";
	}
	cout<<"Do you want to cont?";
	cin>>g;
	}while(g=='y');
}

