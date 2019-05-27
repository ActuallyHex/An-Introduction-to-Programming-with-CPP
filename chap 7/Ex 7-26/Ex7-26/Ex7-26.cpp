//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x = 1;
	int y = 0;
	int sum = 0;
	int counter = 0;

	cout << x << "   ";

	while (counter < 9) {
		sum = x + y;
		cout << sum << "   ";
		y = x;
		x = sum;
		counter += 1;
	}

	x = 1;
	y = 0;
	sum = 0;
	counter = 0;

	cout << endl;
	cout << x << "   ";
	for (counter = 0; counter < 9; counter += 1) {
		sum = x + y;
		cout << sum << "   ";
		y = x;
		x = sum;
	}

	system("pause");
	return 0;
}