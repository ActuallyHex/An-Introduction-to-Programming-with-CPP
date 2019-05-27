//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	double height = 0.0;
	double length = 0.0;
	double width = 0.0;
	double volume = 0.0;
	double gallons = 0.0;
	const double GALLON_INCHES = 231.0;

	cout << "Enter the length (inches) of the aquarium: ";
	cin >> length;
	cout << "Enter the width (inches) of the aquarium: ";
	cin >> width;
	cout << "Enter the height (inches) of the aquarium: ";
	cin >> height;

	volume = width * length * height;
	cout << "The volume of the aquarium is " << volume << " cubic inches." << endl;
	gallons = volume / GALLON_INCHES;
	cout << "The aquarium is " << gallons << " gallons." << endl;

	system("pause");
	return 0;
}