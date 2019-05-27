//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void convertCentimetersToInches(double, double &);
void convertInchesToCentimeters(double, double &);

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
		convertCentimetersToInches(measurement, conversion);
		cout << "Conversion: " << conversion << " inches" << endl;
		break;
	case 2:
		convertInchesToCentimeters(measurement, conversion);
		cout << "Conversion: " << conversion << " centimeters" << endl;
		break;
	}

	system("pause");
	return 0;
}

void convertCentimetersToInches(double length, double &conversion) {
	conversion = length * 0.393701;
}

void convertInchesToCentimeters(double length, double &conversion) {
	conversion = length * 2.54;
}