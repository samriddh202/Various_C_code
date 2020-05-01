/* Write a program to create, add, display and search in a binary data file using structures*/

#include<fstream.h> //** BINARY FILE HANDLING **
#include<stdio.h>
#include<conio.h>
struct stud
{ int rno;
char name[10];
int marks;
};
void create() // FUNCTION TO CREATE NEW FILE
{
stud rec;
fstream fl;
fl.open("test.dat", ios::out|ios::binary);
for (int i = 1;i<=4;i++)
{
cout <<"r.no. : ";
cin>>rec.rno;
cout <<"name : " ;
gets(rec.name);
cout <<"marks : " ;
cin>>rec.marks;
fl.write((char * )&rec,sizeof(rec));
}
fl.close();
}
void addatend() // FUNCTION TOADD NEW RECORDS
{ stud rec; // AT END OF THE FILE
fstream fl;
char Q;
fl.open("test.dat", ios::app | ios::binary);
do
{
cout <<"\nEnter The Record : \n\n";
cout <<"r.no. : ";
cin>>rec.rno;
cout <<"name : " ;
gets(rec.name);
cout <<"marks : " ;
cin>>rec.marks;
fl.write((char * )&rec,sizeof(rec));
cout <<"\nMore <Y/N>:";cin>>Q;
}
while(Q=='Y');
fl.close();
}
void display() // FUNCTION TO DISPLAY ALL RECORDS
{
stud rec;
fstream fl;
fl.open("test.dat", ios::in);
fl.read((char * )&rec,sizeof(rec));
while (fl) //or while (!fl.eof())
{
cout <<"\nr.no. : "<<rec.rno;
cout <<"\nname : " <<rec.name;
cout <<"\nmarks : "<<rec.marks;
fl.read((char * )&rec,sizeof(rec));
}
fl.close();
getch();
}
void search() // FUNCTION TO SEARCH RECORD
{ // FOR GIVEN ROLL NO.
stud rec;
fstream fl;
clrscr();
int r,found=0;
cout <<"Give Roll No To Be Searched : ";
cin >>r;
fl.open("test.dat", ios::in);
fl.read((char * )&rec,sizeof(rec));
while (fl)// while (!fl.eof())
{ if (rec.rno==r)
{
cout <<"\nr.no. : "<<rec.rno;
cout <<"\nname : " <<rec.name;
cout <<"\nmarks : "<<rec.marks;
found=1;
}
fl.read((char * )&rec,sizeof(rec));
}
if (found==0) cout <<"\nInvalid Roll No.";
fl.close();
getch();
}
void main()
{
char choice;
do{
clrscr();
co66+56ut<<"\n\n\tC:Create\n\tA:Add at end\n\tD:Display";
cout<<"\n\tS:Search\n\tQ:Quit\n\t";cin>>choice;
switch(choice)
{
case 'C' : create();break;
case 'A' : addatend();break;
case 'D' : display();break;
case 'S' : search();break; 
}
}while(choice!='Q');
}
 
