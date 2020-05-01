//link list using stack method//

#include<iostream.h>
#include<conio.h>
struct node
{
int Data;
node *link;
};
class stack
{
node *top;
public:
stack()
{
top = NULL;
}
void push();
void pop();
void display();
~stack();
};
stack::~stack() //Destructer Function
{
 while (top!=NULL)
{
	node *temp=top;
	top=top->link;
	delete temp;
}
}
void stack::push()
{
node *new1=new node;
cout<<"enter data ";
cin>>new1->Data;
new1->link=NULL;
if(top==NULL)
{
top=new1;
cout<<"\n First value in Top is "<<top;
getch();
}
else
{
cout<<"\n Top before allocation"<<top;
getch();
new1->link=top;
top=new1;
cout<<"\n Top after allocation"<<top;
getch();
}
}
void stack::pop()
{
if(top==NULL)
{
cout<<"stack is empty";
getch();
}
else
{
node *ptr=top;
top=top->link;
cout<<"\ndeleted "<<ptr->Data;
cout<<"\t Memory "<<ptr;
getch();
delete ptr;
cout<<"\n new value of top"<<top;
getch();
}
}
void stack::display()
{
if(top==NULL)
{
cout<<"\n stack is empty";
getch();
}
else
{
for(node *ptr=top;ptr!=NULL;ptr=ptr->link)
{
cout<<"\nvalues "<<ptr->Data<<"\t memory"<<ptr;
}
getch();
}
}
void main()
{
clrscr();
stack st;
int ch;
do
{
cout<<"\n\n1.PUSH \n2.POP\n3.DISPLAY\n4.EXIT\n ENTER YOUR CHOICE";
cin>>ch;
switch(ch)
{
case 1 :  st.push();
	  break;
case 2 : st.pop();
	break;
case 3: st.display();
	break;
case 4: cout<<"EXITING.........";
	getch();
	break;
default:cout<<"WRONG CHOICE";
	getch();
}
}while(ch != 4);
}







































































































































































































































