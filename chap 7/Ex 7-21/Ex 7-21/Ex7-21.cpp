//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double price = 0.0;
	double discountAmount = 0.0;
	double discountPrice = 0.0;

	cout << "Item price: $";
	cin >> price;
	cout << endl;
	for (double discountRate = 10.0; discountRate <= 40.0; discountRate += 5.0) {
		cout << setprecision(0) << discountRate << "% Discount" << endl;
		discountAmount = price * (discountRate / 100.0);
		discountPrice = price - discountAmount;
		cout << fixed << setprecision(2);
		cout << "Discount amount: $" << discountAmount << endl;
		cout << "Discount price: $" << discountPrice << endl;
		cout << endl;
	}


	system("pause");
	return 0;
}