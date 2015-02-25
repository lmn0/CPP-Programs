#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
clrscr();
long int n,i,j,k,flag=1,l=1,m=1,c;
double s=0.0;
cout<<"Enter n :";
cin>>n;cin>>c; cout<<endl;
for(i=2;i<=n;i++)
{
for(j=2;j<=i/2;j++)
if(i%j==0){flag=0;break;}
if(flag==1)
l++;
flag=1;
}

for(i=2;i<=n;i++)
{
for(j=2;j<=i/2;j++)
if(i%j==0){flag=0;break;}

if(flag==1)
{
k=i;s=(float)s+(float)pow((1.0/k),c);
	/*for(m=1;m<=l;m++)
	cout<<" ";*/
	while(k>0)
	{
	cout<<k%5;
	k=k/5;
	}
	/*l--;*/
	cout<<endl;

}
flag=1;
}
cout<<" \nSum ="<<s;
getch();
}

