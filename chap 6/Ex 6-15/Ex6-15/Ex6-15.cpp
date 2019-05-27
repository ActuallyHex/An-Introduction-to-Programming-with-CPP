//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char gender = ' ';
	char activity = ' ';
	double weight = 0.0;
	double calories = 0.0;

	cout << "Gender (M or F): ";
	cin >> gender;
	cout << "Moderately A(active) or Relatively I(nactive): ";
	cin >> activity;
	cout << "Current weight (lbs): ";
	cin >> weight;

	gender = toupper(gender);
	activity = toupper(activity);

	if (gender == 'M') {
		switch (toupper(activity)) {
		case 'A':
			calories = weight * 15;
			cout << "The amount of calories to maintain your weight of " << weight << " pounds is " << calories << " calories." << endl;
			break;
		case 'I':
			calories = weight * 13;
			cout << "The amount of calories to maintain your weight of " << weight << " pounds is " << calories << " calories." << endl;
			break;
		default:
			cout << "Invalid key." << endl;
			break;
		}
		
	}
	else if (gender == 'F') {
		switch (toupper(activity)) {
		case 'A':
			calories = weight * 12;
			cout << "The amount of calories to maintain your weight of " << weight << " pounds is " << calories << " calories." << endl;
			break;
		case 'I':
			calories = weight * 10;
			cout << "The amount of calories to maintain your weight of " << weight << " pounds is " << calories << " calories." << endl;
			break;
		default:
			cout << "Invalid key." << endl;
			break;
		}
	}
	else
		cout << "Invalid key." << endl;

	system("pause");
	return 0;
}