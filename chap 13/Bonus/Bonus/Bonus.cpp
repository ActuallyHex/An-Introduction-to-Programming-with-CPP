//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	const double RATE = 0.1;
	string sales = "";
	string currentChar = "";
	int sub = 0;
	double bonus = 0.0;

	cout << "Sales: ";
	getline(cin, sales);

	while (sub < sales.length()) {
		currentChar = sales.substr(sub, 1);
		if (currentChar < "0" || currentChar > "9")
			sales.erase(sub, 1);
		else
			sub += 1;
	}

	bonus = stod(sales) * RATE;

	cout << fixed << setprecision(2) << endl;
	cout << "Sales amount: " << sales << endl;
	cout << "Bonus amount: " << bonus << endl;

	system("pause");
	return 0;
}