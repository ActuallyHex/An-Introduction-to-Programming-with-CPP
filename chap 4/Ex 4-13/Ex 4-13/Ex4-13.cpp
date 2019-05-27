//Mukhammad Mirsodikov - P5

#include <iostream>
using namespace std;

int main() {
	double length = 0.0;
	double width = 0.0;
	double area = 0.0;
	double price = 0.0;
	double total = 0.0;

	cout << "Enter the length (feet) of the floor: ";
	cin >> length;
	cout << "Enter the width (feet) of the floor: ";
	cin >> width;
	cout << "Enter the price per square foot of tile: $";
	cin >> price;

	area = length * width;
	total = area * price;
	cout << "The total area of the floor is " << area << " square feet." << endl;
	cout << "The total price of the floor is $" << total << endl;

	system("pause");
	return 0;
}
