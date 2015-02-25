#include<iostream.h>
#include<conio.h>

struct node
{
int no;
}*n;

struct man
{
node *n[5];
}*m;

void main()
{
m=new man;
	int f;
for(int i=0;i<5;i++)
{
n=new node;
n->no=i;
m->n[i]=n;
}
     int k;
cout<<"Enter the computer name to check";
cin>>k;
for(int j=0;j<5;j++)
{
if((m->n[j])->no==k)
{cout<<"\nFound "<<k;f=1;break;}
}
getch();
}
