//Advanced29.cpp -allows the user to guess a letter chosen randomly by the computer
//Created/revised by <your name> on <current date>

#include <iostream>
#include <string>
#include <ctime>
//#include <cstdlib>

using namespace std;

char correctFormat(string letters, string guess);

int main()
{
	string letters = "abcdefghijklmnopqrstuvwxyz";
	string randomLetter = "";
	string letterGuess = "";
	char format = ' ';
	int randNum;
	int index = 0;

	srand(static_cast<int>(time(0)));
	randNum = 0 + rand() % (26 - 1 + 0);
	randomLetter = letters.substr(randNum, 1);

	cout << randomLetter << endl;
	cout << "Enter one lowercase letter: ";
	getline(cin, letterGuess);

	format = correctFormat(letters, letterGuess);

	if (format == 'N')
		cout << "Must be one lowercase letter" << endl;
	else {
		while (letterGuess != randomLetter) {
			for (int i = 0; i < letters.length(); i++) {
				if (letterGuess == letters.substr(i, 1))
					index = i;
			}

			if (index > randNum)
				cout << "The correct letter comes alphabetically before: " << letterGuess << endl;
			else
				cout << "The correct letter comes alphabetically after: " << letterGuess << endl;
			
			cout << endl;
			cout << "Enter one lowercase letter: ";
			getline(cin, letterGuess);
			format = correctFormat(letters, letterGuess);
			if (format == 'N')
				while (format == 'N') {
					cout << "Must be one lowecase letter" << endl << endl;
					cout << "Enter one lowercase letter: ";
					getline(cin, letterGuess);
					format = correctFormat(letters, letterGuess);
				}
		}
		cout << "Congratulations! The correct letter is: " << randomLetter << endl;
	}

	system("pause");
	return 0;
}	//end of main function

char correctFormat(string letters, string guess) {
	char format = 'N';
	int sub = 0;

	if (guess.length() > 1)
		format = 'N';
	else {
		while (sub < letters.length() && format == 'N') {
			if (letters.substr(sub, 1) == guess)
				format = 'Y';
			else
				sub += 1;
		}
		
	}

	return format;
}