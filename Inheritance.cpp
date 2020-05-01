/*WRITE MAIN FUNCTIONS HAVING 5 EMPLOYEES AND DISPLAY A MENU:
1.ENTER DATA
2.DISPLAY CONTENTS
3.SEARCH ON THE BASIS OF AGE
4.SEARCH ON THE BASIS OF DEPARTMENT
5.SEARCH ON THE BASIS OF SALARY
*/

#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<fstream.h>
char ch2;
class person
{
char name[20];
protected:
int age;
public:
void readdata();
void dispdata();
};
void person::readdata()
{
cout<<"\nENTER YOUR NAME:\t";
gets(name);
cout<<"\nENTER YOUR AGE:\t";
cin>>age;
}
void person::dispdata()
{
cout<<"\nYOUR NAME:\t"<<name;
cout<<"\nYOUR AGE:\t"<<age;
}
class employee:public person
{
char dept[20];
protected:
float salary;
public:
void read();
void write();
float retsal()
{
return salary;
}
int retage()
{
return age;
}
int retdep(char *d)
{
if(strcmp(d,dept)==0)
return 1;
else
return 0;
}
};
void employee::read()
{
cout<<"\nENTER YOUR DEPARTMENT:\t";
gets(dept);
cout<<"\nENTER YOUR SALARY:\t";
cin>>salary;

}
void employee::write()
{
cout<<"\nYOUR DEPARTMENT:\t"<<dept;
cout<<"\nYOUR SALARY:\t"<<salary;
}
employee e;

void cdata()
{
char rep;
fstream f("Empl.dat",ios::out|ios::ate|ios::binary);
do
{
e.employee::readdata();
e.employee::read();
f.write((char *)&e,sizeof(e));
cout<<"\nWant to put more data(y/n):";
cin>>rep;
}while(rep=='y');
f.close();
}
void ddisplay()
{
fstream f("Empl.dat",ios::in|ios::binary);
while(f.read((char *)&e,sizeof(e)))
{
e.person::dispdata();
e.employee::write();
}
f.close();
}
void main()
{
int ch;
clrscr();
do
{
cout<<"\n*****************MENU********************";
cout<<"\n 1.ENTER DATA";
cout<<"\n 2.DISPLAY CONTENTS";
cout<<"\n 3.SEARCH ON THE BASIS OF AGE";
cout<<"\n 4.SEARCH ON THE BASIS OF DEPARTMENT";
cout<<"\n 5.SEARCH ON THE BASIS OF SALARY";
cout<<"\n 6.EXIT THIS PROGRAM";
cout<<"\n 7.CLEAR THE SCREEN ";
cout<<"\n Enter your choice:";
cin>>ch;
if(ch==1)
{
cdata();
}
else
if(ch==2)
{
ddisplay();
}
if(ch==3)
{
int age2;
cout<<"\nENTER YOUR AGE:\t";
cin>>age2;
if(age2==e.employee::retage())
{
ddisplay();
}
}
else
if(ch==4)
{
char dept2[20];
cout<<"\nENTER YOUR DEPARTMENT:";
gets(dept2);
if(e.employee::retdep(dept2)==1)
{
ddisplay();
}
}
else
if(ch==5)
{
float salary2;
cout<<"\n ENTER YOUR SALARY:";
cin>>salary2;
if(e.employee::retsal()==salary2)
{
ddisplay();
}
}
else
if(ch==6)
{
exit(0);
}
else
if(ch==7)
{
clrscr();
}
}while(ch!=6);
getch();
}

/*OUTPUT
 2.DISPLAY CONTENTS
 3.SEARCH ON THE BASIS OF AGE
 4.SEARCH ON THE BASIS OF DEPARTMENT
 5.SEARCH ON THE BASIS OF SALARY
 6.EXIT THIS PROGRAM
 7.CLEAR THE SCREEN 
 Enter your choice:1

ENTER YOUR NAME:        UJJWAL

ENTER YOUR AGE: 17

ENTER YOUR DEPARTMENT:  ABC

ENTER YOUR SALARY:      9999999

Want to put more data(y/n):N

*****************MENU********************
 1.ENTER DATA
 2.DISPLAY CONTENTS
 3.SEARCH ON THE BASIS OF AGE
 4.SEARCH ON THE BASIS OF DEPARTMENT
 5.SEARCH ON THE BASIS OF SALARY
 6.EXIT THIS PROGRAM
 7.CLEAR THE SCREEN
 Enter your choice:6
