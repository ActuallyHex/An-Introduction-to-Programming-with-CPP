//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double total = 0.0;
	char coupon = ' ';
	double discount = 0.0;
	int large = 0;
	int medium = 0;
	double priceLarge = 0.0;
	double priceMedium = 0.0;

	cout << "Number of Large Pizzas: ";
	cin >> large;
	cout << "Number of Medium Pizzas: ";
	cin >> medium;

	if (large <= 0 || medium <= 0)
		cout << "Please enter a valid number" << endl;
	else {
		priceLarge = 12.99 * large;
		priceMedium = 9.99 * medium;
		cout << "$2 coupon (Y/N)? ";
		cin >> coupon;
		if (toupper(coupon) == 'Y')
				priceLarge -= 2;
		
		if (large + medium > 4)
			discount = (priceLarge + priceMedium) * .1;

		total = priceLarge + priceMedium - discount;
		cout << fixed << setprecision(2);
		cout << "Number of pizzas ordered: " << large + medium << endl;
		cout << "The total price of pizzas: $" << total << endl;
	}

	system("pause");
	return 0;
}
