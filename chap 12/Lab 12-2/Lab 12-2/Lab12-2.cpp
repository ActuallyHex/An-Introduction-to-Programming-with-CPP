//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int shipCharges[3][2] = { {50, 20}, {100, 10}, {999999, 0} };
	int numOrdered = 0;
	int rowSub = 0;

	cout << "Number ordered (negative number or 0 to end): ";
	cin >> numOrdered;

	while (numOrdered > 0 && numOrdered <= 999999) {
		rowSub = 0;
		while (rowSub < 3 && numOrdered > shipCharges[rowSub][0])
			rowSub += 1;

		cout << "Shipping chage for a quantity of " << numOrdered << " is $" << shipCharges[rowSub][1] << endl << endl;

		cout << "Number ordered (negative number or 0 to end): ";
		cin >> numOrdered;
	}

	system("pause");
	return 0;
}