//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int day = 0;
	int totalTexts = 0;
	int dailyTexts = 0;
	double average = 0.0;

	day = 1;

	while (day < 8) {
		cout << "How many text messages did you send on day " << day << "? ";
		cin >> dailyTexts;
		totalTexts += dailyTexts;
		day += 1;
	}

	/*for (day = 1; day < 8; day += 1) {
		cout << "How many text messages did you send on day " << day << "? ";
		cin >> dailyTexts;
		totalTexts += dailyTexts;
	}*/

	average = static_cast<double>(totalTexts) / (day - 1);
	cout << fixed << setprecision(2);
	cout << endl << "You sent approximately " << average << " text messages per day." << endl;

	system("pause");
	return 0;
}