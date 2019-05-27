//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char code = ' ';
	double currentPay = 0.0;
	const double RATE1 = 0.045;
	const double RATE2 = 0.035;

	double raise = 0.0;

	double newPay = 0.0;


	cout << "Enter current pay: $";
	cin >> currentPay;
	cout << "Enter pay code: ";
	cin >> code;

	if (code == '1' || code == '4' || code == '9')
		raise = currentPay * RATE1;
	else
		raise = currentPay * RATE2;

	newPay = currentPay + raise;

	cout << "Your raise is: $" << newPay << endl;

	system("pause");
	return 0;


}