//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int age = 0;
	int currentSalary = 0;
	int yearsToRetire = 0;
	double newSalary = 0.0;
	double total = 0.0;

	cout << fixed << setprecision(0);

	cout << "Current age in years(1 to 64): ";
	cin >> age;

	if (age < 1 || age > 64)
		cout << "Please enter an age from 1 to 64." << endl;
	else {
		cout << "Current salary as a whole number: ";
		cin >> currentSalary;
		cout << endl;

		double rate = 0.03;
		yearsToRetire = 65 - age;
		do {
			newSalary = currentSalary;
			total = currentSalary;
			for (int year = 2; year <= yearsToRetire; year += 1) {
				newSalary *= (1 + rate);
				total += newSalary;
			}
			cout << "Total with a " << rate * 100 << "% annual raise: $" << total << endl;
			rate += 0.01;
		} while (rate < 0.06);
			
		}	

	system("pause");
	return 0;
}