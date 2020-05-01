#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int m,n,i,j,x,y;
 cout<<"\n lets make a triangle from matrix"<<endl;
 cout<<"\n you need to enter number of rows and column"<<endl;
 cin>>m>>n;
 for(i=0;i<=m;i++)
 {
  cout<<endl;
  for(j=0;j<=n;j++)
  {
   cout<<j<<" ";
  }
 }
  for(x=0;x<=m;x++)
 {
  cout<<endl;
  for(y=0;y<=n;y++)
  {
   if(x<=y)


   cout<<"$"<<" ";
   else
   cout<<" ";
  }
 }
 getch();
}