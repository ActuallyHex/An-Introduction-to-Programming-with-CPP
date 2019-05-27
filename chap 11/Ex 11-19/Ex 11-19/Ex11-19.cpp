//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double rates[5] = { 0.92, 1.81, 0.98, 0.67, 15.24 };
	int choice = 0;
	int dollars = 0;
	double result = 0.0;

	cout << "Currency Menu" << endl;
	cout << "1  Euro" << endl;
	cout << "2  British Pound" << endl;
	cout << "3  German Mark" << endl;
	cout << "4  Swiss Franc" << endl;
	cout << "5  Mexican pesos" << endl;
	cout << "Choice (1 to 5): ";
	cin >> choice;

	if (choice > 0 && choice < 6) {
		cout << "Number of American dollars: ";
		cin >> dollars;
		cout << endl;
		if (choice == 1)
			cout << "Euros: ";
		else if (choice == 2)
			cout << "British pounds: ";
		else if (choice == 3)
			cout << "German marks: ";
		else if (choice == 4)
			cout << "Swiss francs: ";
		else
			cout << "Mexican pesos: ";

		result = dollars * rates[choice - 1];
		cout << result << endl;
	}
	else
		cout << "Invalid menu choice" << endl;

	system("pause");
	return 0;
}