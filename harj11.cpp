/*****IIZO1010******
Ryhm‰: IIO14S2
Harjoitus 11
Kuvaus: K‰ytt‰j‰lt‰ kysyt‰‰n kaksi kokonaislukua,
jonka j‰lkeen ohjelma antaa valikon laskutoimituksista ja lopuksi tulostaa oikean vastauksen.
Tekij‰: Joel Kortelainen
Versio: 1.0
1.10.2014
*/
#include <iostream>
using namespace std;



int menu()
{
	system("cls");
	cout << "MENU " << endl;
	cout << "0. Exit " << endl;
	cout << "1. Sum " << endl;
	cout << "2. Substraction " << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "5. Remainder" << endl;
	cout << "6. Insert new numbers" << endl;

	return(0);
}
int main()
{
	system("title Calculator 3000");
	int n1, n2;
	int choice;
	cout << "Insert first number: ";
	cin >> n1;
	cout << "Insert second number:  ";
	cin >> n2;
	menu();
	while (true)
	{	
		cin >> choice;
		switch (choice)
		{
		case 0: return 0;
		case 1: cout << n1 << " + " << n2 << " = " << n1 + n2 << " " << endl;
			break;
		case 2: cout << n1 << " - " << n2 << " = " << n1 - n2 << " " << endl;
			break;
		case 3:	cout << n1 << " * " << n2 << " = " << n1 * n2 << " " << endl;
			break;
		case 4: cout << n1 << " / " << n2 << " = " << (float)n1 / n2 << " " << endl;
			break;
		case 5: cout << n1 << " % " << n2 << " = " << n1 % n2 << " " << endl;
			break;
		case 6:
			system("cls");
			cout << "Insert first number: ";
			cin >> n1;
			cout << "Insert second number:  ";
			cin >> n2;
			menu();
			break;
		default: cout << "Select between 0-6 " << endl;
			cout << "Press Enter to continue ";
			cin.ignore(1, '\n');
			cin.get();
			system("cls");
			menu();
		}
	}
	return(0);
}

