/*
			      STRUCTURES
			     ------------

WAP TO ACCEPT THE DATA OF A STUDENT HAVING FOLLOWING STRUCTURE :-
-------------------------------------------------------------------------
| ROLL   | NAME	        | ADDRESS		| FATHER'S | MARKS IN   |
| NO     |              |                       | NAME     | 5 SUBJECTS |
|--------|---------------------------------------------------------------
|        | LAST | FIRST | ADD1 | ADD2 | PINCODE |          |            |
|	 | NAME | NAME  |      |      |         |          |            |
-------------------------------------------------------------------------

AND DISPLAY THE FOLLOWING MENU :-
1. MERIT LIST GENERATION :-SHOULD HAVE ROLL NO,NAME,MARKS IN 5 SUBJECTS,
TOTAL,AVERAGE
2. GRADE CARD GENERATION :-SHOULD HAVE ROLL NO,NAME,TOTAL AND GRADE

CRITERIA FOR GRADE ARE :-
AVERAGE                  GRADE
>=90                       A
<90 AND >=75               B
<75 AND >=60               C
<60 AND >=40               D
<40                        F

	  
					              */
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>

int i=0;

struct student
{
	double roll;

	char first[15];
	char last[15];

	char h_no[10];
	char area[10];
	char city[10];
	char pin[8];

	char father[20];
	int m[5];
	int total;
	int average;
	char grade;
}s[20];

void getdata();
void merit();
void gradecard();

void main()
{
	clrscr();
	int x;

	cout<<"\n----------------------------------------------------"
	    <<"\n                      MENU"
	    <<"\n----------------------------------------------------";

	cout<<"\n\n 1. ENTER THE RECORDS FOR A STUDENT."
	    <<"\n\n 2. DISPLAY THE MERIT LIST"
	    <<"\n\n 3. GRADE CARD GENERATION."
	    <<"\n\n 4. EXIT.";

	cout<<"\n\n\t ENTER YOUR CHOICE (1-4): ";
	cin>>x;

	switch(x)
	{
		case 1: getdata();
			main();
			break;

		case 2: merit();
			main();
			break;

		case 3: gradecard();
			main();
			break;

		case 4: exit(0);

		default: cout<<"\n\tENTER A VALID OPTION BETWEEN 1-4.";
			 getch();
			 main();
	}

	getch();
}

void getdata()
{
	clrscr();

	s[i].total=0;
	cout<<"\n\t\t --------TO ENTER THE RECORDS OF A STUDENT--------";

	cout<<"\n\n\n\tENTER THE ROLL NO: ";
	cin>>s[i].roll;

	cout<<"\n\t ENTER THE FIRST NAME: ";
	gets(s[i].first);

	cout<<"\n\t ENTER THE LAST NAME: ";
	gets(s[i].last);

	cout<<"\n\t ENTER THE HOUSE NUMBER: ";
	gets(s[i].h_no);

	cout<<"\n\t ENTER THE AREA: ";
	gets(s[i].area);

	cout<<"\n\t ENTER THE CITY: ";
	gets(s[i].city);

	cout<<"\n\t ENTER THE AREA PIN CODE: ";
	gets(s[i].pin);

	cout<<"\n\t ENTER THE FATHER'S NAME: ";
	gets(s[i].father);

	cout<<"\n\t ENTER THE MARKS IN 5 SUBJECTS: ";
	for(int j=0;j<5;j++)
	{
		cin>>s[i].m[j];
		s[i].total+=s[i].m[j];
	}



	s[i].average=s[i].total/5;

	if(s[i].average>=90)
	{
		s[i].grade='A';
	}
	else if(s[i].average>=75 && s[i].average<90)
	{
		s[i].grade='B';
	}
	else if(s[i].average>=60 && s[i].average<75)
	{
		s[i].grade='C';
	}
	else if(s[i].average>=40 && s[i].average<60)
	{
		s[i].grade='D';
	}
	else
	{
		s[i].grade='F';
	}
	i++;
}

void merit()
{
	clrscr();
	int flag=0;
	for(int j=0;j<i;j++)
	{
		if(s[j].grade=='A' || s[j].grade=='B')
		{
			flag++;
			clrscr();
			cout<<"\n\t\t MERITORIOUS STUDENT "<<flag;
			cout<<"\n\n\t ROLL NUMBER: "<<s[j].roll;
			cout<<"\n\n\t NAME: "<<s[j].first<<" "
			    <<s[j].last;

			cout<<"\n\n\t MARKS IN 5 SUBJECTS: ";
			for(int k=0;k<5;k++)
			{
				cout<<"\n\t\t"<<s[j].m[k];
			}

			cout<<"\n\n\tTOTAL MARKS: \t"<<s[j].total;
			cout<<"\n\n\tAVERAGE MARKS: "<<s[j].average;
			cout<<"\n\n\tGRADE: "<<s[j].grade;
			getch();
		}
	}
	if(flag==0)
	{
		cout<<"\n\n\n\n\n\t THERE WERE NO MERITORIOUS STUDENTS FOUND"
		    <<" IN THIS BATCH.";
		getch();
	}
}

void gradecard()
{
	clrscr();
	for(int j=0;j<i;j++)
	{
		clrscr();
		cout<<"\n\t\t\t\t*** GRADE CARD ***";

		cout<<"\n\n\t ROLL NUMBER: "<<s[j].roll;

		cout<<"\n\n\t NAME: "<<s[j].first<<" "<<s[j].last;
		cout<<"\n\n\t FATHER'S NAME: "<<s[j].father;

		cout<<"\n\n\t MARKS IN 5 SUBJECTS: ";
		for(int k=0;k<5;k++)
		{
			cout<<"\n\t\t\t\t   "<<s[j].m[k];
		}

		cout<<"\n\n\t ADDRESS: ";
		cout<<"\n\t\t HOUSE NUMBER: "<<s[j].h_no;
		cout<<"\n\t\t AREA: "<<s[j].area;
		cout<<"\n\t\t CITY: "<<s[j].city;
		cout<<"\n\t\t PINCODE: "<<s[j].pin;

		cout<<"\n\n\tTOTAL MARKS: \t"<<s[j].total;
		cout<<"\n\n\tAVERAGE MARKS: "<<s[j].average;
		cout<<"\n\n\tGRADE: "<<s[j].grade;
		getch();
	}
}




