//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double getBalance(int amount, double rate, int y);

int main() {
	int deposit = 0;
	double interestRate = 0.0;
	double rateMax = 0.0;
	double rateMin = 0.0;
	double acctBalance = 0.0;

	cout << "Deposit: ";
	cin >> deposit;
	cout << "Minimum rate (in decimal form): ";
	cin >> rateMin;
	cout << "Maximum rate (in decimal form): ";
	cin >> rateMax;

	for (double x = rateMin; x <= rateMax; x += .01) {
		cout << "Rate " << setprecision(0) << x * 100 << "%:" << endl;
		for (int year = 1; year < 4; year += 1) {
			cout << fixed << setprecision(2);
			cout << "    ";
			acctBalance = getBalance(deposit, x, year);
			cout << "Year " << year << ": $" << acctBalance << endl;
		}
	}
	


	system("pause");
	return 0;
}

double getBalance(int amount, double rate, int y) {
	double balance = 0.0;
	balance = amount * pow((1 + rate), y);
	return balance;
}