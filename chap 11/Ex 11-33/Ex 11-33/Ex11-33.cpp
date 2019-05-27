//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int max[4] = { 10, 50, 100, 99999 };
	int shipping[4] = { 15, 10, 5, 0 };
	int order = 0;

	cout << "Order amount: ";
	cin >> order;
	while (order > 0) {
		cout << "Shippig charge: ";
		for (int sub = 0; sub < 4; sub++) {
			if (order < max[sub] && order > max[sub - 1])
				cout << shipping[sub] << endl;
			else if (order == max[sub])
				cout << shipping[sub] << endl;
		}
		cout << "Order amount: ";
		cin >> order;
	}

	system("pause");
	return 0;
}
