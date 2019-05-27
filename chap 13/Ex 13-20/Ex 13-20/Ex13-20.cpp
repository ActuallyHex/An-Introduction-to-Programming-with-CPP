//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string code = "";
	int charge = 0;

	cout << "Three-character shipping code (-1 to end): ";
	getline(cin, code);

	while (code != "-1") {
		if (code.length() == 3) {
			if ((code.substr(1, 1) >= "0" && code.substr(1, 1) <= "9") && (code.substr(2, 1) > "0" && code.substr(2, 1) <= "9")) {
				if (code.substr(0, 1) == "A" || code.substr(0, 1) == "B") {
					if (code.substr(0, 1) == "A")
						charge = 25;
					else
						charge = 30;

					cout << "Shipping charge: $" << charge << endl;
				}
				else
					cout << "Invalid first value" << endl;
			}
			else
				cout << "Invalid numeric values" << endl;
		}
		else
			cout << "Invalid value" << endl;

		cout << endl;
		cout << "Three-character shipping code (-1 to end): ";
		getline(cin, code);
	}

	system("pause");
	return 0;
}