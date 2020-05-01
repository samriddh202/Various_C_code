/*WRITE A PROGRAM TO ACCEPT AN ARRAY AND DISPLAY THE FOLLOWING MENU:-
  1.SELECTION SORT
  2. BINARY SEARCH
*/
#include<iostream.h>
#include<process.h>
#include<conio.h>
class operations
{
int a[10];
public:
void sort(int n);
int bsearch(int e,int n);
void enter(int n);
};
//************ INSERTION SORT ***************
void operations::sort(int n)
{
 int temp, j;
 for(int i=0; i<n-1;i++)
 {
  temp=a[i];
  p=i;
  for(j=(i+1); j<n; j++)
  {
   if (a[j]>temp)
   {
     temp=a[j];
     p=j;
   }
  }
  a[p]=a[i];
  a[i]=temp;
 }
 cout<<"\nTHE SORTED ARRAY IS";
 for(int v=0; v<n; v++)
 cout<<"\n"<<a[v]<<" ";
}
//**************** BINARY SEARCH *************
int operations::bsearch(int e,int n)
{
 int f,l,m,p=-1;
 f=0;
 l=n-1;
 while(f<=l&&(p==-1))
 {
  m=(f+l)/2;
  if (a[m]==e)
  p=m;
  else if (a[m]>e)
  l=(m-1);
  else
  f=(m+1);
 }
 return p;
}
//************** INPUT OF DATA ******************
void operations::enter(int n)
{
cout<<"\n ENTER THE ELEMENTS OF ARRAY"<<endl;
for(int i=0; i<n; i++)
{
 cin>>a[i];
}
}
void main()
{
 clrscr();
 operations o;
 int ch,n;
 cout<<"\n ENTER THE SIZE OF ARRAY =";
 cin>>n;
 do
 {
  cout<<"\n*********MENU********";
  cout<<"\n 1.INSERTION SORT";
  cout<<"\n 2.BINARY SEARCH";
  cout<<"\n 3. EXIT";
  cout<<"\n ENTER YOUR CHOICE =";
  cin>>ch;
  switch(ch)
  {
   case 1:
   o.enter(n);
   o.sort(n);
   break;
   case 2:	
   o.enter(n);
   int l;
   cout<<"\n ENTER THE ELEMENT TO BE SEARCHED = ";
   cin>>l;
   int f=o.bsearch(l,n);
   if (f==-1)
   cout<<"\n ELEMENT NOT FOUND";
   else
   cout<<"\n ELEMENT FOUND AT LOCATION ="<<f+1<<endl;
   break;
  case 3:
   cout<<"\n Exitting........";
   exit(0);
  default:
   cout<<"\n WRONG CHOICE"<<endl;
   break;
  }
 }while(1<=ch<=3);
 getch();
}
/*OUTPUT 
ENTER THE SIZE OF ARRAY =6
*********MENU********
1.INSERTION SORT
2.BINARY SEARCH
3. EXIT
ENTER YOUR CHOICE =1
ENTER THE ELEMENTS OF ARRAY
2
3
7
8
6
5
THE SORTED ARRAY IS
2
3
5
6
7
8
*********MENU********
1.INSERTION SORT
2.BINARY SEARCH
3.EXIT
ENTER YOUR CHOICE =2
ENTER THE ELEMENTS OF ARRAY
2
3
4                
6
7
8
ENTER THE ELEMENT TO BE SEARCHED = 6
ELEMENT FOUND AT LOCATION =4
*********MENU********
1.INSERTION SORT
2.BINARY SEARCH
3. EXIT
ENTER YOUR CHOICE =2
ENTER THE ELEMENTS OF ARRAY
2
3
4
5
6
7
ENTER THE ELEMENT TO BE SEARCHED = 1
ELEMENT NOT FOUND
********MENU********
1.INSERTION SORT
2.BINARY SEARCH
3. EXIT
ENTER YOUR CHOICE =3
*/


