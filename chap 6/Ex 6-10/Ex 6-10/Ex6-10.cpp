//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int sales = 0;
	double commission = 0.0;


	cout << "Sales amount: ";
	cin >> sales;

	if (sales < 0)
		commission = -1;
	else if (sales <= 100000)
		commission = sales * 0.02;
	else if (sales <= 400000)
		commission = sales * 0.05;
	else
		commission = sales * 0.09;

	if (commission != -1) {
		cout << fixed << setprecision(2);
		cout << "Commission: $" << commission << endl;
	}
	else
		cout << "Sales cannot be less than 0." << endl;

	system("pause");
	return 0;
}