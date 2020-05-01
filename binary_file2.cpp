Q20.WAP to display the following menu using file handling:
1.Create
2.Add
3.delete
4.display

#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
char fname[20];
class STUD
{
  int rno;
  char name[20];
  public:
  void enter()
  {
    cout<<"\n Enter the roll no:";
    cin>>rno;
    cout<<"\n Enter the name:";
    gets(name);
  }
    void display()
    {
      cout<<"\nRoll no:"<<rno;
      cout<<"\n Name is:";
      puts(name);
    }
    int getrollno()
    {
       return rno;
    }
 };
 void create()
 {
   cout<<"\n Enter file name:";
   gets(fname);
   ofstream fout(fname,ios::binary);
   STUD s;
   s.enter();
   fout.write((char*)&s,sizeof(STUD));
   fout.close();
  }
  void add()
  {
     ofstream fout(fname,ios::app|ios::binary);
     STUD s;
     char ch;
     do
     {
     s.enter();
     fout.write((char*)&s,sizeof(STUD));
     cout<<"\nDo you want to add more objects(y/n)?:";
     cin>>ch;
     }while(ch=='y'||ch=='Y');
     fout.close();
     }
     void display()
     {
       ifstream fin(fname,ios::binary);
       STUD s;
       while(fin.read((char*)&s,sizeof(STUD)))
       {
       s.display();
       }
       fin.close();
       cout<<"\Press any key to continue....";
       getch();
       }
       void deelete(int r)
       {
       STUD s;
       int flag=0;
       ifstream ifile(fname,ios::binary);
       if(ifile==NULL)
       {
	cout<<"\n File does not exist";
	return;
	}
	ofstream ofile("temp.dat",ios::binary);
	while(ifile.read((char*)&s,sizeof(STUD)))
       {
	if(r!=s.getrollno())
	ofile.write((char*)&s,sizeof(STUD));
	else
	flag=1;
	}
	if(flag==0)cout<<"\nRoll no does not exist";
	else
	cout<<"\n Record deleted";
	ifile.close();
	ofile.close();
	remove(fname);
	rename("temp.dat",fname);
	}
 void modify(int r)
       {
       STUD s;
       int flag=0;
       ifstream ifile(fname,ios::binary);
       if(ifile==NULL)
       {
	cout<<"\n File does not exist";
	return;
	}
	ofstream ofile("temp.dat",ios::binary);
	while(ifile.read((char*)&s,sizeof(STUD)))
       {
	if(r!=s.getrollno())
	ofile.write((char*)&s,sizeof(STUD));
	else
                {
                 s.enter();
        	ofile.write((char*)&s,sizeof(s));
	flag=1;
                }
	}
	if(flag==0)cout<<"\nRoll no does not exist";
	else
	cout<<"\n Record Modified";
	ifile.close();
	ofile.close();
	remove(fname);
	rename("temp.dat",fname);
	}
	void main()
	{
	 clrscr();
	 int ch,ro;
	 char choice;
	 cout<<"\n Enter the file name:";
	 gets(fname);
	 do
	 {
	   clrscr();
   cout<<"\n\n\n\n\n*******MENU********";
   cout<<"\n1.Create";
   cout<<"\n2.Add";
   cout<<"\n3.delete";
  cout<<"\n4.Modify";
   cout<<"\n5.display";
   cout<<"\n6.Exit";
   cout<<"\n Enter your choice";
   cin>>ch;
   switch(ch)
	 {
	    case 1:create();
		   break;
	    case 2:add();
		   break;
	    case 3:cout<<"\n Enter roll no ofthe student:";
		   cin>>ro;
		   deelete(ro);
		   break;
	    case 4:cout<<"\n Enter roll no ofthe student:";
		   cin>>ro;
		   modify(ro);
		   break;
	    case 5:display();
		   break;
	    case 6:exit(0);
		   break;
	    default:cout<<"\nOOOooopps!You have entered wrong choice";
   }
  cout<<"\n\nDo you want to continue?(y/n):";
  cin>>choice;
  }while(choice=='y'||choice=='Y');
  getch();
  }


/*Output

 Enter the file name:mit.dat
*******MENU********
1.Create
2.Add
3.delete
4.Modify
5.display
6.Exit
 Enter your choice1

 Enter file name:mit.dat
 Enter the roll no:1
 Enter the name:mitanshi
Do you want to continue?(y/n):y


*******MENU********
1.Create
2.Add
3.delete
4. Modify
5.display
6.Exit
 Enter your choice2
 Enter the roll no:2
 Enter the name:aditya
Do you want to add more objects(y/n)?:y

Enter the roll no:3
Enter the name:nupur
Do you want to add more objects(y/n)?:n
Do you want to continue?(y/n):y

*******MENU********
1.Create
2.Add
3.delete
4.Modify
5.display
6.Exit
 Enter your choice3
Enter roll no ofthe student:3
Record deleted!!!
Do you want to continue?(y/n):y


*******MENU********
1.Create
2.Add
3.delete
4.Modify
5.display
6.Exit
 Enter your choice4

Roll no:1
Name is:mitanshi

Roll no:2
Name is:aditya
Press any key to continue....

Do you want to continue?(y/n):n


*/


