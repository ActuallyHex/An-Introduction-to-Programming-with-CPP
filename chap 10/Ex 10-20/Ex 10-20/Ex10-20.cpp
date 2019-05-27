//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void displayOptions();
void getRegular(int windows, double price, double &total);
void getBoGo(int windows, double price, double &total);
void getBoGoHo(int, double, double &);

int main() {
	int option = 0;
	int numOrdered = 0;
	double winPrice = 0.0;
	double totalOwed = 0.0;

	cout << fixed << setprecision(2);

	displayOptions();
	cout << "Pricing option? ";
	cin >> option;

	if (option >= 1 && option <= 3) {
		cout << "Number of windows: ";
		cin >> numOrdered;
		cout << "Price per window: ";
		cin >> winPrice;

		if (option == 1)
			getRegular(numOrdered, winPrice, totalOwed);
		else if (option == 2)
			getBoGo(numOrdered, winPrice, totalOwed);
		else if (option == 3)
			getBoGoHo(numOrdered, winPrice, totalOwed);

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
	cout << "3   BoGoHo Pricing" << endl;
}

void getRegular(int windows, double price, double &total) {
	total = windows * price;
}

void getBoGo(int windows, double price, double &total) {
	total = (windows / 2 + windows % 2) * price;
}

void getBoGoHo(int windows, double price, double &total) {
	//double halfOff = 0.0;
	//halfOff = (windows / 2 + windows % 2) * (price * .5);
	//total = (windows / 2 + windows % 2) * price + halfOff;

	total = windows * price;
	total -= (windows / 2 + windows % 2) * (price * .5);
}