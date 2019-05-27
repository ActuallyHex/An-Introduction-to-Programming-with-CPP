//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int rows = 5;
	int asterisk = 1;

	for (rows = 5; rows > 0; rows -= 1) {
		asterisk = 1;
		for (asterisk = 1; asterisk <= rows; asterisk += 1) {
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}