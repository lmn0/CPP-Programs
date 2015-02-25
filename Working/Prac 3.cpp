#include <iostream.h>
#include <conio.h>
#include <process.h>

void unsort(int a[],int b[],int m,int n)
{
int i,c[100],t,k=0;
for(i=0;i<n;i++)
{
c[k]=a[i];
k++;
}
for(i=0;i<n;i++)
{
c[k]=b[i];
k++;
}
cout<<"\nThe merged array is \a\t";
for(i=0;i<n;i++)
cout<<"\n\t"<<c[i];
}

void sort(int a[],int b[],int m,int n)
{
int c[100],k,i,j;
i=0;k=0;j=n-1;
while(i<m&&j>=0)
	{
	if(a[i]<b[j])
	c[k++]=a[i++];
	else if (a[i]>b[i])
	c[k++]=b[j--];
	else
	{
	c[k++]=a[i++];
	c[k++]=b[j--];
	}
}
while(i<m)
c[k++]=a[i++];
while(j>=0)
c[k++]=b[j--];
cout<<"\nThe merged array is \a";
for(i=0;i<m+n;i++)
cout<<"\n\t"<<c[i];
}

void main()
{
a:clrscr();
int a[50],b[50],m,n,ch,i;
char x;
cout<<"\n\a\aEnter the sizes of array 'A' and 'B'";
cout<<"\nArray 'A'--->";
cin>>m;
cout<<"\nArray 'B'--->";
cin>>n;
cout<<"\n\n\a\t===*===*===* M E N U *===*===*===";
cout<<"\n(1) Merged 2 Unsorted arrays";
cout<<"\n(2) Merge 2 sorted arrays into another sorted array";
cout<<"\n(3) Exit";
cout<<"\n\nEnter your choice-->";
cin>>ch;
switch(ch)
{
case 1:	cout<<"\nEnter elements of array 'A'\n";
	for(i=0;i<m;i++)
	cin>>a[i];
	cout<<"\nEnter elements of array 'B'\n";
	for(i=0;i<n;i++)
	cin>>b[i];
	unsort(a,b,m,n);
	break;
case 2:	cout<<"\nEnter elements of array 'A' in ascending order\n";
	for(i=0;i<m;i++)
	cin>>a[i];
	cout<<"\nEnter elements of array 'B' in descending order\n";
	for(i=0;i<n;i++)
	cin>>b[i];
	sort(a,b,m,n);
	break;
case 3: exit(0);
default:;

}
cout<<"\n\aDo you want to retry ?? (Y/y or N/n)";
cin>>x;
if(x=='Y'||x=='y')
goto a;
}