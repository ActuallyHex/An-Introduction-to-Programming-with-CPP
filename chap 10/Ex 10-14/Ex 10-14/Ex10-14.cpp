//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void displayChoices();
void getArea(double rad, double &area);
void getDiameter(double rad, double &diameter);
void getCircumference(double, double &);

int main() {
	int choice = 0;
	double radius = 0.0;
	double circleArea = 0.0;
	double circleDiameter = 0.0;
	double circleCircumference = 0.0;

	displayChoices();
	cout << "Enter your choice (1 or 2 or 3): ";
	cin >> choice;

	if (choice < 1 || choice > 3)
		cout << "Invalid choice" << endl;
	else {
		cout << "Radius: ";
		cin >> radius;
		if (choice == 1) {
			getArea(radius, circleArea);
			cout << "Area: " << circleArea;
		}
		else if (choice == 2) {
			getDiameter(radius, circleDiameter);
			cout << "Diameter: " << circleDiameter;
		}
		else if (choice == 3) {
			getCircumference(radius, circleCircumference);
			cout << "Circumeference: " << circleCircumference;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

void displayChoices() {
	cout << "1   Circle Area" << endl;
	cout << "2   Circle Diameter" << endl;
	cout << "3   Circle Circumference" << endl;
}

void getArea(double rad, double &area) {
	const double PI = 3.141593;
	area = PI * pow(rad, 2);
}

void getDiameter(double rad, double &diameter) {
	diameter = 2 * rad;
}

void getCircumference(double radius, double &circumference) {
	const double PI = 3.141593;
	circumference = 2 * PI * radius;
}