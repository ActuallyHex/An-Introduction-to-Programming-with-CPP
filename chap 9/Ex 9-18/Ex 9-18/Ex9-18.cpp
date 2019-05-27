//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double convertCentimetersToInches(double);
double convertInchesToCentimeters(double);

int main() {
	double measurement = 0.0;
	double conversion = 0.0;
	int choice = 0;

	cout << "(1) Centimeters to Inches" << endl
		 << "(2) Inches to Centimeters" << endl << "Enter number of choice: ";
	cin >> choice;
	cout << "Measurement: ";
	cin >> measurement;

	cout << fixed << setprecision(2);
	switch (choice) {
	case 1:
		conversion = convertCentimetersToInches(measurement);
		cout << "Conversion: " << conversion << " inches" << endl;
		break;
	case 2:
		conversion = convertInchesToCentimeters(measurement);
		cout << "Conversion: " << conversion << " centimeters" << endl;
		break;
	}

	system("pause");
	return 0;
}

double convertCentimetersToInches(double length) {
	double conversion = 0.0;

	conversion = length * 0.393701;

	return conversion;
	
}

double convertInchesToCentimeters(double length) {
	double conversion = 0.0;

	conversion = length * 2.54;

	return conversion;
}