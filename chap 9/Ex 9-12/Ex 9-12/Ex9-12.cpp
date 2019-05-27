//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcCelcius(double);

int main() {
	double farranheit = 0.0;

	cout << "Enter temperature in farranheit: ";
	cin >> farranheit;

	farranheit = calcCelcius(farranheit);
	cout << fixed << setprecision(0) << farranheit << endl;
	system("pause");
	return 0;
}

double calcCelcius(double temp) {
	double celcius = 0.0;

	celcius = 5.0 / 9.0 * (temp - 32);
	return celcius;
}
