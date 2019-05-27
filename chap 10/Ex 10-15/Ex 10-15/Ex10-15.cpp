//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void getRandom(int, int, int &);

int main() {
	int randomNumbers = 0;
	int numberGuess = 0;
	int numMax = 0;
	int numMin = 0;

	cout << "Maximum number: ";
	cin >> numMax;
	cout << "Minimum number: ";
	cin >> numMin;

	srand(static_cast<int>(time(0)));
	getRandom(numMax, numMin, randomNumbers);

	cout << "Guess a number from " << numMin << " through " << numMax << ": ";
	cin >> numberGuess;

	while (numberGuess != randomNumbers) {
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}

	cout << endl << "Yes, the number is " << randomNumbers << "." << endl;

	system("pause");
	return 0;
}

void getRandom(int numMax, int numMin, int &random) {
	random = numMin + rand() % (numMax - numMin + 1);
}