//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

char verifyNumber(string ssn);

int main() {
	string ssn = "";
	char isNumber = ' ';
	cout << "Nine-character Social Security number: ";
	getline(cin, ssn);

	if (ssn.length() == 9) {
		isNumber = verifyNumber(ssn);
		if (isNumber == 'Y') {
			ssn.insert(3, "-");
			ssn.insert(6, "-");
			cout << "Social security number: " << ssn << endl;
		}
		else
			cout << "Not a numerical value" << endl;
	}
	else
		cout << "The number must contain 9 characters" << endl;

	system("pause");
	return 0;
}	

char verifyNumber(string ssn) {
	char number = 'Y';
	int i = 0;

	while (i < 9 && number == 'Y') {
		if (ssn.substr(i, 1) >= "0" && ssn.substr(i, 1) <= "9")
			i += 1;
		else
			number = 'N';
	}

	return number;
}