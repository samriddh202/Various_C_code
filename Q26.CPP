//Q26.Write a program to reverse a string using stack
   


	
  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>


   void push(char s[],int &top,char e)
   {
	top++;
	s[top]=e;
   }


  char pop(char s[],int &top)
   {
	char e=s[top];
	top--;
	return e;
   }



  void reverse(char str[])
   {
	char s[50];
	int top=-1;
	for(int i=0;str[i]!='\0';i++)
	{
		push(s,top,str[i]);
	}
	i=0;
	while(top>=0)
	{
		str[i]=pop(s,top);
		i++;
	}
	str[i]='\0';
   }


  void main()
  {
 	clrscr();
	char s[80],top=-1,e;
	cout<<"\n Enter the string:";
	gets(s);
	reverse(s);
	cout<<"\n reverse string is:";
	puts(s);
	getch();
  }




  OUTPUT:
 
 	Enter the string:I m a good boy.

	 reverse string is:.yob doog a m I
