//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

char verifyNumber(string, int);

int main() {
	string item;
	char verify = ' ';

	cout << "Item number: ";
	getline(cin, item);

	while (item != "-1") {
		verify = verifyNumber(item, 3);
		if (verify == 'Y' && item.length() == 6) {
			if (item.substr(3, 1) == "-") {
				verify = verifyNumber(item, 2);
				if (verify == 'Y')
					cout << "Correct format" << endl;
				else
					cout << "Incorrect format" << endl;
			}
			else
				cout << "Incorrect format" << endl;
		}
		else
			cout << "Incorrect format" << endl;

		cout << endl;
		cout << "Item number: ";
		getline(cin, item);
	}

	system("pause");
	return 0;
}

char verifyNumber(string item, int length) {
	char number = 'Y';
	int i = 0;

	while (i < length && number == 'Y') {
		if (item.substr(i, 1) >= "0" && item.substr(i, 1) <= "9")
			i += 1;
		else
			number = 'N';
	}

	return number;
}