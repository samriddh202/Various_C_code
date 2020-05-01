//Dynamic Queue
#include<iostream.h>
#include<conio.h>
struct NODE 
{  
	int Data;  
	NODE *Next;
};
class Queue
{  
	NODE *Rear,*Front;
	public:      
	Queue()
	{
		Rear=NULL;
		Front=NULL;
	}  
	void Qinsert();    
	void Qdelete();   
	void Qdisplay();  
	~Queue();
};
void Queue::Qinsert()
{  
	NODE *Temp;  
	Temp=new NODE;  
	cout<<"Data:";     
	cin>>Temp->Data;      
	Temp->Next=NULL;  
	if (Rear==NULL)      
	{    
		Rear=Temp;    
		Front=Temp;  
	}  
	else  
	{    
		Rear->Next=Temp;    
		Rear=Temp;  
	}
}
void Queue::Qdelete()
{  
	if (Front!=NULL)  
	{    
		NODE *Temp=Front;    
		cout<<Front->Data<<"Deleted/n";         
		Front=Front->Next;    
		delete Temp;
		if (Front==NULL) 
			Rear=NULL;   
	}  
	else    
		cout<<"Queue Empty..";
}
void Queue::Qdisplay()
{  
	NODE *Temp=Front;  
	while(Temp!=NULL)    
	{    
		cout<<Temp->Data<<endl;    
		Temp=Temp->Next;  
	}
}
Queue::~Queue()//Destructer Function
{  
	while (Front!=NULL)  
	{    
		NODE *Temp=Front;    
		Front=Front->Next;    
		delete Temp;     
	}
}
void main()
{  
	Queue Qu; 
	char ch;
  clrscr();
  do
  {
	cout<<"\nI Insert\nD Delete\nS diSplay\nQ Quit\n\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
	case 'I':Qu.Qinsert();break;
	case 'D':Qu.Qdelete(); break;
	case 'S':Qu.Qdisplay(); break;
	case 'Q':cout<<"\nQuiting.....";break;
	otherwise:cout<<"\nWrong Choice.....";
	}
    }while(ch !='Q');
}