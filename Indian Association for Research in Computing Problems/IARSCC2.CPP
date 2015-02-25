#include<all.h>
#include<conio.h>
void main()
{
clrscr();
char a[100][100];
int b[8]={0,0,0,0,0,0,0,0},k=0,i=0,n;
cin>>n;

for(i=0;i<n;i++)
gets(a[i]);

for(i=0;i<n;i++)
for(int j=0;a[i][j]!='\0';j++)
switch(a[i][j])
{
case 'a':b[0]++;break;
case 'b':b[0]++;break;
case 'c':b[0]++;break;
case 'd':b[1]++;break;
case 'e':b[1]++;break;
case 'f':b[1]++;break;
case 'g':b[2]++;break;
case 'h':b[2]++;break;
case 'i':b[2]++;break;
case 'j':b[3]++;break;
case 'k':b[3]++;break;
case 'l':b[3]++;break;
case 'm':b[4]++;break;
case 'n':b[4]++;break;
case 'o':b[4]++;break;
case 'p':b[5]++;break;
case 'q':b[5]++;break;
case 'r':b[5]++;break;
case 's':b[5]++;break;
case 't':b[6]++;break;
case 'u':b[6]++;break;
case 'v':b[6]++;break;
case 'w':b[7]++;break;
case 'x':b[7]++;break;
case 'y':b[7]++;break;
case 'z':b[7]++;break;
}
int big=b[0],p=0;
for(i=0;i<8;i++)
if(b[i]>big)
{big=b[i];p=i;}
cout<<p+2;
getch();
}