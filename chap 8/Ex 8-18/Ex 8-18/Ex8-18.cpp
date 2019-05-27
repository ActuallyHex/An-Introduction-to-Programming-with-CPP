//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double salary = 0.0;
	double newSalary = 0.0;
	double x = 0.0;

	cout << "Current salary: ";
	cin >> salary;
	while (salary > 0) {
		for (double rate = 0.03; rate < 0.07; rate += 0.01) {
			cout << "%" << setprecision(0) << rate * 100 << endl;
			x = salary;
			for (int year = 1; year <= 3; year += 1) {
				newSalary = (rate + 1) * x;
				cout << fixed << setprecision(2);
				cout << "   " << "Year #" << year << "   " << newSalary << endl;
				x = newSalary;
			}
		}
		cout << endl;
		cout << "Current salary: ";
		cin >> salary;
	}
	

	system("pause");
	return 0;
}