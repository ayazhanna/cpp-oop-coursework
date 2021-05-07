#include"Emily.h"

using namespace std;
info a1;
void Emily::get()
{
	system("cls");
	ofstream out("Emily.txt", ios::app | ios::binary);
	a1.get();
	out.write((char*)&a1, sizeof(info));
	out.close();
	cout << "yours entry has been saved";
	_getch();
	menu();
}
void Emily::show()
{
	ifstream in("Emily.txt");

	if (!in == NULL)
	{
		cout << "\n\nNo data in the file ";
		cout << "\n\nPress any key to continue:";
		_getch();
		menu();
	}
	else {
		while (!in.eof())
		{
			in.read((char*)&a1, sizeof(a1));
			a1.show();
		}
		in.close();
		cout << "Press enter to continue=";
		_getch();
		menu();
	}
}