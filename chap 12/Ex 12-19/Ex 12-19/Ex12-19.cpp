//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int codesAndRates[5][2] = { {3, 8}, {6, 14}, {7, 18}, {9, 20}, {11, 23} };
	int payCode = 0;
	int row = 0;

	cout << "Pay code (3, 6, 7, 9, or 11). " << endl;
	cout << "Enter a negative number to end: ";
	cin >> payCode;

	while (payCode >= 0) {
		row = 0;
		while (row <= 4 && codesAndRates[row][0] != payCode)
			row += 1;

		if (row <= 4)
			cout << "Pay rate for pay code " << payCode << ": $" << codesAndRates[row][1] << endl << endl;
		else
			cout << "Invalid pay code" << endl << endl;

		cout << "Pay code (3, 6, 7, 9, or 11). " << endl;
		cout << "Enter a negative number to end: ";
		cin >> payCode;
	}

	system("pause");
	return 0;
}