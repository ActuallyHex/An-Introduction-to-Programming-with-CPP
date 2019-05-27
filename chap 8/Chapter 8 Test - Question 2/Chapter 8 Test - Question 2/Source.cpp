//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {

	for (int row = 1; row < 7; row++) {
		cout << row << "	";

		for (int col = 0; col < 9; col++) {
			cout << row * col << "	";
		}

		cout << endl << endl;
	}

	system("pause");
	return 0;
}