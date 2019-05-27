//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int level = 0;
	cout << "Level (1 through 5): ";
	cin >> level;
	switch (level) {
	case 1:
		cout << "Bronze" << endl;
		break;
	case 2:
		cout << "Bronze" << endl;
		break;
	case 3:
		cout << "Silver" << endl;
		break;
	case 4:
		cout << "Gold" << endl;
		break;
	case 5:
		cout << "Gold" << endl;
		break;
	default:
		cout << "Invalid ID" << endl;
		break;
	}

	system("pause");
	return 0;
}