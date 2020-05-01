#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main()
{   clrscr();
//INITIALIZING the array that will contain unique numbers i.e distinct numbers
int i=198,k=0;
char num[4],num1[4],num2[4],sodar1[7],sodar2[10],num3[4];
//THE ABOVE ARRAYS OF CHAR TYPE WILL BE USED FOR STORING THE RANDOM ARRAYS OF UNIQUE NUMBERS
int arr[503];//THIS WILL CONTAIN THE NUMBERS UNIQUE TYPEL AND 0 WILL NOT BE THERE 
//BY LOGIC OF COMBINATIONS TOTAL NUMBERS OF 3 DIGITS WITH ALL DISTINCT ARE 504
for(i=100;i<987;i++)// TO OBTAIN 3 DIGIT NUMBERS
{
itoa(i,num,10);//CONVERSION OF NUMBERS INTO STRING
if((num[0]!=num[1])&&(num[1]!=num[2])&&(num[2]!=num[0])&&(num[0]!=48)&&(num[1]!=48)&&(num[2]!=48))
{arr[k]=i;//THIS CONDITION WILL CHECK THEIR UNIQUENESS
k++;
}
}
//UNIQUE NUMBERS OVER;;;;;;;;;;;;;;;;;
//------------------------
//--------------------------
//NOW UNIQUE ROWS---------------
int j=0,p=0;k=0;int flag=16;
srand(time(NULL));//RANDOM NUMBERS---------
cout<<endl<<endl;
int rndpos=(rand()%503)+0;cout<<"   position is   "<<rndpos<<endl<<endl;
int rndno=arr[rndpos];
itoa(rndno,num1,10);//THE NUMBER IS IN NUM1 ARRAY---------
cout<<"primary  number is "<<num1<<endl<<endl;
while(flag==16)
  {  j=0;
     k=0;
     p=0;
     rndno=arr[(rand()%503)+0];
  itoa(rndno,num2,10);
   while(j<9)
    {
    if(num1[k]==num2[p])   //CHEKING EACH OF NUMBERS EUALITY
    { flag=16;
    break;
     }
    p++;
    if((j==2)||(j==5)||(j==8))
    {k++;  //CHANGING THE POSITION AFTER CHECKIN NUMEBRS OF SMALL ARRY
    p=0;
    }
    j++;
    }
    if(j==9)
    {flag=0;
    break;
	  }
	  }
    if((flag==0)&&(j==9))
   { cout<<"unique  "<<num1<<endl<<num2<<endl;
   strcat(sodar1,num1);
   strcat(sodar1,num2);
   cout<<sodar1<<endl<<endl<<endl;
   }
   flag=16;

   while(flag==16)
  {  j=0;
     k=0;
     p=0;
     rndno=arr[(rand()%503)+0];
  itoa(rndno,num3,10);
   while(j<18)
    {
    if(sodar1[p]==num3[k])   //CHEKING EACH OF NUMBERS EUALITY
    { flag=16;
    break;
     }
    p++;
    if((j==5)||(j==11)||(j==17))
    {k++;  //CHANGING THE POSITION AFTER CHECKIN NUMEBRS OF SMALL ARRY
    p=0;
    }
    j++;
    }
    if(j==18)
    { flag=0;
     break;
	  }
	  }
    if((flag==0)&&(j==18))
   { cout<<" unique  "<<num3<<"   "<<sodar1<<endl;
   strcpy(sodar2,sodar1);cout<<"     "<<sodar2;
   strcat(sodar2,num3);
   cout<<"         "<<sodar2;

//THIS ARRAY SODAR2 WILL BE MY UNIQUE ROW.......... 
//THE PROBLEM LIES IN MAKING IT A FUNCTION FOR REPETION 9 TIMES......
   }
























    getch();
    }
