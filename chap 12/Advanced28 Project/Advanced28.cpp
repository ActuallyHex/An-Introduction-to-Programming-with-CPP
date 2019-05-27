//Advanced28.cpp - displays the pay rate 
//corresponding to the pay code entered by the user
//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int codesAndRates[7][2] = { {1, 8},
							   {2, 14},
							   {5, 10},
							   {6, 20},
							   {7, 15},
							   {9, 16},
							   {11, 20} };
	int payCode = 0;
	int less = 0;
	int greater = 0;

	cout << "Pay code (1, 2, 5, 6, 7, 9, or 11). " << endl;
	cout << "Enter a negative number or 0 to end: ";
	cin >> payCode;
	while (payCode > 0) {
		if (payCode == codesAndRates[3][0]) {
			cout << "Rate: " << codesAndRates[3][1] << endl;
		}
		else if (payCode > codesAndRates[3][0]) {
			for (int i = 4; i < 7; i++) {
				if (payCode == codesAndRates[i][0])
					cout << "Rate: " << codesAndRates[i][1] << endl;
			}
			greater += 1;
		}
		else if (payCode < codesAndRates[3][0]) {
			for (int i = 0; i < 4; i++) {
				if (payCode == codesAndRates[i][0])
					cout << "Rate: " << codesAndRates[i][1] << endl;
			}
			less += 1;
		}

		cout << "Greater: " << greater << endl;
		cout << "Less: " << less << endl << endl;

		cout << "Pay code (1, 2, 5, 6, 7, 9, or 11). " << endl;
		cout << "Enter a negative number or 0 to end: ";
		cin >> payCode;

	}

	system("pause");
	return 0;
}	//end of main function
