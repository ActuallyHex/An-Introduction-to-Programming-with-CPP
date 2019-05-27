//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double owed = 0.0;
	double paid = 0.0;
	double change = 0.0;
	int dollar = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	double pennies = 0;

	cout << "Amount owed: $";
	cin >> owed;
	cout << "Amount paid: $";
	cin >> paid;

	change = paid - owed;



	if (paid < owed)
		cout << "Not enough money" << endl;
	else {
		cout << "The change is: " << change << endl;
		change *= 100;

		dollar = static_cast<int>(change) / 100;
		change -= dollar * 100;
		quarters = static_cast<int>(change) / 25;
		change -= (quarters * 25);
		dimes = static_cast<int>(change) / 10;
		change = change - (dimes * 10);
		nickels = static_cast<int>(change) / 5;
		change = change - nickels * 5;
		pennies = change / 1.0;

		cout << "Dollar amount: " << dollar << endl;
		cout << "Quarters amount: " << (quarters) << endl;
		cout << "Dimes amount: " << (dimes) << endl;
		cout << "Nickels amount: " << (nickels) << endl;
		cout << "Pennies amount: " << (pennies) << endl;
	}

	int num = 0;
	cin >> num;
	system("pause");
	return 0;
}
