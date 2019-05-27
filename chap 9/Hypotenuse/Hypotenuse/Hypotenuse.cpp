//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double sideA = 0.0;
	double sideB = 0.0;
	double numSqrs = 0.0;
	double hypotenuse = 0.0;

	cout << "Side A length: ";
	cin >> sideA;
	cout << "Side B length: ";
	cin >> sideB;

	numSqrs = pow(sideA, 2) + pow(sideB, 2);
	hypotenuse = sqrt(numSqrs);

	cout << fixed << setprecision(1);
	cout << "Hypotenuse length: " << hypotenuse << endl;


	system("pause");
	return 0;
}