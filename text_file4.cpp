/*WRITE A PROGRAM TO ACCEPT A SOURCE FILE AND TARGET FILE AND DISPLAY THE FOLLOWING MENU:
1. COPY THE CONTENTS OF THE SOURCE FILE TO THE TARGET FILE
2. CHANGE CASE OF SOURCE TO TARGET
3. REPLACE MANY SPACES IN THE SOURCE WITH ONE
4. CHANGE UPPER CASE A's TO a's*/

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
char ch1,ch2,fname1[80],fname2[80];
void menu()
{
	int choice;
	cout<<"\n\aENTER YOUR CHOICE FROM THE FOLLOWING MENU";
	cout<<"\n\t1. COPY THE CONTENTS OF THE SOURCE FILE TO THE TARGET FILE";
	cout<<"\n\t2. CHANGE CASE OF SOURCE TO TARGET";
	cout<<"\n\a3. REPLACE MANY SPACES IN THE SOURCE WITH ONE";
	cout<<"\n\a4. CHANGE UPPER CASE A's TO a's";
	cin>>choice;
	if(choice==1)
	{
	while(fin.get(ch1))
	{
	fin2<<ch1;
	}
	}
	else
	if(choice==2)
	{
	while(fin.getch(ch1))
	{
	if(iupper(ch1))
	ch1=tolower(ch1);
	else if (islower(ch1))
	ch1=toupper(ch1);
	fout<<ch1;
	}
	}
	else if (choice==3)
	{
	while(fin.getch(ch1))
	{
	if(ch1!=' ')
	{
	fout<<ch1;
	k=0;
	}
	else if(k==0)
	{
	fout<<ch1;
	k=k+1;
	}
	}
	}
	if(choice==4)
	{
	while(fin.getch(ch1))
	{
	if(ch1=='A')
	ch1=='a';
	fout<<ch1;
	}
	else
	if(choice==5)
	{
	exit(0);
	}
	getch();
}

void main()
{
	char choice;
	cout<<"\n\aENTER THE SOURCE FILE NAME";
	gets(fname1);
	cout<<"\n\aENTER THE TARGET FILE NAME";
	gets(fname2);
	ifstream fin(fname1);
	ofstream fout(fname2);
	if((!fin)||(!fout))
	{
	cout<<"\n\aONE OR BOTH FILES DO NOT EXIST";
	getch();
	exit(0);
	}
	do
	{
	menu();
	cout<<"\n Do you want to continue";
	cin>>choice;
	}while(choice=='y' || choice=='Y');
}












