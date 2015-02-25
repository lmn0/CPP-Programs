#include<all.h>
#include<conio.h>
void main()
{
char a[80][20],name[80],temp[80];
int i,n,mid,beg=0,end=0,pos=-1;
cout<<"enter n";
cin>>n;
end=n;
cout<<"Enter the names";
for(i=0;i<n;i++)
{
gets(a[i]);
cout<<endl;
}
cout<<"\nEnter a name :";
gets(name);
i=0;
while(beg<=end && beg!=n && end!=-1)
{
mid=(beg+end)/2;
if(strcmp(a[mid],name)>0)
end=mid-1;
if(strcmp(a[mid],name)<0)
beg=mid+1;
if(strcmp(a[mid],name)==0)
{pos=mid;break;}
i++;
}
if(pos!=-1)
cout<<"Found in pos ="<<pos+1;
else
cout<<"not found";
getch();
}


