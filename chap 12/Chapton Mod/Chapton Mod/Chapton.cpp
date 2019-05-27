//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int nums[4][3]);

int main() {
	int orders[4][3] = { 0 };

	for (int region = 0; region < 4; region++) {
		for (int month = 0; month < 3; month++) {
			cout << "Region " << region + 1 << ", Month " << month + 1 << " orders: ";
			cin >> orders[region][month];
		}
	}
	
	displayArray(orders);

	system("pause");
	return 0;
}

void displayArray(int nums[4][3]) {
	cout << endl << "Array contents:" << endl;
	for (int region = 0; region < 4; region += 1) {
		cout << "Region " << region + 1 << ": " << endl;
		for (int month = 0; month < 3; month++)
			cout << "     Month " << month + 1 << ": " << nums[region][month] << endl;
	}
}