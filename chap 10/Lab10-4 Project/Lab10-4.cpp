//Mukhammad Mirsodikov - P2

#include <iomanip>
#include <iostream>
using namespace std;

void getNewPay(double current, double increase, double &newPay);
void getRaise(double current, double rate, double &increase);

int main() {
	double currentSalary = 0.0;
	double newSalary = 0.0;
	double raise = 0.0;
	double raiseRate = 0.0;

	cout << "Current salary: ";
	cin >> currentSalary;
	cout << "Raise rate (in decimal form): ";
	cin >> raiseRate;

	getRaise(currentSalary, raiseRate, raise);
	getNewPay(currentSalary, raise, newSalary);

	cout << fixed << setprecision(2);
	cout << "Raise: $" << raise << endl;
	cout << "New salary: $" << newSalary << endl;

	system("pause");
	return 0;
}

void getRaise(double current, double rate, double &increase) {
	increase = current * rate;
}

void getNewPay(double current, double increase, double &newPay) {
	newPay = current + increase;
}

