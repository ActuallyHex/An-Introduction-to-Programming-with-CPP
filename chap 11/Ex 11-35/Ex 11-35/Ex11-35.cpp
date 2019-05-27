//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double dealerships[3] = {};
	double sales = 0.0;
	double total = 0.0;

	//a for loop that goes through each index of the array
	for (int sub = 0; sub < 3; sub++) {
		sales = 0.0;
		//a while loop that allows the used to add to a dealership
		while (sales != -1) {
			cout << "Sales amount for Dealership #" << sub + 1 << ": ";
			cin >> sales;
			if (sales != -1)
				dealerships[sub] += sales;
		}
		total += dealerships[sub];
		cout << endl;
	}

	//output the total amount
	cout << fixed << setprecision(2);
	cout << "Total sales: $" << total << endl;

	//output the percentages
	cout << fixed << setprecision(1);
	for (int x = 0; x < 3; x++) {
		cout << "Dealership #" << x + 1 << " contribution percentage: %" <<
			(dealerships[x] / total) * 100 << endl;
	}

	system("pause");
	return 0;
}
