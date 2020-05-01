/* To accept a text file name and display
   1. No. of Characters
   2. Frequency table
   3. No. of lines

*/

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

void main()
{
 clrscr();
 char ch;
 char fname[20],rep;
 do
 {
  cout<<"\n Enter the file name :";
  gets(fname);
  ifstream fin(fname);
  char str[80];
  int upper=0,digit=0,vowel=0,word=1,ch1,n=0,line=0;
  cout<<"\n *********Main Menu*********";
  cout<<"\n 1. No. of characters";
  cout<<"\n 2. Frequency Table";
  cout<<"\n 3. No. of lines";
  cout<<"\n Enter your choice:";
  cin>>ch1;
  switch(ch1)
  {
  case 1:
  while(fin.get(ch))
  {
  n++;
  }
  cout<<"\n Total no. of characters:";
  cout<<n;
  fin.close();
  break;
  case 2:
  while(fin.get(ch))
  {
  if(ch>=65&&ch<=90)
  upper++;
  else
  if(ch>='0'&&ch<='9')
  digit++;
  else
  if(ch==' ')
  word++;
  switch(ch)
  {
  case 'a':
  case 'A':
  case 'e':
  case 'E':
  case 'i':
  case 'I':
  case 'o':
  case 'O':
  case 'u':
  case 'U':
  vowel++;
  break;
  }
 }
  cout<<"\n Number of upper case characters :";
  cout<<upper;
  cout<<"\n Number of vowels :";
  cout<<vowel;
  cout<<"\n Number of digits :";
  cout<<digit;
  cout<<"\n Number of words :";
  cout<<word;
  fin.close();
  break;
  case 3:
  while(fin.getline(str,80))
  line++;
  cout<<"\n No. of lines:";
  cout<<line;
  fin.close();
  break;
  default:
  exit(0);
 }
 cout<<"\n do you want to continue (y/n) :";
 cin>>rep;
 }while(rep=='y'||rep=='Y');
 getch();
} 

/*
OUTPUT

 Enter the file name :ujjwal.txt

 *********Main Menu*********
 1. No. of characters
 2. Frequency Table
 3. No. of lines
 Enter your choice:1

 Total no. of characters:19
 do you want to continue (y/n) :y

 Enter the file name :xiid.txt

 *********Main Menu*********
 1. No. of characters
 2. Frequency Table
 3. No. of lines
 Enter your choice:2

 Number of upper case characters :1
 Number of vowels :6
 Number of digits :1
 Number of words :5
 do you want to continue (y/n) :y

 Enter the file name :xiid.txt

 *********Main Menu*********
 1. No. of characters
 2. Frequency Table
 3. No. of lines
 Enter your choice:3

 No. of lines:1
 do you want to continue (y/n) :n
*/