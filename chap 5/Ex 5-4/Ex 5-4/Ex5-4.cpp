//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	double units = 0.0;
	double total = 0.0;

	cout << "Enter a value: ";
	cin >> units;

	if (units <= 0)
		cout << "Entry error" << endl;
	else {
		total = units * 5;
		cout << total << endl;
	}
		

	system("pause");
	return 0;
}