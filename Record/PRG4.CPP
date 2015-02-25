#include<iostream.h>
#include<conio.h>

void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	for(j=0;j<n-1;j++)
	if(a[j]>a[j+1])
	{
	 temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
	}
	cout<<"\nUsing Bubble sort :\n";
	for(i=0;i<n;i++)
	cout<<a[i];
}

void insertsort(int a[],int n)
{
	int i,k,t;

	for(i=0;i<n-1;i++)
	{
	k=i;
	t=a[i+1];

	while(t<a[k] && k>=0)
	 {a[k+1]=a[k];k--;}
	a[k+1]=t;
	}
	cout<<"\nUsing Insertion sorting :";
	for(i=0;i<n;i++)
	cout<<a[i];
}

void selectionsort(int a[], int n)
{
	int small,i,pos,j;

	for(i=0;i<n;i++)
	{
	 small=a[i];
	 for(j=i;j<n;j++)
	  if(a[j]<small)
	  { small=a[j];pos=j; }
	 a[pos]=a[i];
	 a[i]=small;
	}
	cout<<"\nUsing Selection sorting :";
	for(i=0;i<n;i++)
	cout<<a[i];
}



void main()
{
	int i,n,a[50],g;
	char ch;
	do{
	clrscr();
	cout<<"MENU\nSort an array using\n1)Bubble sort\n2)Insertion sort\n3)Selection sort\nEnter your choice :";
	cin>>g;
	if(g>0 && g<4)
	{
	 cout<<"\nEnter the size of array :";
	 cin>>n;
	 cout<<"\nEnter the array :";
	 for(i=0;i<n;i++)
	 cin>>a[i];
	}

	switch(g)
	{
	case 1:bubblesort(a,n);break;
	case 2:insertsort(a,n);break;
	case 3:selectionsort(a,n);break;
	default:cout<<"Wrong choice";break;
	}

	cout<<"\nDo you want to repeat? ";
	cin>>ch;
	}while(ch=='y');
}




