# include<iostream.h>
#include<conio.h>
void reverse(int ar[],int s)
{
for (int i=s-1;i>=0;i--)
{
cout<<ar[i]<<endl;
}
}
void reverse1(int a[],int n)
{
int l;
if (n%2==0)
l=n/2;
else
l=(n/2+1);
int i;
for (i=0;i<n/2;i++,l++)
{
int t=a[i];
a[i]=a[l];
a[l]=t;
}
}
void reverse3(int a[],int n)
{
int i,l=n-1;
for (i=0;i<n/2;i++,l--)
{
int t=a[i];
a[i]=a[l];
a[l]=t;
}

getch();
}


void main()
{
clrscr();
int a[100],n;
cout<<"enter the size of arrary max=100"<<endl;
cin>>n;
for (int i=0;i<=n;i++)
{
cout<<"enter the number"<<i+1<<endl;
cin>>a[i];
}
int p;
do
{
clrscr();
cout<<"Menu"<<endl;
cout<<"1. Display array in reverse order"<<endl;
cout<<"2. Reverse first half of an array"<<endl;
cout<<"3. Reverse each element of an array3"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter your Choice";
cin>>p;
if (p==1)
{
reverse(a,n);
}
else if (p==2) reverse1(a,n);
else if (p==3) reverse3(a,n);
cout<<"\n Reverse array is ";
for (i=0;i<=n;i++)
{
cout<<a[i]<<",";
}
getch();
}while(p!=4);
getch();
}

