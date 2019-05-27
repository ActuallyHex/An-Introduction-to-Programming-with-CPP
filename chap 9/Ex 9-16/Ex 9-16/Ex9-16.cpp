//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int getSquared(int);
int getCubed(int);

int main() {
	int squared = 0;
	int cubed = 0;

	cout << "Number" << "   Square" << "    Cube" << endl;
	for (int i = 10; i <= 13; i++) {
		cout << "  " << i;
		squared = getSquared(i);
		cout << "      " << squared;
		cubed = getCubed(i);
		cout << "      " << cubed << endl;
	}

	system("pause");
	return 0;
}

int getSquared(int num) {
	int squared = 0;
	squared = pow(num, 2);
	return squared;
}

int getCubed(int num) {
	int cubed = 0;
	cubed = pow(num, 3);
	return cubed;
}