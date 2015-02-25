# include<iostream.h>
# include<conio.h>
# include<process.h>
# include<stdio.h>

struct student
{
char name[10];
int mark;
}s[10];

int i=0,n;

void topper()
{
int big=s[0].mark,small=s[0].mark;
for(i=0;i<n;i++)
{
if(s[i].mark > s[i+1].mark)
big=i;
else
small=i;
}
cout<<"\nThe student who scored the highest mark is :";
cout<<s[big].name;
cout<<"\nThe student who scored the lowest mark is :";
cout<<s[small].name;
}

void display()
{
for(i=0;i<n;i++)
{
cout<<"\nName :"<<s[i].name;
cout<<"\nMark :"<<s[i].mark<<"\n\n\n";
}
}

void main()
{
char x;
do
{
clrscr();
cout<<"\nEnter number of details you are going to enter :";
cin>>n;
cout<<"\nEnter them one by one\n\n";
for(i=0;i<n;i++)
{
cout<<"\nEnter name "<<i+1<<" :";
gets(s[i].name);
cout<<"\nEnter total marks scored by student :";
cin>>s[i].mark;
}
cout<<"\n\n\n\n\n\n\n\t\t\t*****#*****^***** M E N U *****^*****#*****";
cout<<"\n\n\t\t(1) Display details of students entered";
cout<<"\n\t\t(2) Find the highest and lowest scorer ";
int ch;
cin>>ch;
switch(ch)
{
case 1:display();break;
case 2:topper();break;
case 3:exit(0);
default:"\n\aWRONG CHOICE !!!";
}
cout<<"\nDo you want to retry ? (Y/y or N/n)\n\t\t\t--->";
cin>>x;
}
while(x=='y'||x=='Y');
}
