//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double price = 0.0;
	char customer = ' ';

	cout << "Total charge of purchase: $";
	cin >> price;

	price += 0.5;

	cout << "Preferred customer? (Y/N): ";
	cin >> customer;

	customer = toupper(customer);

	if (customer == 'Y')
		price = price - (price * .1);

	cout << fixed << setprecision(2);
	cout << "Total: $" << price << endl;

	system("pause");
	return 0;
}