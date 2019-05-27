//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int sales[10][3] = { {2400, 3500, 2000},
						 {1500, 7000, 1000},
						 {600, 450, 2100},
						 {790, 240, 500 },
						 {1000, 1000, 1000},
						 {6300, 7000, 8000},
						 {1300, 450, 700},
						 {2700, 5500, 6000},
						 {4700, 4800, 4900},
						 {1200, 1300, 400} };

	double total[10][2] = {};
	double bonus = 0.0;
	double bonusTotal = 0.0;

	cout << "Bonus rate: %";
	cin >> bonus;
	bonus /= 100.0;

	cout << fixed << setprecision(2) << endl;
	/*for (int i = 0; i < 10; i++) {
		cout << "Salesperson #" << i + 1 << endl;
		for (int j = 0; j < 3; j++) {
			total[i][0] += sales[i][j];
		}
		total[i][1] = total[i][0] * bonus;
		bonusTotal += total[i][1];
		cout << "Total sales: $" << total[i][0] << endl;
		cout << "Bonus rate: $" << total[i][1] << endl << endl;
	}*/

	cout << "Number     Sales ($)     Bonus ($)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << "          ";
		for (int j = 0; j < 3; j++) {
			total[i][0] += sales[i][j];
		}
		total[i][1] = total[i][0] * bonus;
		bonusTotal += total[i][1];
		cout << total[i][0] << "        " << total[i][1] << endl;
	}

	cout << "Total bonus paid to all salespople: $" << bonusTotal << endl;



	system("pause");
	return 0;
}
