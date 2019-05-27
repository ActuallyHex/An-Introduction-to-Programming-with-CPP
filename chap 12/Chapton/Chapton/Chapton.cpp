//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int orders[4][3] = { 0 };

	for (int region = 0; region < 4; region++) {
		for (int month = 0; month < 3; month++) {
			cout << "Region " << region + 1 << ", Month " << month + 1 << " orders: ";
			cin >> orders[region][month];
		}
	}

	cout << endl << "Array contents: " << endl;
	for (int region = 0; region < 4; region++) {
		cout << "Region " << region + 1 << ": " << endl;
		for (int month = 0; month < 3; month++)
			cout << "     Month " << month + 1 << ": " << orders[region][month] << endl;
	}

	system("pause");
	return 0;
}