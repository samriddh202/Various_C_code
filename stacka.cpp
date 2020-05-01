#include<iostream.h>
#include<conio.h>
//Static Stack					
const int Max=10;			 
void Push(int S[],int &T)
{
	if (T < Max)
  {						  
    cout<<"Data:";cin>>S[++T];          
  }						    
  else                                
    cout<<"Stack is Full!"<<endl;
  cout<<"value of T "<<T<<"\t memory allocation "<<S+T;
  getch();
}                                       
						
void Pop(int S[],int &T)		
{						
  if (T!=-1)				  
  {						 
  cout<<S[T--]<<"Deleted!"<<endl;       
  }                                      
  else					  
    cout<<"Stack is Empty!"<<endl;   
}						   
	                              
void StackDisp(int S[],int T)		
{						
  for (int I=T;I>=0;I--)		  
    cout<<S[I]<<endl;			  
}						 
						    
						       
						  
						
void main()					
{ //Initialisation Steps		
  int Stack[Max+1],Top=-1;		 
  
	  int ch;
do
{
//clrscr();
cout<<"\n\n1.PUSH \n2.POP\n3.DISPLAY\n4.EXIT\n ENTER YOUR CHOICE";
cin>>ch;
switch(ch)
{
case 1 :  Push(Stack,Top);
	  break;
case 2 : Pop(Stack,Top);
	break;
case 3: StackDisp(Stack,Top);
	break;
case 4: cout<<"EXITING.........";
	getch();
	break;
default:cout<<"WRONG CHOICE";
	getch();
}
}while(ch != 4);
}