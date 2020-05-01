/*WRITE A PROGRAM TO ACCEPT THE TEXT FILE NAME AND DISPLAY THE FOLLOWING MENU:
1. FIND AND REPLACE A CHARACTER
2. FIND AND REPLACE VOWELS BY NUMBERS
3. REPLACE LOWER CASES TO UPPER CASES*/


#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<process.h>
#include<stdio.h>
void main()
{
char fname[80];

clrscr();
cout<<"\n\aENTER THE SOURCE FILE NAME";
gets(fname);
fstream fin(fname,ios::in|ios::out);
char ch1,ch2,ch;
int choice;
if(!fin)
cout<<"\nFILE DOES'NT EXIST";
else
{
cout<<"\nENTER YOUR CHOICE FROM THE FOLLOWING MENU :";
cout<<"\n1. FIND AND REPLACE A CHARACTER";
cout<<"\n2. FIND AND REPLACE VOWELS BY NUMBERS";
cout<<"\n3. REPLACE LOWER CASES TO UPPER CASES";
cout<<"\n4. EXIT THIS PROGRAM";
cin>>choice;
if(choice==1)
{
cout<<"\nENTER THE CHARACTER TO BE FOUND";
cin>>ch1;
cout<<"\nENTER THE CHARARCTER TO REPLACE";
cin>>ch2;
fin.seekp(0);
while(fin.get(ch))
{
if(ch==ch1)
{
fin.seekp(-1,ios::cur);
fin<<ch2;
}
cout<<"CONTENTS"<<ch;

}
getch();
}
else
if(choice==2)
{
while(fin.get(ch))
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
fin<<619;
}
}
else
if(choice==3)
{
while(fin.get(ch))
{
if(isupper(ch)==0)
toupper(ch);
else
if(isupper(ch)!=0)
tolower(ch);
}
}
else
if(choice==4)
{
exit(0);
}
getch();
}
}







