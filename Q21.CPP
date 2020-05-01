/*Q21. To display following menu using class employee and binary file.
	1.create
	2.add
	3.modify
	4.display
	5.search
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>

class emp
{
	int empno;
	char name[20];
	char add[20],pin[8];
	float hra,da,pf,basic;
	public:
	int retempno();
	void readdata();
	void showdata();
};

int emp::retempno()
{
	return(empno);
}

void emp::readdata()
{
	cout<<"\n Enter the employee no.:";
	cin>>empno;
	cout<<"\n Enter the employee name:";
	gets(name);
	cout<<"\n Enter the Address:";
	gets(add);
	cout<<"\n Enter the pin code:";
	gets(pin);
	cout<<"\n Basic salary:";
	cin>>basic;
	cout<<"\n HRA:";
	cin>>hra;
	cout<<"\n DA:";
	cin>>da;
	cout<<"\n PF:";
	cin>>pf;
}

void emp::showdata()
{
	cout<<"\n The employee no. is:";
	cout<<empno;
	cout<<"\n the employee name is:";
	puts(name);
	cout<<"\n the Address is:";
	puts(add);
	cout<<"\n the pin code is:";
	puts(pin);
	cout<<"\n Basic salary is:";
	cout<<basic;
	cout<<"\n HRA is:";
	cout<<hra;
	cout<<"\n DA is:";
	cout<<da;
	cout<<"\n PF is:";
	cout<<pf;
}

void create(char fname[])
{
	emp s;
	int n;
	fstream fin(fname,ios::out|ios::binary);
	cout<<"\n Enter the number of entries to be done:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s.readdata();
		fin.write((char *)&s,sizeof(s));
	}
}

void add(char fname[])
{
	emp s;
	fstream fin(fname,ios::app|ios::binary);
	s.readdata();
	fin.write((char *)&s,sizeof(s));
	cout<<"\n Data has been added on the file";
}

void mod(char fname[])
{
	fstream fin(fname,ios::in|ios::out|ios::binary);
	emp s;
	int e;
	cout<<"\n Enter the employee number to be modified:";
	cin>>e;
	while(fin.read((char *)&s,sizeof(s)))
	{
		if(e==s.retempno())
		{
			s.readdata();
			fin.seekp(-1*sizeof(s),ios::cur);
			fin.write((char *)&s,sizeof(s));
		}
	}
	fin.close();
}

void display(char fname[])
{
	emp s;
	ifstream fin(fname,ios::binary);
	while(fin.read((char *)&s,sizeof(s)))
	{
		s.showdata();
	}
	fin.close();
}

void search(char fname[])
{
	emp s;
	int e,flag=0;
	ifstream fin(fname,ios::binary);
	cout<<"\n Enter the employee no. to be searched:";
	cin>>e;
	while(fin.read((char *)&s,sizeof(s)))
	{
		if(s.retempno()==e)
		{
			flag=1;
		}
	}
	if(flag==1)
	cout<<"\n Element is present in the binary file.";
	else
	cout<<"\n Element not found.";
}

void main()
{
	clrscr();
	int ch;
	char c,fname[30];
	cout<<"\n Enter the file name:";
	gets(fname);
	do
	{
		cout<<"\n ************ MAIN MENU ************";
		cout<<"\n 1.Create";
		cout<<"\n 2.Add";
		cout<<"\n 3.Modify";
		cout<<"\n 4.Display";
		cout<<"\n 5.Search";
		cout<<"\n Enter the choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				create(fname);
				break;
			case 2:
				add(fname);
				break;
			case 3:
				mod(fname);
				break;
			case 4:
				display(fname);
				break;
			case 5:
				search(fname);
				break;
			default:
				exit(0);
		}
		cout<<"\n Do You Wish To Continue(Y/N):";
		cin>>c;
	}
	while(c=='y'||c=='Y');
	getch();
}

/*
OUTPUT

 Enter the file name:employee.dat

 ************ MAIN MENU ************
 1.Create
 2.Add
 3.Modify
 4.Display
 5.Search
 Enter the choice:1

 Enter the number of entries to be done:2

 Enter the employee no.:1

 Enter the employee name:isha

 Enter the Address:pityam

 Enter the pin code:110009

 Basic salary:2345

 HRA:234

 Enter the employee no.:2

 Enter the employee name:ima

 Enter the Address:hbdfkd

 Enter the pin code:110009

 Basic salary:1234

 HRA:123

 DA:123

 PF:123

 Do You Wish To Continue(Y/N):y

 ************ MAIN MENU ************
 1.Create
 2.Add
 3.Modify
 4.Display
 5.Search
 Enter the choice:3

 Enter the employee number to be modified:2

 Enter the employee no.:2

 Enter the employee name:ima

 Enter the Address:ashok vihar

 Enter the pin code:110009

 Basic salary:2567

 HRA:354

 DA:354

 PF:354

 Do You Wish To Continue(Y/N):y

 ************ MAIN MENU ************
 1.Create
 2.Add
 3.Modify
 4.Display
 5.Search
 Enter the choice:6
*/
