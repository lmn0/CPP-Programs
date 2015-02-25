#include<iostream.h>
#include<conio.h>

int *p1,*p2,*s1,*s2,n,m,a,sum[100];

void main()
{
p1=new int;p2=new int;

cout<<"\nEnter n ,m  and a";
cin>>m>>n>>a;
cout<<"\nEnter A";

int k=0,i=0;

while(k!=n*m)
{
if(k==0)
s1=p1;
cin>>*p1;
p1++;
k++;
}
k=0;
cout<<"\nEnter B";

while(k!=n*a)
{
if(k==0)
s2=p2;
cin>>*p2;
p2++;
k++;
}
k=0;int *q1=s1,*q2=s2;

cout<<"\nA  ";

while(k!=n*m)
{
cout<<*q1<<" ";
q1=q1+1;
k++;
}

k=0;
cout<<"\nB  ";

while(k!=n*a)
{
cout<<*q2<<" ";
q2=q2+1;
k++;
}
k=0;


for(i=0;i<=100;i++)
sum[i]=0;
i=0;

do
{
do
{
x:
sum[k]=sum[k]+(*s1)*(*s2);
i++;
if(i==n)
{
if((k+1)%a==0)
{k++;break;}
s1=s1-n+1;
s2=s2-(n-1)*a+1;
k++;i=0;
goto x;
}
s1++;
s2=s2+a;
}while(1);

s1=s1++;
s2=s2-n*a+1;
i=0;
}while(k!=m*a);

k=0;
cout<<endl;
while(k!=m*a)
{cout<<sum[k]<<" ";k++;}
getch();

}



