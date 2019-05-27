//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void calcCelsius(double tempF, double &tempC);
void calcFahrenheit(double tempC, double &tempF);
void displayOptions();


int main() {
	double fahrenheit = 0.0;
	double celsius = 0.0;
	int option = 0;

	displayOptions();
	cin >> option;

	if (option == 1) {
		cout << "Enter Fahrenheit temperature: ";
		cin >> fahrenheit;
		calcCelsius(fahrenheit, celsius);

		cout << fixed << setprecision(0);
		cout << "Celsius temperature: " << celsius << endl;
	}
	else if (option == 2) {
		cout << "Enter Celsius temperature: ";
		cin >> celsius;
		calcFahrenheit(celsius, fahrenheit);

		cout << fixed << setprecision(0);
		cout << "Fahrenheit temperature: " << fahrenheit << endl;
	}
	

	system("pause");
	return 0;
}

void calcCelsius(double tempF, double &tempC) {
	tempC = 5.0 / 9.0 * (tempF - 32.0);
}

void calcFahrenheit(double tempC, double &tempF) {
	tempF = (tempC * (9.0 / 5.0)) + 32;
}

void displayOptions() {
	cout << "Select option:" << endl;
	cout << "(1) Fahrenheit to Celsius" << endl;
	cout << "(2) Celsius to Fahrenheit" << endl << endl;
}