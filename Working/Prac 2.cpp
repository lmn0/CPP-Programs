# include <iostream.h>
# include <conio.h>
# include<process.h>

void binary(int a[],int item, int n)
{
int pos=-1,beg=0,end=n-1,mid;
while(beg<=end)
	{
	mid=(beg+end)/2;
	if(a[mid]==item) {pos = mid +1;break;}
	else if(a[mid]>item) end = n-1;
	else beg=mid+1;
	}
if (pos>0)
cout<<"\n\tFound in position :"<<pos;
else cout<<"\n\tNot Found";
}

void linear(int a[],int item, int n)
{
int i,pos;
for(i=0;i<n;i++)
if (a[i]==item) {pos=i+1;break;}
if (pos>0)
cout<<"\n\tFound in position :"<<pos;
else
cout<<"\n\tNot found";
}



void bigsmall(int a[],int n)
{
int big,small,i;
for(i=0;i<n;i++)
{
big=a[i];
small=a[i];
if(a[i+1]>big) big=a[i+1];
if(a[i+1]<small) small=a[i+1];
cout<<"\nBiggest is "<<big;
cout<<"\nSmallest is "<<small;
}

void main()
{
clrscr();
int i,a[20],n,item,ch;
char x;
a:cout<<"\n\t\tEnter size of the array\t";
cin>>n;
cout<<"\n\tEnter them one by one\n\n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"\n\tEnter number to be searched\t";
cin>>item;
cout<<"\n\n\t\tM\t\aE\t\aN\t\aU";
cout<<"\n\t(1) Search using Linear search";
cout<<"\n\t(2) Search using Binary search";
cout<<"\n\t(3) Biggest and Smallest";
cout<<"\n\n\tEnter your choice--> ";
cin>>ch;
switch(ch)
{
case 1 :linear(a,item,n);break;
case 2 :binary(a,item,n);break;
case 3 : bigsmall(a,n);break;
default:cout<<"\n\n\t\t\t\a\a\a\aEnter a valid option";exit(0);
}
cout<<"\nDo you want to retry ?? (Y/y or N/n) ";
cin>>x;
if(x=='Y'||x=='y')
{
clrscr();
goto a;
}
getch();
}
