#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class student
{
private:
	int rollno;
	char name[20];
	float mark[3];
	float total;
	char grade[20];
	float calctot()
	{
	total=mark[0]+mark[1]+mark[2];
	return total;
	}
public:
	void readdata()
	{
	cout<<"\nEnter roll no.:";
	cin>>rollno;
	cout<<"\nEnter name:";
	gets(name);
	cout<<"\nEnter 3 marks:";
	cin>>mark[0]>>mark[1]>>mark[2];
	}

	void calculat()
	{
	total=calctot();
	if(total>=470)
	strcpy(grade,"first class");
	if(total<470 && total>=350)
	strcpy(grade,"second class");
	if(total<350 && total>=250)
	strcpy(grade,"third class");
	if(total<250)
	strcpy(grade,"fail");
	}

	void putdata()
	{
	cout<<"\nRoll no.:"<<rollno;
	cout<<"\nName:"<<name;
	cout<<"\nTotal:"<<total;
	cout<<"\nGrade:"<<grade;
	cout<<endl;
	}

} s[100];

void main()
{
	int n;
	char ch;
	do{

	clrscr();
	cout<<"MENU\n1)Accept\n2)Display\nEnter your choice:";
	int choice;
	cin>>choice;
	switch(choice)
	{
	case 1:
	       cout<<"Enter total no. of students:";
	       cin>>n;
	       cout<<"Enter the details:";
	       for(int i=0;i<n;i++)
	       {s[i].readdata();s[i].calculat();}
	       break;

	case 2:
	       for(i=0;i<n;i++)
	       s[i].putdata();
	       break;

	default:cout<<"Wrong choice";
	}
	cout<<"Do u want to continue:";
	cin>>ch;
	}while(ch=='y' || ch=='Y');

}



