//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	double fahrenheit = 0.0;
	double celcius = 0.0;

	cout << "Enter the temperature in Fahrenheit: ";
	cin >> fahrenheit;

	celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
	cout << "The temperature in Celcius is: " << celcius << endl;

	system("pause");
	return 0;
}