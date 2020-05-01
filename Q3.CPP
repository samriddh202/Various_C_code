/*TO SHOW DIFFERENT RAINBOW COLORS OF CORRESPONDING TO
THE ENTERED CODE USING ENUMERATED DATA TYPE.

					*/
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	enum colour {violet=1,indigo,blue,green,yellow,orange,red};
	cout<<"ENTER COLOUR CODE (1-7) : "<<endl;
	int col;
	cin>>col;
	switch(col)
	{
		case violet:
			cout<<"VIOLET COLOUR";
		break;

		case indigo:
			cout<<"INDIGO COLOUR";
		break;

		case blue:
			cout<<"BLUE COLOUR";
		break;

		case green:
			cout<<"GREEN COLOUR";
		break;

		case yellow:
			cout<<"YELLOW COLOUR";
		break;

		case orange:
			cout<<"ORANGE COLOUR";
		break;

		case red:
			cout<<"RED COLOUR";
		break;

		default:
			cout<<"$$$$$$$$$$ INVALID CHOICE $$$$$$$$$$";
		break;
	}
	getch();
}