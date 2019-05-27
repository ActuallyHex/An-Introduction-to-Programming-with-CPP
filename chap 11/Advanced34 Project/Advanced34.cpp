//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int ids[5] = { 10, 14, 34, 45, 78 };
	int prices[5] = { 125, 600, 250, 350, 225 };
	int quantities[5] = { 5, 3, 9, 10, 2 };
	int choice = 0;

	cout << "Product ID: ";
	cin >> choice;
	while (choice > 0) {
		for (int sub = 0; sub < 5; sub++) {
			if (choice == ids[sub]) {
				cout << "Price: " << prices[sub] << endl;
				cout << "Quantitie: " << quantities[sub] << endl;
			}
		}
		cout << endl << "Product ID: ";
		cin >> choice;
	}

	return 0;
}	//end of main function
