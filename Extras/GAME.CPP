#include<iostream.h>
#include<conio.h>
void main()
{
int a[5]={0,0,0,0,5},b[5]={1,2,3,4,5},c[5]={0,0,0,0,5},i=3,j=3,pos=-1,t;
char ch,tch;
while(1)
{
pos=-1;t=-1;
clrscr();
cout<<"A - >";
for(int k=0;k<=3;k++)
cout<<a[k]<<" ";cout<<endl;
cout<<"B - >";
for(k=0;k<=3;k++)
cout<<b[k]<<" ";cout<<endl;
cout<<"C - >";
for(k=0;k<=3;k++)
cout<<c[k]<<" ";cout<<endl;
cout<<"Pop from :";cin>>ch;
switch(ch)
{
case 'a':for(i=0;i<=3;i++)if(a[i]!=0){t=a[i];a[i]=0;break;}  break;
case 'b':for(i=0;i<=3;i++)if(b[i]!=0){t=b[i];b[i]=0;break;}  break;
case 'c':for(i=0;i<=3;i++)if(c[i]!=0){t=c[i];c[i]=0;break;}  break;
}
tch=ch;
if(t==-1)
cout<<"\nNot possible";
else
{
cout<<"\nPush to :";cin>>ch;
switch(ch)
{
case 'a': for(j=3;j!=0;j--)if(a[j]==0 && t<a[j+1]){a[j]=t;pos=0;break;}if(pos==-1){if(tch=='c')c[i]=t;else b[i]=t;cout<<"\nNot possible";} break;
case 'b': for(j=3;j!=0;j--)if(b[j]==0 && t<b[j+1]){b[j]=t;pos=0;break;}if(pos==-1){if(tch=='a')a[i]=t;else c[i]=t;cout<<"\nNot possible";} break;
case 'c': for(j=3;j!=0;j--)if(c[j]==0 && t<c[j+1]){c[j]=t;pos=0;break;}if(pos==-1){if(tch=='b')b[i]=t;else a[i]=t;cout<<"\nNot possible";} break;
}
}
getch();
}

}
