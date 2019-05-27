//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int deptCode = 0;
	int salary = 0;

	cout << "Department code (1, 2, or 3): ";
	cin >> deptCode;
	
	switch (deptCode) {
	case 1:
		salary = 25000;
		break;
	case 2:
		salary = 30000;
		break;
	case 3:
		salary = 32000;
		break;
	default:
		cout << "Invalid code" << endl;
		salary = 0;
	}

	cout << "Salary: $" << salary << endl;

	system("pause");
	return 0;
}