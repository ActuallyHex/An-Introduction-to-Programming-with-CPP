//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
	int randomNumbers = 0;
	int numberGuess = 0;

	srand(static_cast<int>(time(0)));
	randomNumbers = 1 + rand() % (10 - 1 + 1);

	cout << "Guess a number from 1 through 10: ";
	cin >> numberGuess;

	while (numberGuess != randomNumbers) {
		cout << "Sorry, guess again: ";
		cin >> numberGuess;
	}

	cout << endl << "Yes, the number is " << randomNumbers << "." << endl;

	system("pause");
	return 0;
}