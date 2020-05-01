Q1.WAP to print the sum of the series
1. 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n
2. 1 + x^2/3! - x^3/4! +......+ x^n/(n+1)
3. 1 - x^2/3! + x^3/4! +......+ x^n-1/n!
#include<iostream.h>
#include<process.h>
#include<conio.h>
void series1(int n, int x);
void series2(int n, int x);
void series3(int n, int x);

void main()
{
	clrscr();
	char choice;
	int ch;
	int n, x;
	do
	{
	cout<<"\nEnter the no.:";
	cin>>n;
	cout<<"\nEnter the limit:";
	cin>>x;
	cout<<"\n\t\t***********MENU**********"<<endl;
	cout<<"1. 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n!"<<endl;
	cout<<"2. 1 + x^2/3! - x^3/4! +......+ x^n/(n+1)!"<<endl;
	cout<<"3. 1 - x^2/3! + x^3/4! +......+ x^n-1/n!"<<endl;
	cout<<"4. exit"<<endl;
	cout<<"\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
		case 1:{
			series1(n,x);
			break;
		      }
		case 2:{
			series2(n,x);
			break;
		      }
		case 3:{
			series3(n,x);
			break;
		      }
		case 4:{
			cout<<"exitting";
			exit(0);
		      }
		default:{
			   cout<<"Wrong choice";
			   break;
			}
	}   cout<<"\n\nDo you want to continue?(y/n):";
  cin>>choice;
  }while(choice=='y'||choice=='Y');
  getch();
  }
  void series1(int n, int x)
{
	int i, f=1;
	int p=1;
	double s=1;
	for(i=1; i<n; i++)
	{
		f*=i;
		p*=x;
		s+=(double)p/f;
	}
	cout<<"The sum of the series is:"<<s<<endl;
}
void series2(int n, int x)
{
	int i, f=2, c=-1;
	int p;
	double s=1;
	p=x;
	for(i=2; i<=n; i++)
	{
		f*=(i+1);
		p*=x;
		c*=-1;
		s+=(double)c*p/f;
	}
	cout<<"The sum of the series is:"<<s<<endl;
}

void series3(int n, int x)
{
	int i, f=2, c=1;
	int p;
	double s=1;
	p=x;
	for(i=2; i<=n; i++)
	{
		f*=(i+1);
		p*=x;
		c*=-1;
		s+=(double)c*p/f;
	}
	cout<<"The sum of the series is:"<<s<<endl;
}

/*Output

Enter the no.4
Enter the limit2

                ***********MENU**********
1. 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n!
2. 1 + x^2/3! - x^3/4! +......+ x^n/(n+1)!
3. 1 - x^2/3! + x^3/4! +......+ x^n-1/n!
4. exit

Enter your choice1
Sum of the series1=6.333333

Do you want to continue?(y/n):y

Enter the no.2
Enter the limit6

                ***********MENU**********
1. 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n!
2. 1 + x^2/3! - x^3/4! +......+ x^n/(n+1)!
3. 1 - x^2/3! + x^3/4! +......+ x^n-1/n!
4. exit

Enter your choice2
Sum of the series 2=7

Do you want to continue?(y/n):y

Enter the no.6
Enter the limit7

                ***********MENU**********
1. 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n!
2. 1 + x^2/3! - x^3/4! +......+ x^n/(n+1)!
3. 1 - x^2/3! + x^3/4! +......+ x^n-1/n!
4. exit

Enter your choice3
Sum of the series3=13.123016

Do you want to continue?(y/n):n