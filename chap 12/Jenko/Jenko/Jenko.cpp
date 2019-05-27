//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sales[3][2] = { {3567.85, 2589.99},
						   {3239.67, 2785.55},
						   {1530.50, 1445.80} };
	double total = 0.0;

	for (int store = 0; store < 3; store++) {
		for (int book = 0; book < 2; book++)
			total += sales[store][book];
	}

	cout << fixed << setprecision(2);
	cout << "Total sales: $" << total << endl;

	system("pause");
	return 0;
}