//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string word = "";
	string reverse = "";
	string letter = "";

	cout << "Enter a word: ";
	getline(cin, word);

	while (word != "-1") {
		reverse = "";
		for (int i = word.length() - 1; i >= 0; i--) {
			letter = word[i];
			reverse += letter;
		}
		cout << reverse << endl << endl;

		cout << "Enter a word: ";
		getline(cin, word);
	}

	system("pause");
	return 0;
}
