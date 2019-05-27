//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double balance = 0.0;
	double deposits = 0.0;
	double withdrawals = 0.0;
	double totalDeposits = 0.0;
	double totalWithdrwal = 0.0;
	double total = 0.0;
	int num1 = 0;
	int num2 = 0;

	cout << "Beginning balance: $";
	cin >> balance;
	cout << "Number of deposits: ";
	cin >> num1;
	cout << "Number of withdrawals: ";
	cin >> num2;
	cout << endl;

	for (int num3 = 1; num3 <= num1; num3 += 1) {
		cout << "Deposit amount: $";
		cin >> deposits;
		totalDeposits += deposits;
		cout << endl;
	}

	for (int num4 = 1; num4 <= num2; num4 += 1) {
		cout << "Withdrawal amount: $";
		cin >> withdrawals;
		totalWithdrwal += withdrawals;
		cout << endl;
	}

	cout << fixed << setprecision(2);
	total = balance + totalDeposits + -totalWithdrwal;
	cout << "Ending balance: $" << total << endl;

	system("pause");
	return 0;
}