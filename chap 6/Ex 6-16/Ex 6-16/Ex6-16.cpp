//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int largest = 0;
	int smallest = 0;
	int nothing = 0;

	cout << "First integer: ";
	cin >> num1;
	cout << "Second integer: ";
	cin >> num2;
	cout << "Third integer: ";
	cin >> num3;

	cout << endl;



	if (num1 > num2 && num1 > num3)
		largest = num1;
	else if (num1 < num2 && num1 < num3)
		smallest = num1;

	if (num2 > num1 && num2 > num3)
		largest = num2;
	else if (num2 < num1 && num2 < num3)
		smallest = num2;
	else if (num2 > num1 && num2 < num3)
		nothing = num2;
	else if (num2 < num1 && num2 > num3)
		nothing = num2;

	if (num3 > num1 && num3 > num2)
		largest = num3;
	else if (num3 < num1 && num3 < num2)
		smallest = num3;

	cout << "Largest number: " << largest << endl;
	cout << "Smallest number: " << smallest << endl;

	system("pause");
	return 0;
}