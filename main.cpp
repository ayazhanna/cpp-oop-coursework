#include "info.h"
#include "Arthur.h"
#include "Emily.h"
#include "Rainn.h"
#include "one.h"
#include "information.h"
#include "staff.h"
using namespace std;
void call_dr()
{
	system("cls");
	int choice;
	cout << "\n\n\t\tPress 1 for Dr Arthur";
	cout << "\n\n\t\tPress 2 for Dr Emily";
	cout << "\n\n\t\tPress 3 for Dr Rainn";
	cout << "\n\n\t\tEnter your choice: ";
	cin >> choice;

	one* ptr;
	Arthur s3;
	Emily s4;
	Rainn s5;

	if (choice == 1)
	{
		ptr = &s3;
		ptr->get();

	}
	if (choice == 2)
	{
		ptr = &s4;
		ptr->get();
	}
	if (choice == 3)
	{
		ptr = &s5;
		ptr->get();
	}
	else {
		cout << "invalid choice! ";
	}

	//delete ptr;
}


void pinfoshow()
{
	system("cls");
	int choice;
	cout << "\n\n\t 1- Press 1 for Dr Arthur ";
	cout << "\n\n\t 2 -Press 2 for dr Emily ";
	cout << "\n\n\t 3 -Press 3 for dr.Rainn ";
	cout << " \nEnter your choice: ";
	cin >> choice;
	one* ptr;
	Arthur s3;
	Emily s4;
	Rainn s5;
	if (choice == 1)
	{
		ptr = &s3;
		ptr->show();
	}
	else if (choice == 2)
	{
		ptr = &s4;
		ptr->show();
	}
	else if (choice == 3)
	{
		ptr = &s5;
		ptr->show();
	}
	else
	{
		cout << "invalid choice!";
		_getch();
		menu();
	}
}

void menu()
{
	system("cls");
	system("color F2");
	cout << "\n";
	cout << "\n";
	cout << "\n--------------------------------------------------------------------------\n";
	cout << "\t\t         Please select any option       \n";

	cout << "\n\n\t\t\tPress 1 for Schedule  \n\n";
	cout << "\t\t\tPress 2 for Doctor appoinment \n\n";
	cout << "\t\t\tPress 3 for Saving staff information\n\n";
	cout << "\t\t\tPress 4 for checking patient appoinment:\n\n ";
	cout << "\t\t\tPress 5 for access to staff information: \n\n";
	cout << "\t\t\tPress 6 for change/create pasword: \n\n";
	cout << "\t\t\tPress 7 for EXIT\n";

	cout << "\n----------------------------------------------------------------------------\n";
	cout << "\n\n\t\tPlease Enter your choice: ";
	information a1;    //create the objects for information
	one* ptr;
	staff a2;
	int a;
	cin >> a;
	if (a == 1)
	{
		a1.drinfo();

	}
	else if (a == 2)
	{
		call_dr();
	}

	else if (a == 3)
	{
		ptr = &a2;
		ptr->get();
	}
	else if (a == 4)
	{
		pinfoshow();

	}
	else if (a == 5)
	{
		ptr = &a2;
		ptr->show();
	}
	else if (a == 6)
	{
		cpascode();
	}
	else if (a == 7)
	{
		//pascode();
	}
	else {
		cout << "invalid choice! ";
	}
}
void pascode()
{

	system("cls");
	char p1[50], p2[50], p3[50];

	ifstream in("password.txt");
	{
		cin.sync();
		cout << "\n\n\n\n\t\t\tHello! Enter the password: ";
		cin.getline(p1, 50);
		in.getline(p2, 50);
		if (strcmp(p2, p1) == 0)
		{
			menu();
		}
		else
		{
			cout << "\n\n\t\t\tIncorrect password pls try again\n";
			pascode();
		}
	}
	in.close();
}

void cpascode()
{
	char n[50];
	system("cls"); //clear screen 
	ofstream out("password.txt");
	cin.getline(n, 50);
	{
		cin.sync();
		cout << "\n\n\t\t\tEnter the new password: ";
		cin.getline(n, 50);
		out << n;
	}
	out.close();
	cout << "\n\n Your Password has been saved.Thank you! ";
	cout << "\n\n Press any key to continue: ";
	_getch();
	menu();
}
int main()
{
	pascode();
	system("pause");
}
