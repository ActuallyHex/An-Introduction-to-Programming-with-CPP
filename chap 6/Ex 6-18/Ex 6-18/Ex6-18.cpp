//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int membership = 0;
	double purchases = 0.0;
	double reward = 0.0;


	cout << "Membershipt type: \n" <<
		"(1) Standard \n" <<
		"(2) Plus \n" <<
		"(3) Premium \n" << endl;
	cin >> membership;
	cout << "Monthly Purchaes: $";
	cin >> purchases;
	

	switch (membership) {
	case 1:
		if (purchases < 75)
			reward = purchases * 0.05;
		if (purchases >= 75 && purchases < 150)
			reward = purchases * 0.075;
		if (purchases >= 150)
			reward = purchases * 0.1;
		break;
	case 2:
		if (purchases < 150)
			reward = purchases * 0.06;
		if (purchases >= 150)
			reward = purchases * 0.13;
		break;
	case 3:
		if (purchases < 200)
			reward = purchases * 0.04;
		if (purchases >= 200)
			reward = purchases * 0.15;
		break;
	default:
		cout << "Invalid key" << endl;
	}

	cout << "Total reward points: " << reward << endl;


	system("pause");
	return 0;
}