#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
clrscr();
int x,i=1,p,s=0;
cout<<"\tWELCOME TO DIES PLAY !!";
do
{
cout<<"\nPlayer to press 1:";
cin>>p;
randomize();
x=rand()%6+1;
cout<<"No. on the die :"<<x;
s=s+x;
cout<<"\nScore ="<<s;
if(s>=20)
break;
cout<<"\nNo. of chances left :"<<5-i<<endl<<endl;
i++;
}while(i<=5);
if(s>=20)
cout<<"\nWOW the player won with a score :"<<s;
else
cout<<"U lost !! Better luck next time . Ur score :"<<s;
getch();
}

