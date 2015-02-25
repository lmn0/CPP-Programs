#include<iostream.h>
#include<conio.h>

void main()
{

int sp1[100][3],sp2[100][3],sp3[100][3],n,m,j;


cout<<"Sparce 1:";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>sp1[i][0]>>sp1[i][1]>>sp1[i][2];
cout<<"->"<<sp1[i][0]<<sp1[i][1]<<sp1[i][2]<<"\n";

}

cout<<"Sparce 2:";
cin>>m;
for(i=0;i<m;i++)
{
cin>>sp1[i][0]>>sp1[i][1]>>sp1[i][2];
}

 i=0;j=0;
for(int k=0;k<n||k<m;k++)
{
if(sp1[i][0]==sp2[j][0])
{
if(sp1[i][1]==sp1[j][1])
{
sp3[k][0]=sp1[i][0];
sp3[k][1]=sp1[i][1];
sp3[k][2]=sp1[i][2]+sp2[j][2];
cout<<"\n"<<sp1[i][2]<<","<<sp2[j][2]<<">"<<sp3[k][2];
i++;j++;
}
else if(sp1[i][1]>sp2[j][1])
     {
     sp3[k][0]=sp2[j][0];
     sp3[k][1]=sp2[j][1];
     sp3[k][2]=sp2[j][2];
     j++;
     }
else
     {
     sp3[k][0]=sp1[i][0];
     sp3[k][1]=sp1[i][1];
     sp3[k][2]=sp1[i][2];
     i++;
     }
}
else if(sp1[i][0]>sp2[j][0])
     {
     sp3[k][0]=sp2[j][0];
     sp3[k][1]=sp2[j][1];
     sp3[k][2]=sp2[j][2];
     j++;
     }
else
     {
     sp3[k][0]=sp1[i][0];
     sp3[k][1]=sp1[i][1];
     sp3[k][2]=sp1[i][2];
     i++;
     }
}
for(i=0;i<k;i++)
cout<<sp3[i][0]<<","<<sp3[i][1]<<","<<sp3[i][2]<<"\n";
}