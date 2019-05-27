//Mukahmmad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int number = 0;
	cout << "Enter a number: ";
	cin >> number;

	switch (number) {
	case 1:
	case 2:
	case 3:
		number = number * 2;
		break;
	case 4:
	case 5:
		number = number + 5;
		break;
	default:
		number = number - 50;
	}
	cout << "Final number: " << number << endl;
	system("pause");
	return 0;
}