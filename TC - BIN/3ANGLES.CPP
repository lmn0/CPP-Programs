#include<all.h>
#define forl(a,n,m,e,i,j) for(i=0;i<n;i++){for(j=0;j<m;j++){if(e==0){cin>>a[i][j];}if(e==1){cout<<a[i][j];}}cout<<"\n";}
void main()
{
int a[50][50],i,n,j,k,m,s=0,x=0;
cout<<"Etner the n m";
cin>>n>>m;
cout<<"E";
forl(a,n,m,0,i,j);
forl(a,n,m,1,i,j);
for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(i>j)
s=s+a[i][j];
x=s;
for(i=0;i<n;i++)
s=s+a[i][i];
cout<<"s1="<<s;
s=s-x;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(i<j)
s=s+a[i][j];
cout<<"\nS2="<<s;
getch();
}
