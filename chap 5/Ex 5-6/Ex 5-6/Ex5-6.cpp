//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double salary = 0.0;
	double raise = 0.0;
	char department = ' ';

	cout << "Current salary: $";
	cin >> salary;
	cout << "Department (A, B, or C): ";
	cin >> department;

	if (toupper(department) == 'A' || toupper(department) == 'B')
		raise = salary * 1.02;
	else
		raise = salary * 1.015;

	cout << "New salary: $" << fixed << setprecision(2) << raise << endl;

	system("pause");
	return 0;
}