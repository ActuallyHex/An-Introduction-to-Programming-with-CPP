//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int maxRows = 0;

	cout << "Maximum number of rows: ";
	cin >> maxRows;

	for (int row = 0; row < maxRows; row += 1) {
		for (int space = 0; space < maxRows - row; row += 1)
			cout << " ";

		for (int asterisk = 0; asterisk <= row; asterisk += 1)
			cout << "* ";

		cout << endl;
	}

	system("pause");
	return 0;
}