//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int employee = 0;
	int hours = 0;
	double wage = 0;
	int num = 0;
	double pay = 0.0;
	double overtime = 0.0;
	double extra = 0.0;

	cout << "Number of employees: ";
	cin >> employee;

	for (num = 1; num <= employee; num += 1) {
		cout << "Employee #" << num << endl;
		cout << "Hours worked: ";
		cin >> hours;
		cout << "Hourly rate: $";
		cin >> wage;
		if (hours > 40) {
			extra = wage * 1.5;
			overtime = (hours - 40) * extra;
			pay = 40 * wage + overtime;
		}
		else
			pay = hours * wage;

		cout << fixed << setprecision(2);
		cout << "Weekly gross pay: $" << pay << endl;
		cout << endl;
	}


	system("pause");
	return 0;
}