//TRY THE PROGRAM ILLUSTRATING THE USE OF POINTERS:-
#include<iostream.h>
#include<conio.h>
#include<string.h>
class one
{
  char name[10];
  public:
  one(char *s)
  {
   strcpy(name,s);
  }
  one compare(one s)
  {
   if(strcmp(name,s.name)==0)
   return *this;
   else
   return s;
  }
 void display()
 {
  cout<<"\n Current calling object is:"<<name;
  cout<<"\n Press any key to continue.....";
  getch();
 }
};
void main()
{
 clrscr();
 one obj1("obj1"), obj2("obj2"),obj3("obj3");
 obj2.display();
 obj3.display();
 one p=obj1.compare(obj2);
 p.display();
 p=obj1.compare(obj3);
 p.display();
 getch();
}
/*Output

 Current calling object is:obj2
 Press any key to continue.....
 Current calling object is:obj3
 Press any key to continue.....
 Current calling object is:obj2
 Press any key to continue.....
 Current calling object is:obj3
 Press any key to continue.....

*/




