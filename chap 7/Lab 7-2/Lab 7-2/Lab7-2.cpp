//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double GROWTH_RATE = 0.055;
	double sales = 0.0;
	double annualIncreases = 0.0;
	int years = 0;

	cout << "Current year's sales: ";
	cin >> sales;
	while (sales < 150000.0) {
		annualIncreases = sales * GROWTH_RATE;
		sales += annualIncreases;
		years += 1;
	}

	cout << fixed << setprecision(2);
	cout << "Sales " << years << " years from now: $" << sales << endl;

	system("pause");
	return 0;
}