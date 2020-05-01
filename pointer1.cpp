//A program to swap 2 given numbers using pointers

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
void swap(int *x,int *y);
int a,b;
cout<<"\nEnter the value for a";
cin>>a;
cout<<"\nEnter the value for b";
cin>>b;
cout<<"\nOrginal value of a and b before swaping ";
cout<<"\n a:"<<a<<"\n b:"<<b;
swap(&a,&b);
cout<<"\nValues after swaping a and b";
cout<<"\n a="<<a<<"\n b="<<b;
getch();
}
void swap(int*x,int*y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
}
/*
OUTPUT:-
Enter the value for a23
Enter the value for b45
Orginal value of a and b before swaping
 a:23
 b:45
Values after swaping a and b
 a=45
 b=23
*/
