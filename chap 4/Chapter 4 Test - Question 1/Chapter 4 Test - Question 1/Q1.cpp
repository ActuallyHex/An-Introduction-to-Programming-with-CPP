//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	double length = 0.0;
	double width = 0.0;
	double depth = 0.0;
	double volume = 0.0;

	cout << "Length of pool: ";
	cin >> length;
	cout << "Width of pool: ";
	cin >> width;
	cout << "Depth of pool: ";
	cin >> depth;

	volume = length * width * depth;

	cout << "The volume of the pool is: " << volume << endl;

	system("pause");
	return 0;

}