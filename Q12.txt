//WAP to generate tribonacci series.
#include<iostream.h>
#include<conio.h>
class tribo
{
  long a,b,c;
  public:
  tribo();
};
tribo::tribo()
 {
    int l,x=3,e;
    a=0;
    b=1;
    c=1;
    cout<<"\nPROGRAM TO FIND TRIBONACCI SERIES USING CONSTRUCTOR"<<endl;
    cout<<"\nEnter the series limit:";
    cin>>l;
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t";
    while(x<l)
     {
	e=a+b+c;
	a=b;b=c;
	c=e;
	cout<<e<<"\t";
        x=x+1;
    }
 }
void main()
{
  clrscr();
  char ch;
  do
  {
   tribo t;
   cout<<"\n Do you want to find next series?(y/n)"<<endl;
   cin>>ch;
  }while((ch=='y'||ch=='Y'));
  getch();
}

/*Output

PROGRAM TO FIND TRIBONACCI SERIES USING CONSTRUCTOR

Enter the series limit:6
0       1       1       2       4       7
 Do you want to find next series?(y/n)
y

PROGRAM TO FIND TRIBONACCI SERIES USING CONSTRUCTOR

Enter the series limit:9
0       1       1       2       4       7       13      24      44
Do you want to find next series?(y/n)
n
