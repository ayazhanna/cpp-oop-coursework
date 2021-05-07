#include "information.h"
using namespace std;
void drinfo() {
	system("cls");
	system("color F8");
	cout << "\n\n \t\t\t[Time schedule]\n";
	cout << "-----------------------------------------------------------------------------------\n";
	cout << "\t\t\t\tDr. Arthur[Pediatrics]\n\n";
	cout << "\t\t\t\t [[working time]]:\n\n";
	cout << "\tMonday to Friday\t\t10AM to 2PM\n";
	cout << "\tSaturday and Sunday            \t\t Off\n";
	cout << "\n---------------------------------------------------------------------------------\n";
	cout << "\t\t\t\tDr. Emily [Neurology]\n\n";
	cout << "\t\t\t\t [[working time]]:\n\n";
	cout << "\tMonday To Friday\t\t2PM to 5 PM\n";
	cout << "\tSaturday and Sunday          \t\t Off\n";
	cout << "\n---------------------------------------------------------------------------------\n";
	cout << "\t\t\t\tDr.Rainn (Diagnostic radiology)\n\n";
	cout << "\t\t\t\t[[working time]]:\n\n";
	cout << "\tMonday to Friday\t\t8AM to 1PM\n";
	cout << "\tSaturday and Sunday          \t\t Off\n";
	cout << "\n---------------------------------------------------------------------------------\n";
	cout << "Press any key to continue: ";
	_getch();
	menu();
}