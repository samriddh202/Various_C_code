/* write a program to perform various queue operations like 
            insert(),delete(),display() on a linked queue having 
             one integer and one floating type data.
   struct node
   {
	int x ;
	float y;
	node *link;
   };
*/


#include<iostream.h>
#include<process.h>
#include<conio.h>
#include<iomanip.h>

struct node
{
	int x;
	float y;
	node*link;
};
class lqueue
{
	node*f, *r;
	public:
		void insertq();
		void deleteq();
		void displayq();
		lqueue()
		{
			f=NULL;
			r=NULL;
		}
		~lqueue();
};
void lqueue::insertq()
{
	node*ptr=NULL;
	ptr=new node;
	if(ptr==NULL)
		cout<<"\n\n\t\t overflow error";
	else
	{
		cout<<"\n\n\t\t enter the value of x: ";
		cin>>ptr->x;
		cout<<"\n\n\t\tenter the value of y: ";
		cin>>ptr->y;
		ptr->link=NULL;
			if(f==NULL && r==NULL)
			{
				f=ptr;	r=ptr;			}
			else			{
				r->link=ptr;	r=ptr;} }
}
void lqueue::deleteq()
{
	node*ptr=NULL;
	if(f==NULL)
	{		cout<<"\n\n\t\t underflow error";		}
	else	{
		ptr=f;	f=f->link;	delete ptr;	}   }
void lqueue::displayq()
{
	node*ptr=f;
	while(ptr!=NULL)	{cout<<"\n 1.x= "<<ptr->x;	cout<<"\n 2.y= "<<ptr->y;ptr=ptr->link;
	}
}
void lqueue::~lqueue()
{
	node*ptr=f;
	while(ptr!=NULL)
	{
		f=f->link;
		delete ptr;
		ptr=f;
	}
}
void main()
{
	clrscr();
	lqueue q;
	int ch,n;
	while(ch!=4)
	{
		cout<<"\n\n\t\t**********MENU******************";
		cout<<"\n\n\t\t 1.insert queue";
		cout<<"\n\t\t 2.delete queue";
		cout<<"\n\t\t 3.show queue";
		cout<<"\n\t\t 4.exit";
		cout<<"\n\n\t\tenter ur choice-";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\n\n\t\t how many values of x and y u want to enter -";
				cin>>n;
				for(int i=0;i<n;i++)
				{
					q.insertq();
				}
				break;
			case 2:
				cout<<"\n\n\t\t now the stack has values :\n";
				q.deleteq();
				q.displayq();
				break;

			case 3:
				cout<<"\n\n\t\tqueue contains:\n";
				q.displayq();
				break;
			case 4:
				exit(ch);
		}
		getch();

	}
	getch();
}
/*
output


                **********MENU******************

                 1.insert queue
                 2.delete queue
                 3.show queue
                 4.exit

                enter ur choice-1


                 how many values of x and y u want to enter -4


                 enter the value of x: 1


                enter the value of y: 3


                 enter the value of x: 5


                enter the value of y: 6


                 enter the value of x: 5


                enter the value of y: 4


                 enter the value of x: 7


                enter the value of y: 2


                **********MENU******************

                 1.insert queue
                 2.delete queue
                 3.show queue
                 4.exit

                enter ur choice-2


                 now the stack has values :
 1.x= 5
 2.y= 6
 1.x= 5
 2.y= 4
 1.x= 7
 2.y= 2
 

                **********MENU******************
                 1.insert queue
                 2.delete queue
                 3.show queue
                 4.exit

                enter ur choice-3


                queue contains:

 1.x= 5
 2.y= 6
 1.x= 5
 2.y= 4
 1.x= 7
 2.y= 2

                **********MENU******************

                 1.insert queue
                 2.delete queue
                 3.show queue
                 4.exit

                enter ur choice-4
