//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char department = ' ';
	double salary = 0.0;
	double raise = 0.0;
	
	cout << "Salary: ";
	cin >> salary;
	cout << "Department (A, B, C, or D)";
	cin >> department;

	switch (toupper(department)) {
	case 'A':
		raise = salary * 0.02;
		break;
	case 'B':
		raise = salary * 0.02;
	case 'C':
		raise = salary * 0.015;
		break;
	case 'D':
		raise = salary * 0.03;
	}

	cout << fixed << setprecision(2);
	cout << "The raise amount is: $" << raise << endl;

	system("pause");
	return 0;
}