//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double sales = 0.0;
	double commission = 0.0;

	cout << "Sales amount: ";
	cin >> sales;

	if (sales < 0)
		cout << "Invalid number" << endl;
	else {
		if (sales >= 0 && sales <= 20000)
			commission = sales * 0.05;
		else if (sales > 20000 && sales <= 50000)
			commission = (sales - 20000) * 0.07 + 1000;
		else if (sales > 50000)
			commission = (sales - 50000) * 0.1 + 3100;

		cout << fixed << setprecision(2);
		cout << "Commsission: $" << commission << endl;
	}


	system("pause");
	return 0;
}