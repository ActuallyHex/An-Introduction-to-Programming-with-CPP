//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string date = "";

	cout << "Enter a date (mm/dd/yy). Enter -1 to end. ";
	getline(cin, date);

	while (date != "-1") {
		if (date.length() != 8)
			cout << "Invalid length" << endl << endl;
		else
			if (date.substr(2, 1) != "/" && date.substr(5, 1) != "/")
				cout << "Invalid third character" << endl << endl;
			else {
				date.insert(6, "20");
				cout << date << endl << endl;
			}

		cout << "Enter a date (mm/dd/yy). Enter -1 to end. ";
		getline(cin, date);
	}

	system("pause");
	return 0;
}