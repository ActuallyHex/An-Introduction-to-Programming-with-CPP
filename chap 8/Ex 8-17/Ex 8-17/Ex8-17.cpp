//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int day = 0;
	int totalTexts = 0;
	int dailyTexts = 0;
	int week = 1;
	int weeklyTexts = 0;
	double weeklyAverage = 0.0;
	double average = 0.0;

	for (week = 1; week <= 4; week += 1) {
		cout << "Week #" << week << endl;
		for (day = 1; day < 8; day += 1) {
			cout << "How many text messages did you send on day " << day << "? ";
			cin >> dailyTexts;
			totalTexts += dailyTexts;
		}
		average = static_cast<double>(totalTexts) / (day - 1);
		cout << endl << "You sent approximately " << average << " text messages per day." << endl;
		weeklyTexts += totalTexts;
		totalTexts = 0;
	}
	
	weeklyAverage = weeklyTexts / week;
	
	cout << fixed << setprecision(2);
	
	cout << "You sent approximately " << weeklyAverage << " text messages per week." << endl;

	system("pause");
	return 0;
}