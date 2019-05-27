//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string zipCode = "";

	cout << "Five-character ZIP code (-1 to end): ";
	cin >> zipCode;

	while (zipCode != "-1") {
		if (zipCode.length() == 5)
			cout << "-->Correct number of characters";
		else
			cout << "-->Incorrect number of characters";
		cout << endl << endl;

		cout << "Five-character ZIP code (-1 to end): ";
		cin >> zipCode;
	}

	system("pause");
	return 0;
}