#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>


class shape
{

public:

void line_hor(int, int, int, char);
void line_ver(int, int, int, char);
void box(int, int, int, int, char);

};

class control
{
private:

void edit_menu();

public:

void main_menu();
void help();

};

class initial
{
private:

int   accno;
char  name[30], address[60];
float balance;

void modify_account(int, char t_name[30], char t_address[60]);
void box_for_list();

public:

void add_to_file(int, char t_name[30], char t_address[60], float);
void display_list();
void delete_account(int);
void update_balance(int, float);
void modify();
int last_accno();
int found_account(int);
char *return_name(int);
char *return_address(int);
float give_balance(int);
int recordno(int);
void display(int);

};

class account
{
private:

void add_to_file(int, int, int, int, char, char t_type[10], float, float, float);
void delete_account(int);
int no_of_days(int, int, int, int, int, int);
float calculate_interest(int, float);
void display(int);
void  box_for_display(int);

int   accno;
char  type[10];
int   dd, mm, yy;
char  tran;
float interest, amount, balance;

public:

void new_account();
void close_account();
void display_account();
void transaction();
void clear(int, int);

};


void shape::line_hor(int column1, int column2, int row, char c)
{

for(column1; column1<=column2; column1++)
{
gotoxy(column1,row);
cout<<c;
}

}

void shape::line_ver(int row1, int row2, int column, char c)
{

for(row1; row1<=row2; row1++)
{
gotoxy(column,row1);
cout<<c;
}

}

void shape::box(int column1, int row1, int column2, int row2, char c)
{

char ch=218;
char c1, c2, c3, c4;
char l1=196, l2=179;

if(c==ch)
{
c1=218;
c2=191;
c3=192;
c4=217;
l1=196;
l2=179;
}

else
{
c1=c;
c2=c;
c3=c;
c4=c;
l1=c;
l2=c;
}

gotoxy(column1,row1);
cout<<c1;
gotoxy(column2,row1);
cout<<c2;
gotoxy(column1,row2);
cout<<c3;
gotoxy(column2,row2);
cout<<c4;
column1++;
column2--;
line_hor(column1,column2,row1,l1);
line_hor(column1,column2,row2,l1);
column1--;
column2++;
row1++;
row2--;
line_ver(row1,row2,column1,l2);
line_ver(row1,row2,column2,l2);

}

void scrn()
{
clrscr();

int li,lp;

for(lp=10;lp<=21;lp++)
{
gotoxy(10,lp);
delay(100);
cout<<":";
}

for(lp=21;lp>=10;lp--)
{
gotoxy(70,lp);
delay(100);
cout<<":";
}

for(li=20;li<=60;li++)
{
gotoxy(li,10);
delay(30);
cout<<"*";
}

for(li=60;li>=20;li--)
{
gotoxy(li,21);
delay(30);
cout<<"*";
}

gotoxy(26,14);
cout<<"Welcome To The BANKING SYSTEM";
gotoxy(14,17);
cout<<"Designed and Coded For Class 12th Annual Examination";
gotoxy(40,48);
cout<<"Press Any Key To..........Continue";

getch();
}

void intro()
{
clrscr();

gotoxy(29,2);
cout<<"B A N K I N G   S Y S T E M";
gotoxy(29,5);
cout<<"~~I N T R O D U C T I O N~~";
gotoxy(11,8);
cout<<"This 'BANKING SYSTEM' Project is designed for a bank having";
gotoxy(11,9);
cout<<"many number of accounts.Through this project you can generate";
gotoxy(11,10);
cout<< "and manage a simple database for bank accounts.In this project";
gotoxy(11,11);
cout<<"options are given for opening,editing,withdrawing,depositing";
gotoxy(11,12);
cout<<"and closing accounts and for finding the account status.In this";
gotoxy(11,13);
cout<<"project I have even included the facility of calculating";
gotoxy(11,14);
cout<<"interest for the deposits.";
gotoxy(5,19);
cout<<"This Project Is Coded By  -  ";
gotoxy(24,21);
cout<<"Swathi Sethumadhavan";
gotoxy(32,23);
cout<<"XII-I";
gotoxy(26,25);
cout<<"MES Indian School";
gotoxy(29,27);
cout<<"Doha - Qatar";
gotoxy(40,29);
cout<<"Press any key to .............. Continue";

getch();
}

void control::main_menu()
{
int gd=DETECT,gm=DETECT;
initgraph(&gd,&gm,"..\bgi");

int li,lp;
char choice;

do
{
clrscr();

for(li=30;li<54;li++)
{
gotoxy(li,6);
delay(30);
cout<<"*";
}

for(li=54;li>=30;li--)
{
gotoxy(li,24);
delay(30);
cout<<"*";
}

for(lp=6;lp<=24;lp++)
{
gotoxy(54,lp);
delay(100);
cout<<"|";
}

for(lp=24;lp>=6;lp--)
{
gotoxy(30,lp);
delay(100);
cout<<"|";
}

gotoxy(15,3);
cout<<"\nPress the corresponding Keys for the desired action";
gotoxy(33,8);
cout<<"I: Introduction";
gotoxy(33,10);
cout<<"S: Account Status";
gotoxy(33,12);
cout<<"L: List Of Accounts";
gotoxy(33,14);
cout<<"O: Open New Account";
gotoxy(33,16);
cout<<"T: Transactions";
gotoxy(33,18);
cout<<"E: Edit Account";
gotoxy(33,20);
cout<<"H: Help";
gotoxy(33,22);
cout<<"Q: Quit";

gotoxy(31,26);
cout<<"Enter your choice  -  ";
cin>>choice;

switch(choice)
{
case 'I':
intro();
break;

case 'S':
{
account a;
a.display_account();
}
break;

case 'L':
{
initial ini;
ini.display_list();
}
break;

case 'O':
{
account a;
a.new_account();
}
break;

case 'T':
{
account a;
a.transaction();
}
break;

case 'E':
{
edit_menu();
}
break;

case 'H':
{
help();
}
break;

case 'Q':
{
exit(0);
}
break;

default:
{
gotoxy(21,29);
cout<<"Illegal Choice or make sure CAPS Lock is on";
getch();
break;
}
}
}
while(choice!='Q');
}

void control::edit_menu()
{
clrscr();

char echoice;

shape s;
s.box(10,5,71,21,219);
s.box(9,4,72,22,218);

textcolor(BLACK);
textbackground(WHITE);
gotoxy(34,10);
cout<<"EDIT MENU";
textcolor(LIGHTGRAY);
textbackground(BLACK);
gotoxy(31,12);
cout<<"M: MODIFY ACCOUNT";
gotoxy(31,13) ;
cout<<"C: CLOSE ACCOUNT";
gotoxy(31,14);
cout<<"Q: QUIT";
gotoxy(31,16);

cout<<"Enter your choice : ";
cin>>echoice;

switch(echoice)
{

case 'M':
{
initial ini;
ini.modify();
}
break ;

case 'C':
{
account a;
a.close_account();
}
break;

case 'Q':
{
return;
}

default:
{
gotoxy(21,19);
cout<<"Illegal Choice or make sure CAPS Lock is on";
getch();
break;
}
}
}

void control::help()
{
clrscr();

shape s;
s.box(2,1,79,30,218);
s.box(25,2,54,4,219);

textcolor(LIGHTBLUE+BLINK) ;
gotoxy(27,2);
cout<<"WELCOME TO PROJECT BANKING";
delay(10);
gotoxy(10,5);
cout<<"IN  THIS  PROJECT                 YOU CAN  KEEP  RECORD FOR DAILY ";
delay(10);
gotoxy(25,6);
cout<<"BANKING  TRANSACTIONS.";

delay(10);
gotoxy(10,8);
cout<<"- THIS  PROGRAM IS CAPABLE OF HOLDING ANY No. OF ACCOUNTS";

delay(10);
gotoxy(10,10);
cout<<"-1.) In the first option the account of a particular person";
delay(10);
gotoxy(10,11);
cout<<" is displayed by giving simply the account no. of that person.";

delay(10);
gotoxy(10,13);
cout<<"-2.) In second option you can see the list of all the accounts.";

delay(10);
gotoxy(10,15);
cout<<"-3.) In Fourth option you can open new account.";
delay(10);
gotoxy(10,16);
cout<<"  (NOTE: Opening amount i.e. , the first deposit should not be ";
delay(10);
gotoxy(10,17);
cout<<" less than Rs.500/-";

delay(10);
gotoxy(10,19);
cout<<"-4.) Through third option you can do banking transactions";
delay(10);
gotoxy(10,20);
cout<<"  (Deposit/Withdraw).";

delay(10);
gotoxy(10,22);
cout<<"-5.) In Fifth option you can Modify or Delete any account.";

delay(10);
gotoxy(10,24);
cout<<"-6.) In sixth option the help menu is displayed ";

gotoxy(10,26);
cout<<"-7.) This is the last option i.e., Quit<<Exit to TURBO C++>>.";

delay(10);
textcolor(RED+BLINK);
textbackground(WHITE+BLINK);
gotoxy(26,28);
cout<<"Press any key to.........Continue";

textcolor(LIGHTGRAY);
textbackground(BLACK);
gotoxy(25,2);

getch();
}

int initial::last_accno()
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
int count=0;
while(file.read((char *)this, sizeof(initial)))
count=accno;
file.close();

return count;
}

int initial::recordno(int t_accno)
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
int count=0;

while(file.read((char *)this, sizeof(initial)))
{
count++;
if(t_accno==accno)
break;
}
file.close();

return count;
}

void initial::display(int t_accno)
{

shape s;
s.box(8,7,73,11,219);
fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);

while(file.read((char *) this, sizeof(initial)))
{
if (t_accno == accno)
{
gotoxy(8,5);
cout <<"ACCOUNT NO. " <<accno;
gotoxy(10,8);
cout <<"Name    : " <<name;
gotoxy(10,9);
cout <<"Address : " <<address;
gotoxy(10,10);
cout <<"Balance : " <<balance;
break;
}

}
file.close();
}

char *initial::return_name(int t_accno)
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
char t_name[30];

while(file.read((char *) this, sizeof(initial)))
{
if(accno==t_accno)
{
strcpy(t_name,name);
break;
}
}

file.close();
return t_name;
}

char *initial::return_address(int t_accno)
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
char t_address[60];

while(file.read((char *) this, sizeof(initial)))
{
if(accno==t_accno)
{
strcpy(t_address,address);
break;
}
}

file.close();
return t_address;
}

float initial::give_balance(int t_accno)
{

fstream file ;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg) ;
float t_balance ;

while(file.read((char *)this, sizeof(initial)))
{
if(accno==t_accno)
{
t_balance=balance;
break;
}
}

file.close();
return t_balance;
}

int initial::found_account(int t_accno)
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
int found=0;

while(file.read((char *)this, sizeof(initial)))
{
if(accno==t_accno)
{
found=1;
break;
}
}

file.close();
return found;
}

void initial::box_for_list()
{

shape s;
s.box(2,1,79,25,218);
s.line_hor(3,78,3,196);
s.line_hor(3,78,5,196);
s.line_hor(3,78,23,196);

textbackground(WHITE);
gotoxy(3,4);
for(int i=1;i<=76;i++)
cout<<" ";

textbackground(BLACK);
textcolor(BLACK);
textbackground(WHITE);
gotoxy(4,4);
cout<<"ACCOUNT NO.       NAME OF PERSON                   BALANCE";
textcolor(LIGHTGRAY);
textbackground(BLACK);

int d1, m1, y1;

struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;
gotoxy(4,2);
cout<<"Date: "<<d1<<"/"<<m1<<"/"<<y1;

}

void initial::display_list()
{
clrscr();

box_for_list();
int row=6, flag;
fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);

while(file.read((char *)this, sizeof(initial)))
{
flag=0;
delay(10);
gotoxy(7,row);
cout<<accno;
gotoxy(25,row);
cout<<name;
gotoxy(57,row);
cout<<balance;
row++;

if(row==23)
{
flag=1;
row=6;
gotoxy(4,24);
cout<<"Press any key to..........Continue";
getch();
clrscr();
box_for_list();
}
}

file.close();
if(!flag)
{
gotoxy(4,24);
cout<<"Press any key to..........Continue";
getch();
}
}

void initial::add_to_file(int t_accno, char t_name[30], char t_address[60], float t_balance)
{

accno=t_accno;
strcpy(name,t_name);
strcpy(address,t_address);
balance=t_balance;

fstream file;
file.open("INITIAL.DAT",ios::out | ios::app|ios::binary);
file.write((char *)this, sizeof(initial));

file.close();
}

void initial::delete_account(int t_accno)
{

fstream file;
file.open("INITIAL.DAT",ios::in|ios::binary);

fstream temp;
temp.open("temp.dat",ios::out|ios::binary);

file.seekg(0,ios::beg);

while(!file.eof())
{
file.read((char *)this, sizeof(initial));

if(file.eof())
break;

if(accno!=t_accno)
temp.write((char *)this, sizeof(initial));
}

file.close();
temp.close();
file.open("INITIAL.DAT",ios::out|ios::binary);
temp.open("temp.dat",ios::in|ios::binary);
temp.seekg(0,ios::beg);

while(!temp.eof())
{
temp.read((char *)this, sizeof(initial));

if(temp.eof())
break;

file.write((char *)this, sizeof(initial));
}

file.close();
temp.close();
}

void initial::update_balance(int t_accno, float t_balance)
{

int recno;
recno=recordno(t_accno);

fstream file;
file.open("INITIAL.DAT",ios::out|ios::ate|ios::binary);
balance = t_balance;
int location;
location=(recno-1) * sizeof(initial);
file.seekp(location);
file.write((char *)this, sizeof(initial));

file.close();
}

void initial::modify_account(int t_accno, char t_name[30], char t_address[60])
{

int recno;
recno=recordno(t_accno);

fstream file;
file.open("INITIAL.DAT",ios::out|ios::ate|ios::binary);
strcpy(name,t_name);
strcpy(address,t_address);
int location;
location=(recno-1) * sizeof(initial);
file.seekp(location);
file.write((char *)this, sizeof(initial));

file.close();
}

void initial::modify()
{
clrscr();

int t, t_accno;
gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";
gotoxy(5,5);
cout<<"Enter the account no. ";
cin>>t_accno;
if(t_accno==0)
return;

clrscr();

if(!found_account(t_accno))
{
gotoxy(5,5);
cout<<"Account not found";
getch();
return;
}

shape s;
s.box(2,2,79,24,218);
s.line_hor(3,78,4,196);
s.line_hor(3,78,22,196);
gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";

textbackground(WHITE);
gotoxy(3,3);
for(int i=1;i<=76;i++)
cout<<" ";

textbackground(BLACK);
textcolor(BLACK+BLINK);
textbackground(WHITE);
gotoxy(30,3);
cout<<"MODIFY ACCOUNT SCREEN";

textcolor(LIGHTGRAY);
textbackground(BLACK);
int d1, m1, y1;
struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;
gotoxy(62,5);
cout<<"Date: "<<d1<<"/"<<m1 <<"/"<<y1;
char ch;
display(t_accno);
account a;

do
{
a.clear(5,13);
gotoxy(5,13);

cout<<"Modify this account (Y/N): ";
cin>>ch;
if(ch=='0')
return;
ch=toupper(ch);
}while(ch!='N'&&ch!='Y');

if(ch=='N')
return;

int modified=0, valid;
char t_name[30], t_address[60];

gotoxy(5,15);
cout<<"Name    : ";

do
{
a.clear(15,15);
a.clear(5,23);
gotoxy(5,23);
cout<<"ENTER NAME or PRESS <ENTER> FOR NO CHANGE";
valid=1;
gotoxy(15,15);
gets(t_name);
strupr(t_name);
if(t_name[0]=='0')
return;

if(strlen(t_name)>25)
{
valid=0;
gotoxy(5,23);
cout<<"NAME SHOULD NOT BE GREATER THAN 25";
getch();
}
}while(!valid);

if(strlen(t_name)> 0)
modified=1;

gotoxy(5,16);
cout<<"Address : ";

do
{
a.clear(15,16);
a.clear(5,23);
gotoxy(5,23);
cout<<"ENTER ADDRESS or PRESS <ENTER> FOR NO CHANGE";
valid=1;
gotoxy(15,16);
gets(t_address);
strupr(t_address);
if(t_address[0]=='0')
return;

if(strlen(t_address)>55)
{
valid=0;
gotoxy(5,23);
cout<<"SHOULD NOT BE BLANK OR GREATER THAN 55";
getch();
}
}while(!valid);

if(strlen(t_address)>0)
modified=1;
if(!modified)
return;
a.clear(5,23);

do
{
a.clear(5,18);
gotoxy(5,18);
cout<<"Do you want to save changes (Y/N): ";
ch=getchar();
if(ch=='0')
return;
ch=toupper(ch);
}while(ch!='N'&&ch!='Y');

if(ch=='N')
return;

modify_account(t_accno,t_name,t_address);
gotoxy(5,21);
cout<<"Record Modified";
gotoxy(5,23);
cout<<"Press any key to..........Continue";

getch();
}

void account::clear(int col, int row)
{

for(int i=col;i<=78;i++)
{
gotoxy(i,row);
cout<<" ";
}

}

void account::add_to_file(int t_accno, int d1, int m1, int y1, char t_tran, char t_type[10], float t_interest, float t_amount, float t_balance)
{

fstream file;
file.open("BANKING.DAT",ios::app|ios::binary);
accno=t_accno;

dd=d1;
mm=m1;
yy=y1;

tran=t_tran;
strcpy(type,t_type);
interest=t_interest;
amount=t_amount;
balance=t_balance;
file.write((char *)this, sizeof(account));

file.close();
}

void account::delete_account(int t_accno)
{

fstream file;
file.open("BANKING.DAT",ios::in|ios::binary);

fstream temp;
temp.open("temp.dat",ios::out|ios::binary);

file.seekg(0,ios::beg);

while(!file.eof())
{
file.read((char *)this, sizeof(account));

if(file.eof())
break;
if(accno!=t_accno)
temp.write((char *)this, sizeof(account));
}
file.close();
temp.close();

file.open("BANKING.DAT",ios::out|ios::binary);
temp.open("temp.dat",ios::in|ios::binary);
temp.seekg(0,ios::beg);

while(!temp.eof())
{
temp.read((char *)this, sizeof(account));
if(temp.eof())
break;
file.write((char *)this, sizeof(account));
}

file.close();
temp.close();
}

void account::new_account()
{

char ch;
int i, valid;

clrscr();
initial ini;
shape s;
s.box(2,2,79,24,218);
s.line_hor(3,78,4,196);
s.line_hor(3,78,22,196);

gotoxy(58,1);
cout<<"<0>=Exit to Main Menu";
textbackground(WHITE);
gotoxy(3,3);
for(i=1;i<=76;i++)
cout<<" ";
textbackground(BLACK);
textcolor(BLACK+BLINK);
textbackground(WHITE);
gotoxy(32,3);
cout<<"OPEN NEW ACCOUNT";
textcolor(LIGHTGRAY);
textbackground(BLACK);

int d1, m1, y1;
struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;

int t_accno;
t_accno=ini.last_accno() ;
t_accno++;
if(t_accno==1)
{
ini.add_to_file(t_accno,"abc","xyz",1.1);
ini.delete_account(t_accno);
add_to_file(t_accno,1,1,1997,'D',"INITIAL",1.1,1.1,1.1);
delete_account(t_accno);
}

char t_name[30], t_address[60];
float t_balance=0.0;

gotoxy(5,6);
cout<<"Date : "<<d1<<"/"<<m1<<"/"<<y1;
gotoxy(5,8);
cout<<"Account no. # "<<t_accno;
gotoxy(5,10);
cout<<"Name    : ";
gotoxy(5,11);
cout<<"Address : ";
gotoxy(5,12);
cout<<"Name of Verifying person : ";
gotoxy(5,14);
cout<<"Initial Deposit : ";

do
{
clear(15,10);
clear(5,23);

gotoxy(5,23);
cout<<"ENTER NAME OF THE PERSON";
valid = 1;
gotoxy(15,10);
gets(t_name);
strupr(t_name);
if(t_name[0]=='0')
return;
if(strlen(t_name)==0||strlen(t_name)>25)
{
valid=0;
gotoxy(5,23);
cout<<"NAME SHOULD NOT BE BLANK OR GREATER THAN 25";
getch();
}
}while(!valid);

do
{
clear(15,11);
clear(5,23);
gotoxy(5,23);

cout<<"ENTER ADDRESS OF THE PERSON";
valid=1;
gotoxy(15,11);
gets(t_address);
strupr(t_address);

if(t_address[0]=='0')
return;

if(strlen(t_address)==0||strlen(t_address)>55)
{
valid=0;
gotoxy(5,23);
cout<<"SHOULD NOT BLANK OR GREATER THAN 55";
getch();
}
}while(!valid);

do
{
char vari[30];
clear(31,12);
clear(5,23);
gotoxy(5,23);
cout<<"ENTER NAME OF THE VERIFING PERSON";
valid=1;
gotoxy(31,12);
gets(vari);
strupr(vari);

if(vari[0]=='0')
return;

if(strlen(vari)==0||strlen(vari)>25)
{
valid=0;
gotoxy(5,23);
cout<<"SHOULD NOT BLANK OR GREATER THAN 25";
getch();
}
}while(!valid);

do
{
clear(23,14);
clear(5,23);

gotoxy(5,23);
cout<<"ENTER INITIAL AMOUNT TO BE DEPOSIT";
valid=1;
gotoxy(23,14);
cin>>t_balance;

if(t_balance==0.0)
return;

if(t_balance<500)
{
valid=0;
gotoxy(5,23);
cout<<"SHOULD NOT LESS THAN 500          ";
getch();
}
}while(!valid);
clear(5,23);

do
{
clear(5,17);
valid=1;
gotoxy(5,17);
cout<<"Do you want to save the record (Y/N) : ";
ch=getchar();

if(ch=='0')
return;
ch=toupper(ch);
}while(ch!='N'&&ch!='Y');

if (ch=='N')
return;

float t_amount, t_interest;
t_amount=t_balance;
t_interest=0.0;

char t_tran, t_type[10];
t_tran='D';
strcpy(t_type,"INITIAL");

ini.add_to_file(t_accno,t_name,t_address,t_balance);
add_to_file(t_accno,d1,m1,y1,t_tran,t_type,t_interest,t_amount,t_balance);

}

void account::box_for_display(int t_accno)
{

shape s;
s.box(2,1,79,25,218);
s.line_hor(3,78,4,196);
s.line_hor(3,78,6,196);
s.line_hor(3,78,23,196);

textbackground(WHITE);
gotoxy(3,5);
for(int i=1;i<=76;i++)
cout<<" ";

textbackground(BLACK);
textcolor(BLACK);
textbackground(WHITE);
gotoxy(4,5);
cout<<"DATE       PARTICULAR    DEPOSIT    WITHDRAW    INTEREST    BALANCE";

textcolor(LIGHTGRAY);
textbackground(BLACK);

int d1, m1, y1;
struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;
gotoxy(63,2);
cout<<"Date: "<<d1<<"/"<<m1<<"/"<<y1;

gotoxy(4,2);
cout<<"Account no. " <<t_accno;

initial ini;
char t_name[30];
strcpy(t_name,ini.return_name(t_accno));
char t_address[60];
strcpy(t_address,ini.return_address(t_accno));
gotoxy(25,2);
cout<<t_name;
gotoxy(25,3);
cout<<t_address;
}

void account::display_account()
{
clrscr();

char t_acc[10];
int t, t_accno;
gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";
gotoxy(5,5);
cout<<"Enter the account no. ";
cin>>t_accno;

if(t_accno==0)
return;

clrscr();
initial ini;
if(!ini.found_account(t_accno))
{
gotoxy(5,5);
cout<<"Account not found";
getch();
return;
}

box_for_display(t_accno);
int row=7, flag=0;

fstream file;
file.open("BANKING.DAT",ios::in|ios::binary);

while(file.read((char *)this, sizeof(account)))
{
if(accno==t_accno)
{
flag=0;
delay(10);
gotoxy(4,row);
cout<<dd <<"/"<<mm <<"/" <<yy;
gotoxy(16,row);
cout<<type;

if(tran=='D')
gotoxy(30,row);

else
gotoxy(42,row);

cout<<long(amount*100)/100.0;
gotoxy(56,row);
cout<<long(interest*100)/100.0;
gotoxy(66,row);
cout<<long(balance*100)/100.0;
row++;
if(row==23)
{
flag=1;
row=7;
gotoxy(4,24);
cout<<"Press any key to..........Continue";
getch();

clrscr();
box_for_display(t_accno);
}
}
}

file.close();
if(!flag)
{
gotoxy(4,24);
cout<<"Press any key to..........Continue";
getch();
}
}

int account::no_of_days(int d1, int m1, int y1, int d2, int m2, int y2)
{

static int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
int days=0;
while(d1!=d2||m1!=m2||y1!=y2)
{
days++;
d1++;

if(d1>month[m1-1])
{
d1=1;
m1++;
}

if(m1>12)
{
m1=1;
y1++;
}
}

return days;
}

float account::calculate_interest(int t_accno, float t_balance)
{
fstream file;
file.open("BANKING.DAT",ios::in|ios::binary);
file.seekg(0,ios::beg);
int d1, m1, y1, days;
while(file.read((char *)this, sizeof(account)))
{
if(accno==t_accno)
{
d1=dd;
m1=mm;
y1=yy;
break;
}
}

int d2, m2, y2;
struct date d;
getdate(&d);
d2=d.da_day;
m2=d.da_mon;
y2=d.da_year;

float t_interest=0.0;

if((y2<y1)||(y2==y1&&m2<m1)||(y2==y1&&m2==m1&&d2<d1))
return t_interest;

days=no_of_days(d1,m1,y1,d2,m2,y2);
int months=0;

if(days>=30)
{
months=days/30;
t_interest=((t_balance*2)/100) * months;
}

file.close();
return t_interest;
}

void account::transaction()
{
clrscr();

char t_acc[10];
int t, t_accno, valid;

gotoxy(1,1);
cout <<"PRESS (0) TO EXIT TO MAIN MENU";
gotoxy(5,5);

cout<<"Enter the account no. ";
cin>>t_accno;
if(t_accno==0)
return;

clrscr();
initial ini;
if(!ini.found_account(t_accno))
{
gotoxy(5,5);
cout<<"Account not found";
getch();
return;
}

shape s;
s.box(2,2,79,24,218);
s.line_hor(3,78,4,196);
s.line_hor(3,78,22,196);
gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";

textbackground(WHITE);
gotoxy(3,3);
for(int i=1;i<=76;i++)
cout<<" ";

textbackground(BLACK);
textcolor(BLACK+BLINK);
textbackground(WHITE);
gotoxy(29,3);
cout<<"TRANSACTION IN ACCOUNT";

textcolor(LIGHTGRAY);
textbackground(BLACK);
int d1, m1, y1 ;
struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;
gotoxy(5,6);
cout<<"Date : "<<d1<<"/"<<m1<<"/"<<y1;
gotoxy(5,8);
cout<<"Account no. # "<<t_accno;

char t_name[30];
char t_address[60];
float t_balance;

strcpy(t_name,ini.return_name(t_accno));
strcpy(t_address,ini.return_address(t_accno));
t_balance=ini.give_balance(t_accno);

s.box(25,10,75,13,218);
gotoxy(27,11);
cout<<"Name   : "<<t_name;
gotoxy(27,12);
cout<<"Address: "<<t_address;
gotoxy(5,15);
cout<<"Last Balance : Rs."<<t_balance;

char  t_tran, t_type[10], tm[10];
float t_amount, t_amt;

do
{
clear(5,18);
valid=1;
gotoxy(5,18);
cout<<"Deposit or Withdraw (D/W) : ";
cin>>t_tran;

if(t_tran=='0')
return;

t_tran=toupper(t_tran);
}while(t_tran!='D'&&t_tran!='W');

do
{
clear(5,19);
clear(5,23);
gotoxy(5,23);
cout<<"ENTER TRANSACTION BY CASH OR CHEQUE";
valid=1;
gotoxy(5,19);
cout<<"(Cash/Cheque) : ";
cin>>t_type;
strupr(t_type);

if(t_type[0]=='0')
return;

if(strcmp(t_type,"CASH")&&strcmp(t_type,"CHEQUE"))
{
valid=0;
gotoxy(5,23);
cout<<"ENTER CORRECTLY                       ";
getch();
}
}while(!valid);

do
{
clear(5,21);
clear(5,23);
gotoxy(5,23);
cout<<"ENTER AMOUNT FOR TRANSACTION";
valid=1;
gotoxy(5,21);
cout<<"Amount : Rs.";
cin>>t_amount;
if(t_amount==0.0)
return;

if((t_tran=='W'&&t_amount>t_balance)||(t_amount<1))
{
valid=0;
gotoxy(5,23);
cout<<"INVALID DATA ENTERED               ";
getch();
}
}while(!valid);

char ch;
clear(5,23);

do
{
clear(40,20);
valid=1;
gotoxy(40,20);
cout<<"Save transaction (Y/N): ";
ch=getchar();
if(ch=='0')
return;
ch=toupper(ch);
}while(ch!='N'&&ch!='Y');

if(ch=='N')
return;
float t_interest;
t_interest=calculate_interest(t_accno,t_balance);

if(t_tran=='D')
t_balance=t_balance+t_amount+t_interest;

else
t_balance=(t_balance-t_amount)+t_interest;

ini.update_balance(t_accno,t_balance);
add_to_file(t_accno,d1,m1,y1,t_tran,t_type,t_interest,t_amount,t_balance);
}

void account::close_account()
{
clrscr();

char t_acc[10];
int t, t_accno;

gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";
gotoxy(5,5);
cout<<"Enter the account no. - ";
cin>>t_accno;

if(t_accno==0)
return;

clrscr();
initial ini;

if(!ini.found_account(t_accno))
{
gotoxy(5,5);
cout<<"Account not found";
getch();
return;
}

shape s;
s.box(2,2,79,24,218);
s.line_hor(3,78,4,196);
s.line_hor(3,78,22,196);

gotoxy(1,1);
cout<<"PRESS (0) TO EXIT TO MAIN MENU";

textbackground(WHITE);
gotoxy(3,3);
for(int i=1;i<=76;i++)
cout<<" ";

textbackground(BLACK);
textcolor(BLACK+BLINK);
textbackground(WHITE);
gotoxy(30,3);
cout<<"CLOSE ACCOUNT SCREEN";

textcolor(LIGHTGRAY);
textbackground(BLACK);
int d1, m1, y1;
struct date d;
getdate(&d);
d1=d.da_day;
m1=d.da_mon;
y1=d.da_year;
gotoxy(62,5);
cout<<"Date: "<<d1<<"/"<<m1<<"/"<<y1;

char ch;
ini.display(t_accno);

do
{
clear(5,15);
gotoxy(5,15);
cout<<"Close this account (Y/N): ";
ch=getchar();

if(ch=='0')
return;
ch=toupper(ch);
}while(ch!='N'&&ch!='Y');

if(ch=='N')
return;

ini.delete_account(t_accno);
delete_account(t_accno);
gotoxy(5,20);
cout<<"Record Deleted";
gotoxy(5,23);
cout<<"Press any key to..........Continue";

getch();
}

void main()                                                                                     //Main segment
{

int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "..\bgi");

scrn();
control c;
c.main_menu();

}