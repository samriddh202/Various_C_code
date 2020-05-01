/* Q-22 write a prog to perform stack operations like:-
   1.push()
   2.pop()
   3.display()  
 
*/

  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h> 
  #include<process.h>

  class sstack
   {
 	int s[20];
	int top;
	int size;

     public:
	void push(int v);
	int pop();
	void show_stack();
	sstack()
	{
		size=10;
		top=-1;
	 }

   };

  void sstack::push(int v)
   {
	if(top==size-1)
	cout<<"\n overflow error";
	   else
		{
			top=top+1;
			s[top]=v;
		}
   }


  int sstack::pop()
   {
	if(top==-1)
	cout<<"\n underflow ";
		else
		{
			int x= s[top];
			top=top-1;
			return x;
		}
	      return 0;
  }

 void sstack::show_stack()
  {
		if(top!=-1)
		for(int i=top;i>=0;i--)
		{
		cout<<"\t"<<s[i];
		}
		else
		cout<<" empty \n";
  }




  void main()
   {
	clrscr();
	sstack s;
	int ch,v,n;
     do
      {
	cout<<"\n************menu****************";
	cout<<"\n1.want to perform push fnct";
	cout<<"\n2.want to perform pop fnct";
	cout<<"\n3.want to display";
	cout<<"\n4.exit";
	cout<<"\n\n enter ur choice : ";
	cin>>ch;
	switch(ch)
	    {
		 case 1:
			cout<<"\nenter the no. of values to b entered-";
			cin>>n;
			for(int i=0;i<n;i++)
			{
			cout<<"\n enter the element -  ";
			cin>>v;
			s.push(v);
			}
			break;
		 case 2:
			int x=s.pop();
			cout<<"\npopped value is - "<<x;
			cout<<"\nnow the stack is : ";
			s.show_stack();
			break;
		 case 3:
			cout<<"\n\nthe stack is - ";
			s.show_stack();
			break;
		 case 4:
			exit(ch);
			break;


         }
        }
       while(ch!=4);
    getch();
   }


/*
  output

	************menu****************
	1.want to perform push fnct
	2.want to perform pop fnct
	3.want to display
	4.exit
 	enter ur choice1

	enter the no. of values to b entered-3

	 enter the element -  12

	 enter the element -  13

	 enter the element -  14

	************menu****************
	1.want to perform push fnct
	2.want to perform pop fnct
	3.want to display
	4.exit
	enter ur choice2

	enter the element to be popped - 14

	popped value is - 14

	now the stack is: 13      12

	************menu****************
	1.want to perform push fnct
	2.want to perform pop fnct
	3.want to display
	4.exit
 	enter ur choice4

	*/