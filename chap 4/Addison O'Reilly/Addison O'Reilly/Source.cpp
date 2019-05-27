//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	// declare variables
	double salePrice = 0.0;
	double taxRate = 0.0;
	double salesTax = 0.0;
	double cost = 0.0;

	// enter input items
	cout << "Enter the sale price: ";
	cin >> salePrice;
	cout << "Enter the sales tax rate: ";
	cin >> taxRate;

	// calculate the sales tax and cost
	salesTax = salePrice * taxRate;
	cost = salePrice + salesTax;

	// display output item
	cout << "cost: $" << cost << endl;

	system("pause");
	return 0;

}