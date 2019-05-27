//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double originalValue = 0.0;
	double depreciation = 0.0;
	double currentValue = 0.0;

	cout << "Origianl value: ";
	cin >> originalValue;
	cout << endl << fixed << setprecision(0);

	for (double rate = 0.15; rate < 0.26; rate += 0.05) {
		cout << "Depreciation rate: " << rate * 100 << "%" << endl;
		cout << "Value after year: " << endl;

		currentValue = originalValue;
		int year = 1;
		while (year < 6) {
			depreciation = currentValue * rate;
			currentValue -= depreciation;
			cout << year << " $" << currentValue << endl;
			year += 1;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}