/*Program of updating  text file using temperory file*/
#include<fstream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	fstream fin(“abc.txt”,ios::in);
	fstream fout(“temp.txt”,ios::out);
	char ch,ch1,ch2;
	cout<<”\n enter character to find”;
	cin>>ch1;
	cout<<”\n Enter character to replace”;
	cin>>ch2;
	while(fin.get(ch))
	{
		If (ch!=ch1)
			fout<<ch;
		else
			fout<<ch2;
	}
	fin.close();
	fout.close();
	remove(“abc.txt”);
	rename(“temp.txt,”abc.txt”);
	}
