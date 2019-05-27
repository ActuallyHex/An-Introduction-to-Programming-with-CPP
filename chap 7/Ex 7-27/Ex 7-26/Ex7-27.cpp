//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const double RATE = 0.2;
	int sales = 0;
	double commission = 0.0;
	double totalSales = 0.0;
	double average = 0.0;
	int counter = 0;
	
	cout << "First salesperson's sales (-1 to stop): ";
	cin >> sales;

	counter += 1;
	totalSales += sales;
	while (sales != -1) {
		commission = sales * RATE;

		cout << "Commission: $" << commission << endl << "Next salesperson's sales (-1 to stop): ";
		cin >> sales;
		totalSales += sales;
		average += commission;
		counter += 1;
	}

	cout << fixed << setprecision(2);
	counter -= 1;
	totalSales += 1;
	average = average / counter;
	cout << "Total sales: $" << totalSales << endl;
	cout << "Sales amount entered: " << counter << endl;
	cout << "Commission average: $" << average << endl;

	system("pause");
	return 0;
}