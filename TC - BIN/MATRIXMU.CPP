#include<fstream.h>
#include<conio.h>
void main()
{

int n,m,i,j,a[100][100],b[100][100],c;
cin>>n>>m;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
cin>>a[i][j];

for(i=0;i<m;i++)
for(j=0;j<n;j++)
cin>>b[i][j];

int sum=0,C[100][100];
for(i=0;i<n;i++)
{
for(c=0;c<n;c++)
{
sum=0;
for(j=0;j<m;j++)
sum+=a[i][j]*b[j][c];
C[i][c]=sum;
}
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
cout<<C[i][j]<<" ";
cout<<endl;
}

getch();
}