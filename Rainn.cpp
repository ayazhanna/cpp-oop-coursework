#include"Rainn.h"

using namespace std;
info a1;
void Rainn::get()
{
	system("cls");
	ofstream out("Rainn.txt", ios::app | ios::binary);
	a1.get();
	out.write((char*)&a1, sizeof(info));
	out.close();
	cout << "yours entry has been saved";
	_getch();
	menu();
}
void Rainn::show()
{
	ifstream in("Rainn.txt");
	if (!in == NULL)
	{
		cout << "\n\nNo data in the file ";
		cout << "\n\n\t\tPress any key to continue:";
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
	}

}