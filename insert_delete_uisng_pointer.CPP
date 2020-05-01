/*  
  =========================================================
  PROGRAM TO ACCEPT, INSERT, DELETE AND FINDING TOTAL OF AN ARRAY
  =========================================================
*/
#include<iostream.h>   
#include<conio.h>
#include<process.h>
void insert_array();
void delete_array();
void total_value();
void display();
int arr[100], n;
int*ptr[100];
void main()
{
 clrscr();
 int x;
 cout<<"\n -----------------MENU-----------------";
 cout<<"\n 1. INSERT THE ARRAY.";
 cout<<"\n 2. TOTAL THE ARRAY.";
 cout<<"\n 3. DISPLAY THE ARRAY.";
 cout<<"\n 4. EXIT.";
 cout<<"\n ENTER YOUR CHOICE: ";
 cin>>x;
 switch(x)
 {
  case 1: insert_array();
  break;
  case 2: total_value();
  break;
  case 3: display();
  break;
  case 4: exit(0);
  default: cout<<"\n ENTER A VALID POTION.";
   getch();
  main();
}
 getch();
}
void insert_array()
{
clrscr();
cout<<"\n ------------INSERT THE ARRAY------------";
cout<<"\n ENTER THE SIZE OF THE ARRAY: ";
cin>>n;
cout<<"\n ENTER THE ARRAY:";
for(int i=0;i<n;i++)
{
cout<<"\n ENTER THE ELEMENT AT POSITION "
   <<i+1<<" : ";
cin>>*ptr[i];
arr[i]=*ptr[i];
}
main();
}

void total_value()
{
clrscr();
cout<<"\n ------------TOTAL THE ARRAY-------------";
int total=0;
for(int i=0;i<n;i++)
{
total+=*ptr[i];
}
cout<<"\nTHE TOTAL OF ALL THE "
    <<"ELEMENTS IN THE ARRAY IS: "<<total;
getch();
main();
}
void display()
{
clrscr();
cout<<"\n------------DISPLAY THE ARRAY------------";
cout<<"\n THE SIZE OF THE ARRAY IS"<<n;
cout<<"\n THE ARRAY IS: ";
for(int i=0;i<n;i++)
{
cout<<"   "<<*ptr[i];
}
getch();
main();
}

/*

 -----------------MENU-----------------
 1. INSERT THE ARRAY.
 2. TOTAL THE ARRAY.
 3. DISPLAY THE ARRAY.
 4. EXIT.
 ENTER YOUR CHOICE:1


 ------------INSERT THE ARRAY------------
 ENTER THE SIZE OF THE ARRAY: 5

 ENTER THE ARRAY:
 ENTER THE ELEMENT AT POSITION 1 : 12

 ENTER THE ELEMENT AT POSITION 2 : 15

 ENTER THE ELEMENT AT POSITION 3 : 16

 ENTER THE ELEMENT AT POSITION 4 : 14

 ENTER THE ELEMENT AT POSITION 5 : 13

*/