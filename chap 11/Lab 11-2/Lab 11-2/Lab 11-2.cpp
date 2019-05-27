//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double getAverage(double[], int);
double getLowest(double[], int);

int main() {
	double finishTimes[5] = { 0.0 };
	double avgTime = 0.0;
	double lowestTime = 0.0;

	for (int x = 0; x < 5; x++) {
		cout << "Time for race " << x + 1 << ": ";
		cin >> finishTimes[x];
	}

	avgTime = getAverage(finishTimes, 5);
	lowestTime = getLowest(finishTimes, 5);

	cout << fixed << setprecision << endl;
	cout << "Average 5K finish time: " << avgTime << endl;
	cout << "Lowest 5K finish time: " << lowestTime << endl;

	system("pause");
	return 0;
}

double getAverage(double times[], int numElements) {
	double total = 0.0;

	for (int x = 0; x < numElements; x++)
		total += times[x];

	return total / numElements;
}

double getLowest(double times[], int numElements) {
	double lowest = times[0];
	for (int x = 1; x < numElements; x++)
		if (times[x] < lowest)
			lowest = times[x];

	return lowest;
}