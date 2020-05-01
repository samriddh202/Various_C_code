/****************************************************************************/
//  CREATE A TWO DIMENTIONAL ARRAY FROM A ONE DIMENTIONAL ARRAY             //
//  IN THE FORM OF A TRIANGLE						    //
/****************************************************************************/

#include<iostream.h>
void fun()
{
     int x[20],y[20][20],n,i,j;
     cout<<"Give the number of elements in 1D array";
     cin>>n;
     cout<<"Give the values in the 1D array ";
     for(i=0;i<n;i++)
     cin>>x[i];
     for(i=0;i<n;i++)
     {
     cout<<endl;
     for(j=0;j<n;j++)
     {
     if(j<n-i)
     y[i][j]=x[j];
     else
     y[i][j]=0;
     cout<<y[i][j];
     }
     }
}





