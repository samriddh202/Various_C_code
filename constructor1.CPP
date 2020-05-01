/* WRITE A PROGRAM TO ACCEPT THE NUMBER AN COMPUTE THE FACTORIAL*/
#include<iostream.h>
#include<conio.h>
class factorial
{
 int fact;
 public:
 factorial()
 {
  fact=1;
 }
 int factor(int n);
};
 int factorial::factor(int n)
{
 for(int i=1; i<=n;i++)
 fact=fact*i;
 return fact;
}
void main()
{
 clrscr();
 factorial f;
 int num;
 cout<<"\nENTER THE NUMBER: ";
 cin>>num;
 int x=f.factor(num);
 cout<<"\nFACTORIAL OF "<<num<<" IS: "<<endl<<x;
 getch();
}
/*OUTPUT
ENTER THE NUMBER: 6
FACTORIAL OF 6 IS: 720
*/