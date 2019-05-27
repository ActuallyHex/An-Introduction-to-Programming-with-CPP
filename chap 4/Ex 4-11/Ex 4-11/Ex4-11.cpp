//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {

	double balance = 0.0;
	double deposits = 0.0;
	double withdrawals = 0.0;
	double total = 0.0;

	cout << "Enter the beginning balance: ";
	cin >> balance;
	cout << "Enter the total deposits: ";
	cin >> deposits;
	cout << "Enter the total withdrawals: ";
	cin >> withdrawals;

	total = (balance - withdrawals) + deposits;
	cout << "Your total balance is: $" << total << endl;

	system("pause");
	return 0;

}