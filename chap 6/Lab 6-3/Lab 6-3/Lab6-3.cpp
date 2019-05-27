//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

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
			price = 9.99;
			cout << "$2 coupon (Y/N)? ";
			cin >> coupon;
			if (toupper(coupon) == 'Y')
				price -= 2;
		}
		else {
			price = 12.99;
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
