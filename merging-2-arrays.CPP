/*To accept two arrays & display menu:
1.Merge two sorted aarays
2.Even & odd sorting
3.Negative & positive sorting*/

#include<iostream.h>
#include<conio.h>

class sort
{
 int a[20],b[20],c[20],d[20],m,n	;
 void getdata();
 public:
 void mergesort();
 void eosort();
 void npsort();
};

void sort::getdata()
{
 cout<<"\nEnter the no of elements for list 1:  ";
 cin>>m;
 cout<<"\nEnter the no of elements for list 2:  ";
 cin>>n;
 cout<<"\n\nEnter the elemnts for list 1: ";
 for(int i=0;i<m;i++)
 cin>>a[i];
 cout<<"\n\nEnter the elements for list 2: ";
 for(i=0;i<n;i++)
 cin>>b[i];
}

void sort::mergesort()
{
 getdata();
 int i=0,j=0,k=0;
 while((i<m)&&(j<n))
{
 if(a[i]<b[j])
 {
  c[k]=a[i];
  k++;
  i++;
 }
 else
 {
  c[k]=b[j];
  k++;
  j++;
 }
}
 while(i<m)
 {
 c[k]=a[i];
 k++;i++;
 }
 while(j<n)
 {
 c[k]=b[j];
 k++;
 j++;
 }
 cout<<"\n\nnew merged list is: " ;
 for(i=0;i<m+n;i++)
 cout<<c[i]<<"\n";
}

void sort::eosort()
{
 getdata(); 
 int j=0,l=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]%2==0)
 c[j]=a[i];j++;
 else
 d[l]=a[i];l++;
 }
 for(i=0;i<m;i++)
 {
 if(b[i]%2==0)
  c[j]=b[i];j++;
 else
  d[l]=b[i];l++;
 }
 cout<<"\n\nsorted list is: \n";
 for(i=0;i<j;i++)
 cout<<c[i]<<"\n";
 for(i=0;i<l;i++)
 cout<<d[i]<<"\n";
}

void sort::npsort()
{
getdata();
int j=0,l=0;
for(int i=0;i<n;i++)
{
if(a[i]>0)
{
c[j]=a[i];
j++;
}
else
{
d[l]=a[i];
l++;
}
}
for(i=0;i<m;i++)
{
if(b[i]>0)
{
c[j]=b[i];
j++;
}
else
{
d[l]=b[i];
l++;
}
}
cout<<"\n\nSorted list is: \n\n";
for(i=0;i<j;i++)
cout<<c[i]<<"\n";
for(i=0;i<l;i++)
cout<<d[i]<<"\n";
}

void main()
{
clrscr();
sort s1;
int ch;
cout<<"~~~~~~~~~~Menu~~~~~~~~~";
cout<<"\n\n1.To merge two sorted arrays";
cout<<"\n2.To sort even n odd nos of two lists";
cout<<"\n3.-ve and  +ve sorting";
cout<<"\nEnter your choice: ";
cin>>ch;
if(ch==1)
s1.mergesort();
else if(ch==2)
s1.eosort();
else
s1.npsort();
getch();
}
/*
output

~~~~~~~~~~Menu~~~~~~~~~

1.To merge two sorted arrays
2.To sort even n odd nos of two lists
3.-ve and  +ve sorting
Enter your choice: 3
Enter the no of elements for list 1: 2
Enter the no of elements for list 2: 3

Enter the elements for list 1: 
-4
-5
Enter the elements for list 2:
5
6
-8
Sorted list is:
5
6
-4
-5
-8
*/