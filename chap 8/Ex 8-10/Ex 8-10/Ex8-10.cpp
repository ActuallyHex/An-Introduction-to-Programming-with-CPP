//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int rows = 5;
	int asterisk = 1; 

	while (rows > 0) {
		asterisk = 1;
		do {
			cout << "*";
			asterisk += 1;
		} while (asterisk <= rows);
		cout << endl;
		rows -= 1;
	}

	system("pause");
	return 0;
}