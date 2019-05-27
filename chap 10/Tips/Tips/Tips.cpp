//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void getTips(double bill, double &percent15, double &percent20);

int main() {
	double totalBill = 0.0;
	double tip15 = 0.0;
	double tip20 = 0.0;

	cout << "Total bill: ";
	cin >> totalBill;

	getTips(totalBill, tip15, tip20);
	cout << fixed << setprecision(2);
	cout << "15% tip: $" << tip15 << endl;
	cout << "20% tip: $" << tip20 << endl;

	system("pause");
	return 0;
}

void getTips(double bill, double &percent15, double &percent20) {
	percent15 = bill * 0.15;
	percent20 = bill * 0.2;
}