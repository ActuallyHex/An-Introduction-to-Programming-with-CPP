//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void getBalance(int amount, double rate, int y, double &);

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
			getBalance(deposit, x, year, acctBalance);
			cout << "Year " << year << ": $" << acctBalance << endl;
		}
	}



	system("pause");
	return 0;
}

void getBalance(int amount, double rate, int y, double &balance) {
	balance = amount * pow((1 + rate), y);
}