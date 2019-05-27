//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int people = 0;
	int cost = 0;

	cout << "Number of registrants: ";
	cin >> people;

	if (people <= 0)
		cout << "Invalid number" << endl;
	else {
		if (people >= 1 && people <= 5)
			cost = people * 125;
		else if (people >= 6 && people <= 20)
			cost = people * 100;
		else if (people >= 21)
			cost = people * 75;

		cout << "Total cost: $" << cost << endl;
	}

	system("pause");
	return 0;
}