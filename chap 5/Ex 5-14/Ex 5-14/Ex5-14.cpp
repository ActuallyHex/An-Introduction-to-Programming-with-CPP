//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double weight = 0.0;
	double height = 0.0;
	double BMR = 0.0;
	int age = 0;
	char gender = ' ';
	char units = ' ';

	cout << "Gender (M or F): ";
	cin >> gender;
	cout << "Metric System or Customary Units (M or C): ";
	cin >> units;
	cout << "Weight: ";
	cin >> weight;
	cout << "Height: ";
	cin >> height;
	cout << "Age: ";
	cin >> age;

	if (toupper(units) == 'M') {
		if (toupper(gender) == 'M') {
			BMR = (10 * weight) + (6.25 * height) - (5 * age) + 5;
		}
		if (toupper(gender) == 'F') {
			BMR = (10 * weight) + (6.25 * height) - (5 * age) - 161;
		}
	}
	if (toupper(units) == 'C') {
		if (toupper(gender) == 'M') {
			weight = weight / 2.2;
			height = height * 2.54;
			
			BMR = (10 * weight) + (6.25 * height) - (5 * age) + 5;
		}
		if (toupper(gender) == 'F') {
			weight = weight / 2.2;
			height = height * 2.54;

			BMR = (10 * weight) + (6.25 * height) - (5 * age) - 161;
		}
	}

	cout << "Your BMR is " << fixed << setprecision(2) << BMR << endl;


	system("pause");
	return 0;
}