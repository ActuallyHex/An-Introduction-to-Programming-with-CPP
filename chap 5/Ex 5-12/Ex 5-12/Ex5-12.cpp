//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double item1 = 0.0;
	double item2 = 0.0;
	double total = 0.0;

	cout << "Enter the price of item 1: $";
	cin >> item1;
	cout << "Enter the price of item 2: $";
	cin >> item2;

	if (item1 > item2) {
		item2 *= .5;
	}
	else {
		item1 *= .5;
	}
	if (item1 == item2) {
		item2 *= .5;
	}

	total = item1 + item2;
	cout << "Your total is: $" << fixed << setprecision(2) << total << endl;

	system("pause");
	return 0;
}
