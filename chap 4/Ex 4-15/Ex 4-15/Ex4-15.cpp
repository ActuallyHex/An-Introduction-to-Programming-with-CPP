//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int single;
	int dual;
	int family;
	double total;

	const double COST_SINGLE = 99.0;
	const double COST_DUAL = 175.0;
	const double COST_FAMILY = 225.0;

	cout << "Number of individual memberships: ";
	cin >> single;
	cout << "Number of dual memberships: ";
	cin >> dual;
	cout << "Number of family memberships: ";
	cin >> family;

	total = (single * COST_SINGLE) + (dual * COST_DUAL) + (family * COST_FAMILY);
	cout << "Total revenue by the individual memberships: $" << (single * COST_SINGLE) << endl;
	cout << "Total revenue by the dual memberships: $" << (dual * COST_DUAL) << endl;
	cout << "Total revenue by the family memberships: $" << (family * COST_FAMILY) << endl;
	cout << "Total revenue by all the meberships: $" << total << endl;

	system("pause");
	return 0;
}