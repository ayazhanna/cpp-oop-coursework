
#include "Arthur.h"
#include "Emily.h"
#include "Rainn.h"
#include "info.h"
char name[50], timepm[50];

int num, age;
void info::get()
	{
		system("cls");
		cin.sync();
		cout << "\nEnter the patient name= ";
		cin >> name;
		cout << endl;
		//cin.getline(name, 50);
		cout << "\nEnter the appoinment time= ";
		cin >> timepm;
		//cin.getline(time, 50);
		cout << "\nEnter age= ";
		cin >> age;
		cout << "\nEnter appoinment no= ";
		cin >> num;
	}
void info::show()
{
	cout << "\nName=" << name;
	cout << "\nAge=" << age;
	cout << "\nNo=" << num;
	cout << "\nTime" << timepm;
}
