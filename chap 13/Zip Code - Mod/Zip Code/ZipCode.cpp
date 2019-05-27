//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char verifyNumeric(string zip);

int main() {
	string zipCode = "";
	char isAllNumbers = ' ';

	cout << "Five-character ZIP code (-1 to end): ";
	cin >> zipCode;

	while (zipCode != "-1") {
		if (zipCode.length() == 5) {
			cout << "-->Correct number of characters";
			isAllNumbers = verifyNumeric(zipCode);
			if (isAllNumbers == 'Y')
				cout << endl << "-->All numbers";
			else
				cout << endl << "-->Not all numbers";
		}
		else
			cout << "-->Incorrect number of characters";
		cout << endl << endl;

		cout << "Five-character ZIP code (-1 to end): ";
		cin >> zipCode;
	}

	system("pause");
	return 0;
}

char verifyNumeric(string zip) {
	string currentChar = "";
	int sub = 0;
	char isANumber = 'Y';

	while (sub < 5 && isANumber == 'Y') {
		currentChar = zip.substr(sub, 1);
		if (currentChar >= "0" && currentChar <= "9")
			sub += 1;
		else
			isANumber = 'N';

	}
	return isANumber;
}