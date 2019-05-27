//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void displayOptions();
double getRegular(int windows, double price);
double getBoGo(int windows, double price);

int main() {
	int option = 0;
	int numOrdered = 0;
	double winPrice = 0.0;
	double totalOwed = 0.0;

	cout << fixed << setprecision(2);

	displayOptions();
	cout << "Pricing option? ";
	cin >> option;

	if (option == 1 || option == 2) {
		cout << "Number of windows: ";
		cin >> numOrdered;
		cout << "Price per window: ";
		cin >> winPrice;

		if (option == 1)
			totalOwed = getRegular(numOrdered, winPrice);
		else
			totalOwed = getBoGo(numOrdered, winPrice);

		cout << "Total owed-----> $" << totalOwed << endl << endl;
	}
	else
		cout << "Invalid option" << endl;

	system("pause");
	return 0;
}

void displayOptions() {
	cout << "Pricing options:" << endl;
	cout << "1   Regular pricing" << endl;
	cout << "2   BoGo Pricing" << endl;
}

double getRegular(int windows, double price) {
	double total = 0.0;
	total = windows * price;

	return total;
}

double getBoGo(int windows, double price) {
	double total = 0.0;
	total = (windows / 2 + windows % 2) * price;

	return total;
}