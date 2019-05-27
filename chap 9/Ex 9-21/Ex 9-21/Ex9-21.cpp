//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double getMediumPrice();
double getLargePrice();

int main() {
	char size = ' ';
	char coupon = ' ';
	double price = 0.0;

	cout << "M(edium) or L(arge) pizza? ";
	cin >> size;
	size = toupper(size);

	if (size != 'M' && size != 'L')
		cout << "Please enter either M or L." << endl;
	else {
		if (size == 'M') {
			price = getMediumPrice();
			cout << "$1 coupon (Y/N)? ";
			cin >> coupon;
			if (toupper(coupon) == 'Y')
				price -= 1;
		}	
		else {
			price = getLargePrice();
			cout << "$2 coupon (Y/N)? ";
			cin >> coupon;
			if (toupper(coupon) == 'Y')
				price -= 2;
		}
		cout << fixed << setprecision(2);
		cout << "Price: $" << price << endl;
	}

	system("pause");
	return 0;
}

double getMediumPrice() {
	double price = 9.99;
	return price;
}

double getLargePrice() {
	double price = 12.99;
	return price;
}