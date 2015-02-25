#include<iostream.h>
#include<conio.h>

void linear(int a[], int n, int item)
{
	int i,j,pos=-1;
	for(i=0;i<n;i++)
	if(item==a[i])
	{
	pos=i+1;break;
	}
	if(pos>0)
	cout<<"\nThe item first found in position :"<<pos;
	else
	cout<<"\nNot found";
}

void binary(int a[], int n, int item)
{
	int beg=0,end=n-1,mid=(beg+end)/2,pos=-1;
	while(beg<=end)
	{	
	mid=(beg+end)/2;
	if(a[mid]==item)
	{
	pos=mid+1;break;
	}
	if(a[mid]<item)
	beg=mid+1;
	if(a[mid]>item)
	end=mid-1;
	}
	if(pos!=-1)
	cout<<"\nFound in position :"<<pos;
	else
	cout<<"\nNot found";
}

void bigsmall(int a[], int n)
{
	int big=a[0],small=a[0],i;
	for(i=0;i<n;i++)
	{
	if(a[i]>big)
	big=a[i];
	if(a[i]<small)
	small=a[i];
	}
	cout<<"\nThe biggest among the given numbers :"<<big;
	cout<<"\nThe smallest among the given numbers :"<<small;
}

void main()
{
	int i,item,a[100],g,n;
	char ch;
	do
	{
	clrscr();
	cout<<"MENU";
	cout<<"\n1)Linear search\n2)Binary search\n3)Big and small";
	cout<<"\nEnter your choice:";
	cin>>g;
	if(g>=1 && g<=3)
	{
	cout<<"\nEnter number of numbers =";
	cin>>n;
	if(g==1 || g==3)
		{
		cout<<"\nEnter the numbers :";
		for(i=0;i<n;i++)
		cin>>a[i];
		}
	}
	switch(g)
	{
	case 1:cout<<"\nEnter the item to search :";
	       cin>>item;
	       linear(a,n,item);
	       break;
	case 2:cout<<"\nEnter the numbers in ascending order :";
	       for(i=0;i<n;i++)
	       cin>>a[i];
	       cout<<"\nEnter the item to search :";
	       cin>>item;
	       binary(a,n,item);
	       break;
	case 3:bigsmall(a,n);
	       break;
	default:cout<<"\nWrong choice";
		break;
	}
	cout<<"\nDo you want to repeat ?(y/n)";
	cin>>ch;
}
while(ch=='y' || ch=='Y');
}



