//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void displayArray(int cals[], int);
double getAverage(int cals[], int);

int main() {
    int calories[5] = {0};
	double average = 0.0;

    for (int sub = 0; sub < 5; sub ++){
        cout << "Calories for day " << sub + 1 << ": ";
        cin >> calories[sub];
    }

	average = getAverage(calories, 5);
    displayArray(calories, 5);

	cout << "Average calories: " << average << endl;
}

void displayArray(int cals[], int numElements){
    cout << endl << "Array contents: " << endl;
    for (int sub = 0; sub < 5; sub ++) {
        cout << "Calaries for day " << sub + 1 << ": " << cals[sub] << endl;
    }
}

double getAverage(int cals[], int numElements) {
	double total = 0.0;

	for (int sub = 0; sub < numElements; sub++)
		total += cals[sub];

	return static_cast<double>(total) / numElements;
}