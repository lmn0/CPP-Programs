#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int a[50],b[50],c[100],m,n,i,k,j,t;
	cout<<"MENU\n1)Unsorted array merging\n2)Sorted array merging\nEnter yor choice:";
	cin>>t;
	cout<<"Enter total elements in arrays(m,n)";
	cin>>m>>n;
	cout<<"Enter the numbers one by one for array a:";
	for(i=0;i<m;i++)
	cin>>a[i];
	cout<<"Enter the numbers one by one for array b:";
	for(i=0;i<n;i++)
	cin>>b[i];
	switch(t)
	{
	case 1:for(i=0;i<m;i++)
	       c[i]=a[i];
	       for(i=0;i<n;i++)
	       c[i+m]=b[i];
	       cout<<"Merged array is:";
	       for(i=0;i<m+n;i++)
	       cout<<c[i]<<"  ";
	       break;
	case 2:int i=0,j=0,k=0;
	       while(i<m && j<n)
	       {
	       if(a[i]<b[j])
	       c[k++]=a[i++];
	       else
	       c[k++]=b[j++];
	       }
	       if(i<m)
	       while(i<m)
	       c[k++]=a[i++];
	       else
	       while(j<n)
	       c[k++]=b[j++];
	       cout<<"\nSorted and Merged no.s :\n";
	       for(i=0;i<k;i++)
	       cout<<c[i]<<" ";
	       break;
	default:cout<<"Wrong choice";
	}
	getch();
}