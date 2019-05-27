//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int multiplicand = 0;
	int num = 1;
	cout << "Enter the multiplicand: ";
	cin >> multiplicand;

	cout << "Multiplication table for the number " << multiplicand << endl;
	for (int num = 1; num <= 10; num += 1) {
		cout << "           " << multiplicand << " * " << num << " = " << (num * multiplicand) << endl;
	}

	/*while (num < 11) {
		cout << "           " << multiplicand << " * " << num << " = " << (num * multiplicand) << endl;
		num += 1;
	}*/

	 
	system("pause");
	return 0;
}