//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void calcCelsius(double tempF, double &tempC);

int main() {
	double fahrenheit = 0.0;
	double celsius = 0.0;

	cout << "Enter Fahrenheit temperature: ";
	cin >> fahrenheit;
	calcCelsius(fahrenheit, celsius);
	
	cout << fixed << setprecision(0);
	cout << "Celsius temperature: " << celsius << endl;

	system("pause");
	return 0;
}

void calcCelsius(double tempF, double &tempC) {
	tempC = 5.0 / 9.0 * (tempF - 32.0);
}