//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void shippingStandard(double, double &);
void shippingPremium(double, double &);

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
		shippingStandard(price, shipping);
		break;
	case 'P':
		shippingPremium(price, shipping);
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

void shippingStandard(double price, double &shipping) {
	if (price >= 0 && price <= 100)
		shipping = 12.99;
	else if (price > 100)
		shipping = 4.99;
}

void shippingPremium(double price, double &shipping) {
	if (price >= 0 && price < 50)
		shipping = 4.99;
	else if (price >= 50)
		shipping = 0;
}