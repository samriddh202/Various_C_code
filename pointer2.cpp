/* WRITE A PROGRAME TO DO THE FOLLOWING :-
1. CREATE AN ARRAY WITH 5 ELEMENTS OF TELEPHONE TYPE AD INITIALIZE IT
   WITH TELEPHONE NOS. AND NAME OF YOUR 5 FREINDS
2. CREATE A POINTER TO TELEPHONE ARRAY
3. DISPLAY THE TELEPHONE DETAILS OF YOUR 5 FREINDS USING POINTERS
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct telephone
{
 char tno[10];
 char name[10];
 };
void main()
{
  clrscr();
  int i=0;
  telephone t[5];
  for(i=0;i<5;i++)
  {
   cout<<"\n Enter details of"<<" "<<i+1<<" friend";
   cout<<"\n Enter telephone number:";
   cin>>t[i].tno;
   cout<<"\n Enter the name:";
   gets(t[i].name);
  }
  telephone*tptr;
  tptr=t;
  for(i=0;i<5;tptr++,i++)
  {
   cout<<"\n Telephone no is: "<<tptr->tno<<endl;
   cout<<"\n Name is: "<<tptr->name<<endl;
  }
  getch();
}

/*Output

Enter details of 1 friend
Enter telephone number:9876543210
Enter the name:abc

Enter details of 2 friend
Enter telephone number:1234567890
Enter the name:xyz

Enter details of 3 friend
Enter telephone number:8769453210
Enter the name:rtu

Enter details of 4 friend
Enter telephone number:27653478901
Enter the name:klm

Enter details of 5 friend
Enter telephone number:34568903211
Enter the name:yuri

Telephone no is: 9876543210
Name is: abc

Telephone no is: 1234567890
Name is: xyz

Telephone no is: 8769453210
Name is: rtu

Telephone no is: 2765347890
Name is: klm

Telephone no is: 3456890321
Name is: yuri

*/