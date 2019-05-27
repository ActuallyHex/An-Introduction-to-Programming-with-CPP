//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void getWage(int, double, double &);

int main() {
	int hours = 0;
	double rate = 0.0;
	double wage = 0.0;

	cout << "Hourly rate: ";
	cin >> rate;
	cout << "Hours worked: ";
	cin >> hours;

	while (rate != -1) {
		getWage(hours, rate, wage);
		cout << "Employee gross pay: $" << wage << endl << endl;
		cout << "Hourly rate (-1 to Stop): ";
		cin >> rate;
		cout << "Hours worked: ";
		cin >> hours;
	}

	system("pause");
	return 0;
}


void getWage(int hours, double rate, double &wage) {
	double payNormal = 0.0;
	double payTimeAndHalf = 0.0;
	double payDouble = 0.0;
	int newHours = 0;

	if (hours >= 1 && hours <= 37) {
		payNormal = rate * hours;
		wage = payNormal;
	}
	else if (hours >= 38 && hours <= 50) {
		newHours = hours - 37;
		payNormal = rate * 37;
		payTimeAndHalf = payNormal + (newHours * (rate * 1.5));
		wage = payTimeAndHalf;
	}
	else if (hours > 50) {
		newHours = hours - 50;
		payDouble = rate * 2 * newHours;
		payNormal = rate * 37;
		payTimeAndHalf = payNormal + (rate * 1.5 * 13);
		wage = payTimeAndHalf + payDouble;
	}

}

