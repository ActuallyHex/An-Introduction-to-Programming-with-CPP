//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

char verifyNumeric(string zip, int);

int main() {
	string zipCode = "";
	char isAllNumbers = ' ';

	cout << "Five-character or Nine-character ZIP code (-1 to end): ";
	cin >> zipCode;

	while (zipCode != "-1") {
		if (zipCode.length() == 5 || zipCode.length() == 9 || (zipCode.length == 10 && zipCode.substr(5,1) == "-")) {
			cout << "-->Correct number of characters";
			if (zipCode.substr(5, 1) == "-") {
				zipCode.erase(5, 1);
			}
			isAllNumbers = verifyNumeric(zipCode, zipCode.length());
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

char verifyNumeric(string zip, int length) {
	string currentChar = "";
	int sub = 0;
	char isANumber = 'Y';

	while (sub < length && isANumber == 'Y') {
		currentChar = zip.substr(sub, 1);
		if (currentChar >= "0" && currentChar <= "9")
			sub += 1;
		else
			isANumber = 'N';

	}
	return isANumber;
}