/*Q8.WAP to accept string &display the following menu:
 1. Display string
 2. Palindrome or not
 3. Frequency table
 4. Change case
 5. String length
*/

#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
class string
{
  char a[100];
  public:
    void gdata();
    void ddata();
    void pal();
    void freq();
    void chcase();
    void len();
};

void main()
{ clrscr();
  int ch;
  string z;
  cout<<"\nOPERATION ON A STRING";
  cout<<"\n*********************\n";
  string a1;
  z.gdata();
  do
  { clrscr();
    cout<<"\n*****MENU*****";
    cout<<"\n1. Display string";
    cout<<"\n2. Palindrome or not";
    cout<<"\n3. Frequency table";
    cout<<"\n4. Change case";
    cout<<"\n5. String length";
    cout<<"\n6. Exit";
    cout<<"\nEnter your choice<1-6> : ";
    cin>>ch;

    switch(ch)
    {  case 1:  z.ddata();
		 getch();
		 break;

       case 2:  z.ddata();
		z.pal();
		 getch();
		 break;

       case 3:  z.ddata();
		z.freq();
		 getch();
		 break;

       case 4:  z.ddata();
		z.chcase();
		 getch();
		 break;

       case 5:  z.ddata();
		z.len();
		 getch();
		  break;

       case 6: exit(1);

       default:
	cout<<"\nWrong choice entered";
	getch();
    }
  }while(ch!=6);


}
void string::gdata()
{
  cout<<"\nEnter the string : ";
  gets(a);
}
void string::ddata()
{
  cout<<"\nThe entered string is :\n"<<a;
  cout<<"\n";
}
void string::pal()
{
  int len=0,i,k,flag=1;
  for(i=0;a[i]!='\0';i++);
     len=i;
  for(i=0,k=len-1;i<k/2;i++,k--)
    {  if(a[i]!=a[k])
	{ flag=0;
	  break;
	}
    }
  if(flag==1)
    cout<<"\nIt is a palindrome\n";
  else
    cout<<"\nIt is not a palindrome\n";
}
void string::freq()
{
  int i,alpha=0,digit=0,spec=0;
  for(i=0;a[i]!='\0';i++)
   {  if(a[i]>='0' && a[i]<='9')
	digit++;
      else
      if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
	alpha++;
      else
	spec++;
   }
   cout<<"\nThe no. of alphabets are : "<<alpha;
   cout<<"\nThe no. of digits are : "<<digit;
   cout<<"\nThe no. of special characters are : "<<spec;
}
void string::chcase()
{
  int i;
  for(i=0;a[i]!='\0';i++)
    {  if(a[i]>='a' && a[i]<='z')
	 a[i]=a[i]-32;
       else
       if(a[i]>='A' && a[i]<='Z')
	 a[i]=a[i]+32;
    }
  cout<<"\nThe new string is :\n"<<a;
}
void string::len()
{
  int len=0,i;
  for(i=0;a[i]!='\0';i++);
     len=i;
  cout<<"\nLength of the string is : "<<len;
}

/*Output

OPERATION ON A STRING
*********************

Enter the string : UJJWAL



*****MENU*****
1. Display string
2. Palindrome or not
3. Frequency table
4. Change case
5. String length
6. Exit
Enter your choice<1-6> : 1

The entered string is :
UJJWAL


*****MENU*****
1. Display string
2. Palindrome or not
3. Frequency table
4. Change case
5. String length
6. Exit
Enter your choice<1-6> : 2

The entered string is :
UJJWAL

It is not a palindrome



*****MENU*****
1. Display string
2. Palindrome or not
3. Frequency table
4. Change case
5. String length
6. Exit
Enter your choice<1-6> : 3

The entered string is :
UJJWAL

The no. of alphabets are : 6
The no. of digits are : 0
The no. of special characters are : 0

*****MENU*****
1. Display string
2. Palindrome or not
3. Frequency table
4. Change case
5. String length
6. Exit
Enter your choice<1-6> : 4

The entered string is :
ujjwal

The new string is :
UJJWAL

*****MENU*****
1. Display string
2. Palindrome or not
3. Frequency table
4. Change case
5. String length
6. Exit
Enter your choice<1-6> : 5

The entered string is :
UJJWAL

Length of the string is : 6





