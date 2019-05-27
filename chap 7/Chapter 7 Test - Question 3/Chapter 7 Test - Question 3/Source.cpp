//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double interest = 0.0;

	cout << "Year                     Interest Earned" << endl;
	cout << fixed << setprecision(2);
	for (int year = 1; year <= 10; year++) {
		interest = 1000 * 0.05 * year;
		if (year == 10)
			cout << year << "                       " << interest << endl;
		else
			cout << year << "                        " << interest << endl;
	}

	system("pause");
	return 0;
}