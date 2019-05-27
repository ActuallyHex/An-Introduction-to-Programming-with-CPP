//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sales = 0.0;
	double bonus = 0.0;
	const double RATE1 = 0.02;
	const double RATE2 = 0.015;

	cout << "Enter sales amount: ";
	cin >> sales;

	if (sales >= 15000)
		bonus = sales * RATE1;
	else
		bonus = sales * RATE2;

	cout << "The bonus is: $" << fixed << setprecision(2) << bonus << endl;

	system("pause");
	return 0;
}