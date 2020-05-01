/*TO ACCEPT A 2-D ARRAY AND DISPLAY THE FOLLOWING MENU:-
  1. ROW TOTAL
  2. COLOUMN TOTAL
  3. LOWER RIGHT TRIANGLE
  4. LOWER LEFT TRIANGLE
  5. UPPER RIGHT TRIANGLE
  6. UPPER LEFT TRIANGLE
*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
class arrays
{
 int a[10];
 int b[10][10];
 int m, n, y;
 public:
 void enter2d();
 void enter1d();
 void rtotal();
 void ctotal();
 void lrtriangle();
 void lowltriangle();
 void urtriangle();
 void ultriangle();
};
void arrays::enter2d()
{
 cout<<"\nEnter the no of rows of matrix:";
 cin>>m;
 cout<<"\nEnter the no columns of matrix:";
 cin>>n;
 cout<<"\nEnter the element in"<<endl;
 for(int i=0; i<m; i++)
 {
 for(int j=0; j<n; j++)
  {
   cout<<"\tRow"<<i+1<<"\tCol"<<j+1;
   cin>>b[i][j];
   cout<<endl;
 }
 }
}
void arrays::enter1d()
{
 cOut<<"\nEnter the size of the array:";
 cin>>y;
 cout<<"\nEnter the element:"<<endl;
 for(int i=0; i<y; i++)
 {
  cout<<"\tLocation"<<i+1;
  cin>>a[i];
  cout<<endl;
 }
} 
void arrays::rtotal()
{
 for(int i=0; i<m; i++)
 {
  a[i]=0;
  for(int j=0; j<n; j++)
  a[i]+=b[i][j];
 }
 for(i=0; i<m; i++)
 {
  cout<<"\nSum of row"<<i+1<<"is ="<<a[i]<<endl;
 }
}
void arrays::ctotal()
{
 for(int j=0; j<n; j++)
 {
  a[j]=0;
  for(int i=0; i<m; i++)
  a[j]+=b[i][j];
 }
 for(int i=0; i<n; i++)
 {
  cout<<"\nSum of column"<<i+1<<"is= "<<a[i]<<endl;
 }
}
void arrays::lrtriangle()
{
 for(int i=0; i<y; i++)
 {
  for(int j=0; j<y; j++)
  b[i][j]=' ';
 }
 for(i=0; i<y; i++)
 {
  for(int j=0; j<=i; j++)
  b[i][j]=a[j];
 }
 cout<<"\nLower right triangle "<<endl;
 for(i=0; i<y; i++)
 {
  cout<<endl;
  for(int j=0; j<y; j++)
  cout<<b[i][j];
 }
 cout<<endl;
void arrays::lowltriangle()
{
 for( i=0; i<y; i++)
 {
 for(int j=0; j<y; j++)
 b[i][j]=" ";
 }
 for(i=0; i<=y; i++)
 {
 for(int j=1; j<=y; j++)
 {
  if((i+j)>y)
  b[i-1][j-1]=a[j-1];
 }
 }
 cout<<"\nLowerleft triangle "<<endl;
 for(i=0; i<y; i++)
 {
 cout<<endl;
 for(int j=0; j<y; j++)
 cout<<b[i][j];
 }
}
void arrays::urtriangle()
{
 for(i=0; i<y; i++)
 {
 for(int j=0; j<y; j++)
 {
  if((i+j)<y)
  b[i][j]=a[j];
 }
 }
 cout<<"\nUpper right triangle"<<endl;
 for(i=0; i<y; i++)
 {
  cout<<endl;
  for(int j=0; j<y; j++)
  cout<<b[i][j];
 }
}
void arrays::ultriangle()
{
 for(int i=0; i<y; i++)
 {
  for(int j=0; j<y; j++)
  b[i][j]=' ';
 }
 for(i=0; i<y; i++)
 {
 for(int j=0; j<y; j++)
 {
  if(i<j)
  b[i][j]=a[j];
 }
 }
 cout<<"\nUpper right triangle"<<endl;
 for(i=0; i<y; i++)
 {
  cout<<endl;
  for(int j=0; j<y; j++)
  cout<<b[i][j];
 }
}
void main()
{
 clrscr();
 arrays a;
 int ch;
 do
 {
  cout<<"\n********* MENU*********"<<endl;
  cout<<"\n 1. ROW TOTAL"<<endl;
  cout<<"\n 2. COLOUMN TOTAL"<<endl;
  cout<<"\n 3. LOWER RIGHT TRIANGLE"<<endl;
  cout<<"\n 4. LOWER LEFT TRIANGLE "<<endl;
  cout<<"\n 5. UPPER RIGHT TRIANGLE "<<endl;
  cout<<"\n 6. UPPER LEFT TRIANGLE "<<endl;
  cout<<"\n 7. EXIT"<<endl;
  cout<<"\n ENTER YOUR CHOICE =";
  cin>>ch;
  switch(ch)
  {
  case 1:
	a.enter2d();
	a.rtotal();
	break;
  case 2:
	a.enter2d();
	a.ctotal();
	break;
  case 3:
	a.enter1d();
	a.lrtriangle();
	break;
  case 4:
	a.enter1d();
	a.lowltriangle();
	break;
  case 5:
	a.enter1d();
	a.urtriangle();
	break;
  case 6:
	a.enter1d();
	a.ultriangle();
	break;
  default:
	cout<<"wrong choice";
	break;
	
  }
}while(1<=ch<=5);
getch();
}



