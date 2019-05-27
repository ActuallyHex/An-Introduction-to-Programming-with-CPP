//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	const double VALUE_HALFDOLLAR = 0.5;
	const double VALUE_QUARTER = 0.25;
	const double VALUE_DIME = 0.1;
	const double VALUE_NICKEL = 0.05;
	const double VALUE_PENNY = 0.01;
	int halfDollar = 0;
	int quarter = 0;
	int dime = 0;
	int nickel = 0;
	int penny = 0;
	double total = 0.0;

	cout << "Number of half dollars: ";
	cin >> halfDollar;
	cout << "Number of quarters: ";
	cin >> quarter;
	cout << "Number of dimes: ";
	cin >> dime;
	cout << "Number of nickels: ";
	cin >> nickel;
	cout << "Number of pennies: ";
	cin >> penny;

	total = (halfDollar * VALUE_HALFDOLLAR) + (quarter * VALUE_QUARTER) + (dime * VALUE_DIME) + (nickel * VALUE_NICKEL) + (penny * VALUE_PENNY);
	cout << "The total is: $" << total << endl;

	system("pause");
	return 0;
}