//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double salary = 0.0;
	char position = ' ';
	double newPay = 0.0;

	cout << "Current salary: $";
	cin >> salary;
	cout << "(M)anagement or (O)ffice worker?: ";
	cin >> position;

	position = toupper(position);

	if (position == 'M')
		newPay = salary * 0.075;
	else if (position == 'O')
		newPay = salary * 0.045;

	cout << fixed << setprecision(2);
	cout << "Raise amount: $" << newPay << endl;
	cout << "Total amount: $" << newPay + salary << endl;


	system("pause");
	return 0;
}