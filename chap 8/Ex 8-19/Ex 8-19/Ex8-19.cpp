//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;
	double total = 0.0;
	int quit = 0;

	do {
		while (d1 != -1) {
			cout << "Sales for Dealership 1 (-1 to Stop): ";
			cin >> d1;
			total += d1;
		}
		cout << endl;
		while (d2 != -1) {
			cout << "Sales for Dealership 2 (-1 to Stop): ";
			cin >> d2;
			total += d2;
		} 
		cout << endl;
		while (d3 != -1) {
			cout << "Sales for Dealership 3 (-1 to Stop): ";
			cin >> d3;
			total += d3;
		} 
		cout << endl;
		cout << "Enter '-1' to quit ";
		cin >> quit;
		total += 3;
	} while (quit != -1);

	cout << fixed << setprecision(2) << endl;
	cout << "Total sales: $" << total << endl;

	system("pause");
	return 0;
}