//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string origWord = "";
	string letter = "";
	char dashReplaced = 'N';
	char gameOver = 'N';
	int numIncorrect = 0;
	string displayWord = "";


	cout << "Enter a word in uppercase: ";
	getline(cin, origWord);


	system("cls");

	displayWord.assign(origWord.length(), '-');
	cout << "Guessing this word: " << displayWord << endl;
	while (gameOver == 'N') {
		cout << "Enter an uppercase letter: ";
		cin >> letter;

		for (int x = 0; x < origWord.length(); x++) {
			if (origWord.substr(x, 1) == letter) {
				displayWord.replace(x, 1, letter);
				dashReplaced = 'Y';
			}
		}

		if (dashReplaced == 'Y') {

			if (displayWord.find("-", 0) == -1) {
				gameOver = 'Y';
				cout << endl << "Yes, the word is " << origWord << endl;
				cout << "Great guessing!" << endl;
			}
			else {
				cout << endl << "Guess this word: " << displayWord << endl;
				dashReplaced = 'N';
			}
		}
		else {
			numIncorrect += 1;
			if (numIncorrect == 10) {
				gameOver = 'Y';
				cout << endl << "Sorry, the word is " << origWord << endl;
			}
		}

	}

	system("pause");
	return 0;
}