#include "menu.h"



menu::menu()
{
}

void menu::engine()
{
	int check = 1;
	while (check)
	{
		start();
		cout << "Do you want to continue  1//0";
		cin >> check;
		system("cls");
	}
}

void menu::start()
{
	try
	{
		int a;
		cout << "Please choose the obgect\n";
		cout << "1 - Point :\n2 - Vector :\n3 - Line \n4 - Segment \n5 - Triangle \n";
		cin >> a;
		system("cls");
		handler(a);
	}
	catch (...)
	{
		cout << "WTF IDIA";
	}
	
}

void menu::handler(int a)
{
	switch (a)
	{
	case 1:
		Point p();
		break;
	}
}


menu::~menu()
{
}
