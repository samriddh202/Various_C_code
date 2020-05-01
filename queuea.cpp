//Static Queue	
#include<iostream.h>
#include<conio.h>	
const int Max=10;				 
void Qinsert(int Q[],int &R,int F)
{
    if ((R+1)!= Max)
    {
         cout<<"Data:";
		 cin>>Q[++R];
    }
    else
       cout<<"Queue is Full!"<<endl;
    cout<<"\n Rear = "<<R<<"\t Front = "<<F;
    getch();
}
void Qdelete(int Q[],int R,int &F)
{						
    if (F!=0)
  {						
     cout<<Q[F++]<<"Deleted!"; 
    }
    else
  cout<<"Queue is empty!"<<endl;
  cout<<"\n Rear = "<<R<<"\t Front = "<<F;
    getch();
}
void Qdisplay(int Q[],int R,int F)
{						
   int Cn=F;
    cout<<"\n Rear = "<<R<<"\t Front = "<<F;
    getch();
      while (Cn!=R)
  {
	Cn=(Cn+1)%Max;
	cout<<Q[Cn]<<endl;   
  }
  getch();
}
void main()
{ //Initialisation Steps
  int Que[Max],Rear=0,Front=0;  
  char ch;
  clrscr();
  do
  {
	cout<<"\nI Insert\nD Delete\nS diSplay\nQ Quit\n\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
	case 'I':Qinsert(Que,Rear,Front);break;
	case 'D':Qdelete(Que,Rear,Front); break;
	case 'S':Qdisplay(Que,Rear,Front); break;
	case 'Q':cout<<"\nQuiting.....";break;
	otherwise:cout<<"\nWrong Choice.....";
	}
    }while(ch !='Q');
}
