//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getPayment(int, double, int);

int main() {
	int carPrice = 0;
	int rebate = 0;
	double creditRate = 0.0;
	double dealerRate = 0.0;
	int term = 0;
	double creditPayment = 0.0;
	double dealerPayment = 0.0;
	char cont = 'Y';


	while (cont == 'Y') {
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

		if (creditRate >= 1.0)
			creditRate /= 100.0;
		if (dealerRate >= 1.0)
			dealerRate /= 100.0;


		creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
		dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);

		cout << fixed << setprecision(2) << endl;
		cout << "Credit union payment: $" << creditPayment << endl;
		cout << "Dealer payment: $" << dealerPayment << endl;

		if (creditPayment < dealerPayment)
			cout << "Take the rebate and finance through the credit union.";
		else if (creditPayment > dealerPayment)
			cout << "Don't take the rebate. Finance through the dealer.";
		else if (creditPayment == dealerPayment)
			cout << "You can finance through the dealer or the credit union.";
		cout << endl;

		cout << "Calculate again? (Y/N): ";
		cin >> cont;
		cont = toupper(cont);
		cout << endl;
	}
	
	system("pause");
	return 0;
}

double getPayment(int prin, double monthRate, int months) {
	double monthPay = 0.0;
	monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
	return monthPay;
}