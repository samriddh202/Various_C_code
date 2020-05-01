//Q4.Write a program to define following macro and their implementation:


#include<iostream.h>
#include<conio.h>
#define rectangle(x,y) x*y
#define square(w) w*w
#define triangle(g,l) g*l*(.5)
#define max 100
void main()
{
  clrscr();
  int i,j,k,a,h,r,ra,in,ti;
  float si;
  cout<<"\n\t******Macros******";
  cout<<"\n\n1.Area of rectangle";
  cout<<"\n2.Area of square";
  cout<<"\n3.Area of triangle";
  cout<<"\n4.Simple interest(using constant)";
  cout<<"\n Enter your choice:";
  cin>>k;
  switch(k)
   {
   case 1:
    cout<<"\n Enter the values of length & breadth:";
    cin>>i>>j;
    cout<<"The area is:"<<rectangle(i,j);
    break;
   case 2:
    cout<<"\n Enter the length of side:";
    cin>>a;
    cout<<"The area is:"<<square(a);
    break;
   case 3:
    cout<<"\n Enter the height and base:";
    cin>>h>>r;
    cout<<"The area is:"<<triangle(h,r);
    break;
   case 4:
    cout<<"\n Enter the values of rate,interest & time:";
    cin>>ra>>in>>ti;
    si=(ra*in*ti)/max;
    cout<<"\nThe S.I. is"<<si ;
    break;
   default:
    cout<<"\n\n\tYou entered an invalid choice";
   }
getch();
}

/*Output:
******Macros******
1.Area of rectangle
2.Area of square
3.Area of triangle
4.Simple interest(using constant)

Enter your choice:1
Enter the values for length & breadth:2
3
The area is:6
*/