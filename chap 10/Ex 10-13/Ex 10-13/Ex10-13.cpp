//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getPayment(int, double, int, double &);

int main() {
	int carPrice = 0;
	int rebate = 0;
	double creditRate = 0.0;
	double dealerRate = 0.0;
	int term = 0;
	double creditPayment = 0.0;
	double dealerPayment = 0.0;

	cout << "Car price (after any trade-in): ";
	cin >> carPrice;
	cout << "Rebate: ";
	cin >> rebate;
	cout << "Credit union rate: ";
	cin >> creditRate;
	cout << "Dealer rate: ";
	cin >> dealerRate;
	cout << "Term in years: ";
	cin >> term;

	getPayment(carPrice - rebate, creditRate / 12, term * 12, creditPayment);
	getPayment(carPrice, dealerRate / 12, term * 12, dealerPayment);

	cout << fixed << setprecision(2) << endl;
	cout << "Credit union payment: $" << creditPayment << endl;
	cout << "Dealer payment: $" << dealerPayment << endl;

	system("pause");
	return 0;
}

void getPayment(int prin, double monthRate, int months, double &payment) {
	double monthPay = 0.0;
	monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
	if (1 - pow(monthRate + 1, -months) == 0)
		payment = -1;
	else
		payment = monthPay;
}