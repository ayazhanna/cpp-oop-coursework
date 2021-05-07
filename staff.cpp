#include"staff.h"
using namespace std;
char all[999];
char name[50], age[20], sal[30], pos[20];

void staff::get()
{
	ofstream out("staff.txt", ios::app);
	{
		system("cls");
		cin.sync();

		cout << "\nEnter Name =";
		cin >> name;
		//cin.getline(name, 50);
		cout << "\nEnter Age =";
		cin >> age;
		//cin.getline(age, 20);
		cout << "\nEnter sallary =";
		cin >> sal;

		//cin.getline(sal, 30);
		cout << "\nEnter Working position =";
		cin >> pos;
		//	cin.getline(pos, 20);
	}
	out << "\n=============================================================================================\n";
	out << "\nName =" << name << "\nAge =" << age << "\nSallary =" << sal << "\nWorking Position =" << pos;
	out.close();
	cout << "\n\nYour Information has been saved : \n\t\t\tPress any key to continue ";
	_getch();
	menu();
}
void staff::show()
{
	ifstream in("staff.txt");
	if (!in)
	{
		cout << "File open error";

	}
	while (!(in.eof()))
	{
		in.getline(all, 999);
		cout << all << endl;
	}
	in.close();
	cout << "\nPress any key to continue: ";
	_getch();
	menu();
}