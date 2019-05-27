//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void membershipStandard(double, double &);
void membershipPlus(double, double &);
void membershipPremium(double, double &);

int main() {
	double purchases = 0.0;
	int membership = 0;
	double points = 0.0;

	cout << "Total monthly purchase: $";
	cin >> purchases;
	cout << "Membership type: " << endl <<
		"(1) Standard" << endl <<
		"(2) Plus" << endl <<
		"(3) Premium" << endl;
	cin >> membership;

	switch (membership) {
	case 1:
		membershipStandard(purchases, points);
		break;
	case 2:
		membershipPlus(purchases, points);
		break;
	case 3:
		membershipPremium(purchases, points);
		break;
	default:
		cout << "Invalid membership type." << endl;
	}

	cout << fixed << setprecision(0);
	cout << "Total reward points: " << points << endl;

	system("pause");
	return 0;
}

void membershipStandard(double purchases, double &rewards) {
	if (purchases < 75)
		rewards = purchases * .05;
	else if (purchases >= 75 && purchases <= 149.99)
		rewards = purchases * .075;
	else if (purchases >= 150)
		rewards = purchases * .1;
}

void membershipPlus(double purchases, double &rewards) {
	if (purchases < 150)
		rewards = purchases * .06;
	else if (purchases >= 150)
		rewards = purchases * .13;
}

void membershipPremium(double purchases, double &rewards) {
	if (purchases < 200)
		rewards = purchases * .04;
	else if (purchases >= 200)
		rewards = purchases * .15;
}