//Mukhammmad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double previous = 0.0;
	double current = 0.0;
	double gallons = 0.0;
	double price = 0.0;
	const double BASE_PRICE = 16.67;


	cout << "Enter the curent meter: ";
	cin >> current;
	cout << "Enter the previous meter: ";
	cin >> previous;

	gallons = previous + current;
	price = (gallons / 1000.0) * 7;

	if (price < BASE_PRICE)
		price = BASE_PRICE;

	cout << "The total price is: $" << fixed << setprecision(2) << price << endl;


	system("pause");
	return 0;
}