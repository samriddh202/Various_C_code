//STACK OPERATIONS ON A LINKED STACK

#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{
	int roll_no;
	int age;
	node*link;
};

class lstack
{
	node*top;
	public:
		void push();
		void pop();
		lstack()
		{
			top=NULL;
		}
		void showstack();
		~lstack();
};
//***********************************************
void lstack::push()
{
	node*ptr=NULL;
	ptr=new node;
	if(ptr==NULL)
		cout<<"overflow error";
	else
	{
		cout<<"\n\nenter the roll no -";
		cin>>ptr->roll_no;
		cout<<"\n\nenter the age -";
		cin>>ptr->age;
		ptr->link=top;
		top=ptr;
	}
}
//****************************************************

void lstack::pop()          //node* lstack::pop()
{
	node*ptr=NULL;
	if(top==NULL)
		cout<<"\nunderflow error";

	else
	{
		ptr=top;
		top=top->link;
		delete ptr;   //return(ptr);
	}
}
//****************************************************

void lstack::showstack()
{
	node*ptr=top;
	while(ptr!=NULL)
	{
		cout<<"\n\t1.roll no. is -"<<ptr->roll_no;
		cout<<"\n\t2.age is -"<<ptr->age<<"\n";
		ptr=ptr->link;
	}
}
//*****************************************************

lstack::~lstack()
{
	node*ptr=top;
	while(ptr!=NULL)
	{
		top=top->link;
		delete ptr;
		ptr=top;
	}
}
//****************************************************

void main()
{
	clrscr();
	lstack l;
	int r,n;
	while(r!=4)
	{
		cout<<"\n*********MENU***********";
		cout<<"\n\n\n\t1.push";
		cout<<"\n\n\t2.pop";
		cout<<"\n\n\t3.showstack";
		cout<<"\n\n\t4.exit";
		cout<<"\nenter ur choice-";
		cin>>r;

		switch(r)
		{
			case 1:
				cout<<"\nhow many values u want to enter -";
				cin>>n;
				for(int i=0;i<n;i++)
				l.push();
				break;

			case 2:
				l.pop();
				cout<<"\n\nNOW THE STACK IS:";
				getch();
				l.showstack();
				break;

			case 3:
				cout<<"\nthe stack contains-";
				cout<<"\n";
				l.showstack();
				break;
			case 4:
				exit(r);

			default:
				cout<<"\nWRONG CHOICE ENTERED";

		}
		getch();
		clrscr();
		getch();
	}
	getch();

}