//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num = 0;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> num;

	while (num >= 0) {
		sum += num;
		cout << "Enter a number: ";
		cin >> num;
	}

	cout << "Sum value is: " << sum << endl;

	system("pause");
	return 0;
}