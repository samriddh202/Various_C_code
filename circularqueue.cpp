/*  write a prog. to perform various queue op.
     1. insert()
     2. delete() 
     3. display() */

#include<iostream.h>
#include<conio.h>
#include<process.h>

class qqueue
  {
	int q[20];
	int size;
	int f;
	int r;
public:
	void ins_q(int v);
	int  del_q();
	void disp_q();
	qqueue()
	   {
	      size=20;
	      f=-1;
	      r=-1;
	   }

   };

//*********************************************************************


void qqueue::ins_q(int v)
{
	int x=(r+1)%size;
		      if(x==f)
			 {
			     cout<<"\n error is found.........";
			 }
       else
	    {
			if(f==-1)
			    { f=r=0;
			     q[r]=v;
			    }
			   else
			    {
				r=(r+1)%size;
				q[r]=v;
			    }
	    }
}

//********************************************************************

int qqueue::del_q()
{
	if(f==-1)
	  {
		cout<<"\n under flow error..........";
		return -1;
	  }

else
     {
	int x=q[f];
	       if(f==r)
		    {

			f=-1;
			r=-1;
			return x;
		    }


else
	{
		 f=(f+1)%size;
		 return x;

	}
}
}

//***********************************************************************

void qqueue::disp_q()
{
	for(int i=f;i!=(r+1)%size;i=(i+1)%size)
       {
		cout<<"\n"<<q[i];
       }
}
//***************************************************************************


void main()
{
clrscr();
	qqueue s;
	int ch,v,n,x;
     do
      {
	cout<<"\n\n             ************MENU************";
	cout<<"\n                  1.want to insert ";
	cout<<"\n                  2.want to delete ";
	cout<<"\n                  3.want to display ";
	cout<<"\n                  4.exit ";
	cout<<"\n\n   enter ur choice  : ";
	cin>>ch;
	switch(ch)
	    {
		 case 1:
			cout<<"\nenter the no of values u want to enter - ";
			int n;
			cin>>n;
			for(int i=0;i<n;i++)
			{
			cout<<"\n enter the element :  ";
			cin>>v;
			s.ins_q(v);
			}
			break;

		 case 2:
			x=s.del_q();
			if(x==-1)
			cout<<" queue is empty............";
			else
			{
			cout<<"\n deleted value is : "<<x;
			}
			break;

		 case 3:
			cout<<"\n\n the queue is : ";
			s.disp_q();
			break;

		 case 4:
			exit(ch);
			break;


     }
     }
     while(ch!=4);
getch();
}


