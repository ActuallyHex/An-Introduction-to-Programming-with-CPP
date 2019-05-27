//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int choice = 0;
	int leapYear = 0;

	cout << "Select a month (1 - 12): ";
	cin >> choice;
	choice -= 1;

	if (choice > 12 && choice < 0)
		cout << "Invalid value." << endl;
	else {
		while (choice > 0) {

			if ((choice + 1) == 2) {
				cout << "Enter the year: ";
				cin >> leapYear;

				if (leapYear % 4 != 0)
					days[1] = 28;
				else if ((leapYear % 4 == 0) && (leapYear % 100 != 0))
					days[1] += 1;
				else if ((leapYear % 4 == 0) && (leapYear & 100 == 0) && (leapYear % 400 == 0))
					days[1] += 1;
			}
			cout << "Number of days: " << days[choice] << endl;

			days[1] = 28;
			cout << "Select a month (1 - 12): ";
			cin >> choice;
			choice -= 1;
		}
	}
	


	system("pause");
	return 0;
}
