//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int company = 1;
	int people = 0;
	int totalPeople = 0;
	int total = 0;
	int num1 = 1;
	double average = 0.0;

	cout << "Company #" << company << endl;
	cout << "Total number of people: ";
	cin >> people;
	cout << endl;

	totalPeople += people;
	company += 1;
	while (people > 0) {
		if (people >= 1 && people <= 3)
			total += people * 150;
		if (people >= 4 && people <= 9)
			total += people * 100;
		if (people >= 10)
			total += people * 90;

		cout << "Company #" << company << endl;
		cout << "Total number of people: ";
		cin >> people;
		company += 1;
		totalPeople += people;
		cout << endl;
	}

	totalPeople += 1;
	average = static_cast<double>(total) / totalPeople;
	cout << fixed << setprecision(2);
	cout << "Total charge: $" << total << endl;
	cout << "Total number of people: " << totalPeople << endl;
	cout << "Average charge per person: $" << average << endl;

	system("pause");
	return 0;
}