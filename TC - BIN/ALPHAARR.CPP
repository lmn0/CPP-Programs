#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char a[20][20],temp[20];
int i,j,n;
cout<<"Enter no. of names :";
cin>>n;
cout<<"\nEnter the names one by one[19 max] :\n";
for(i=0;i<n;i++)
gets(a[i]);
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(strcmp(a[i],a[j])>0)
{
strcpy(temp,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp);
}
cout<<"\nAlphabetic order :\n";
for(i=0;i<n;i++)
{
for(j=0;j<strlen(a[i]);j++)
cout<<a[i][j];
cout<<endl;
}
getch();
}





