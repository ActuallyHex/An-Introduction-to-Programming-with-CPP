//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int company[2][6] = { {75000, 30200, 67800, 45000, 60000, 67500},
						  {40000, 75000, 64000, 32600, 47800, 39000} };
	int companySales = 0;

	for (int location = 0; location < 2; location++) {
		for (int month = 0; month < 6; month++)
			companySales += company[location][month];
	}

	cout << "Company sales: $" << companySales << endl;

	system("pause");
	return 0;
}