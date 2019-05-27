//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double shippingStandard(double);
double shippingPremium(double);

int main() {
	double price = 0.0;
	double shipping = 0.0;
	double total = 0.0;
	char membership = ' ';

	cout << "Total due before shipping: $";
	cin >> price;
	cout << "Membership type: " << endl
		<< "(S)tandard" << endl
		<< "(P)remium" << endl;
	cin >> membership;

	switch (toupper(membership)) {
	case 'S':
		shipping = shippingStandard(price);
		break;
	case 'P':
		shipping = shippingPremium(price);
		break;
	default:
		cout << "Invalid value." << endl;
	}

	total = price + shipping;

	cout << fixed << setprecision(2);
	cout << "Total cost: $" << total << endl;

	system("pause");
	return 0;
}

double shippingStandard(double price) {
	double shipping = 0.0;

	if (price >= 0 && price <= 100)
		shipping = 12.99;
	else if (price > 100)
		shipping = 4.99;

	return shipping;
}

double shippingPremium(double price) {
	double shipping = 0.0;

	if (price >= 0 && price < 50)
		shipping = 4.99;
	else if (price >= 50)
		shipping = 0;

	return shipping;
}