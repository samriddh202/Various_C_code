/*Q10.WAP to declare structure of students with following menu:
 1.Create
 2.Report
 3.Name list
 4.Merit list
*/  
 #include<iostream.h>
 #include<conio.h>
 #include<process.h>
 #include<string.h>
 #include<stdio.h>
 struct student
 {
  int adm_no,cls;
  char name[20],add[30],pinc[10],grade;
  float marks[5],total,average;
 };
 class marks
 {
  student s;
  void calculate();
  public:
  int retadmno();
  char *retname();
  float retaverage();
  void readdata();
  void disp();
 };
void marks::calculate()
{
  for(int i=0;i<5;i++)
  {
   s.total+=s.marks[i];
  }
  s.average=s.total/5;
  if(s.average>=90)
  s.grade='A';
  else
  if(s.average>=75)
  s.grade='B';
  else
  if(s.average>=60)
  s.grade='C';
  else
  if(s.average>=40)
  s.grade='D';
  else
  s.grade='F';
}
 int marks::retadmno()
 {
  return s.adm_no;
 }
 char *marks::retname()
 {
  return s.name;
 }
 float marks::retaverage()
 {
  return s.average;
 }
 void marks::readdata()
 {
  int i;
  cout<<"\nEnter the admission no:";
  cin>>s.adm_no;
  cout<<"\n Enter the name:";
  gets(s.name);
  cout<<"\n Enter the address:";
  gets(s.add);
  cout<<"\n Enter the pincode:";
  gets(s.pinc);
  cout<<"\n Enter the Class:";
  cin>>s.cls;
  cout<<"\n Enter the marks in 5 Subjects:";
  for( i=0;i<5;i++)
   {
    cout<<"\n Enter marks of"<<" "<<i+1<<"subject:";
    cin>>s.marks[i];
   }
  calculate();
 }
  void marks::disp()
  { 
   cout<<"\n Admission no:"<<s.adm_no;
   cout<<"\n Name:";
   puts(s.name);
   cout<<"\n Address:";
   puts(s.add);
   cout<<"\n Pin code";
   puts(s.pinc);
   cout<<"\nClass:"<<s.cls;
   cout<<"\n Total:"<<s.total;
   cout<<"\n Average:"<<s.average;
   cout<<"\n Grade:"<<s.grade;
  }
void main()
{
 char choice,name1[20],name2[20];
 int ch,ano,no,flag=0,i,j;
 float avg1,avg2;
 marks m[5],temp;
 do
 {
  clrscr();
  cout<<"\n\n\n\n\n*******MENU********";
  cout<<"\n1.Create";
  cout<<"\n2.Report";
  cout<<"\n3.Name list";
  cout<<"\n4.Merit list";
  cout<<"\n5.Exit";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  {
   case 1:  
      for(i=0;i<5;i++)
      {
       cout<<"\nEnter detail for student"<<i+1;
       m[i].readdata();
      }
      break;
   case 2:  flag=0;
      cout<<"\nEnter admission no of student";
      cin>>ano;
      for(i=0;i<5;i++)
      {
       no=m[i].retadmno();
       if(no==ano)
       {
	cout<<"\nStudent found and report card of student";
	m[i].disp();
	flag=1;
       }
      }
      if(flag==0)
      {
      cout<<"\nstudent not found";
      }
      break;
   case 3: 
      for(i=0;i<5;i++)
      {
      for(j=0;j<5-i-j-1;j++)
      {
       strcpy(name1,m[i].retname());
       strcpy(name2,m[i+1].retname());
       if(strcmp(name1,name2)>0)
       {
	temp=m[i];
	m[i]=m[i+1];
	m[i+1]=temp;
       }
      }
      }
      clrscr();
      cout<<"\n\nFollowing is the list of students besed on names\n";
      for(i=0;i<5;i++)
      {
      m[i].disp();
      }
      break;
   case 4: for(i=0;i<5;i++)
      {
      for(j=0;j<5-i-1;j++)
      {
       avg1=m[i].retaverage();
       avg2=m[i+1].retaverage();
       if(avg1>avg2)
       {
	temp=m[i];
	m[i]=m[i+1];
	m[i+1]=temp;
       }
      }
      }
      clrscr();
      cout<<"\n\n Following is the merit list of the studentsbased on average marks";
      for(i=0;i<5;i++)
      {
       m[i].disp();
      }
       break;
   case 5: exit(0);
   default: cout<<"\n You have entered wong choice";
  }
  cout<<"\n\nDo you want to continue?(y/n):";
  cin>>choice;
 }while(choice=='y'||choice=='Y');
 getch();
}

/*Output
                       *******MENU********
1.Create
2.Report
3.Name list
4.Merit list
5.Exit
 Enter your choice:1

Enter detail for student1
Enter the admission no:100
Enter the name:Mitanshi
Enter the address:delhi
Enter the pincode:7
Enter the Class:12
Enter the marks in 5 Subjects:
Enter marks of 1subject:80
Enter marks of 2subject:89
Enter marks of 3subject:90
Enter marks of 4subject:97
Enter marks of 5subject:96


Enter detail for student2
Enter the admission no:101
Enter the name:Ram
Enter the address:rohini
Enter the pincode:8
Enter the Class:12
Enter the marks in 5 Subjects:
Enter marks of 1subject:78
Enter marks of 2subject:79
Enter marks of 3subject:90
Enter marks of 4subject:89
Enter marks of 5subject:78


Enter detail for student3
Enter the admission no:102
Enter the name:Rashi
Enter the address:rohtak
Enter the pincode:11
Enter the Class:12
Enter the marks in 5 Subjects:
Enter marks of 1subject:67
Enter marks of 2subject:87
Enter marks of 3subject:76
Enter marks of 4subject:45
Enter marks of 5subject:09


Enter detail for student4
Enter the admission no:103
Enter the name:Rishabh
Enter the address:delhi
Enter the pincode:4
Enter the Class:12
Enter the marks in 5 Subjects:
Enter marks of 1subject:63
Enter marks of 2subject:52
Enter marks of 3subject:69
Enter marks of 4subject:89
Enter marks of 5subject:97


Enter detail for student5
Enter the admission no:104
Enter the name:Himanshu
Enter the address:delhi
Enter the pincode:9
Enter the Class:12
Enter the marks in 5 Subjects:
Enter marks of 1subject:85
Enter marks of 2subject:96
Enter marks of 3subject:56
Enter marks of 4subject:35
Enter marks of 5subject:96


Do you want to continue?(y/n):y
                      *******MENU********
1.Create
2.Report
3.Name list
4.Merit list
5.Exit
 enter your choice2

Enter admission no of student:100

Student found and report card of student
Admission no:100
Name:Mitanshi
Address:delhi
Pin code7
Class:12
Total:452
Average:90.400002
Grade:A

Do you want to continue?(y/n):y

                      *******MENU********
1.Create
2.Report
3.Name list
4.Merit list
5.Exit
 enter your choice2

Enter admission no of student:102

Student found and report card of student
Admission no:102
Name:Rashi
Address:rohtak
Pin code11
Class:12
Total:284
Average:56.799999
Grade:D

Do you want to continue?(y/n):n
