//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void saveInfo();
void displayInfo();

int main() {
	saveInfo();
	displayInfo();

	system("pause");
	return 0;
}

void saveInfo() {
	string title = "";
	string author = "";

	ofstream outFile;
	outFile.open("eBooks.txt", ios::app);

	if (outFile.is_open()) {
		cout << "Title (-1 to stop): ";
		getline(cin, title);
		while (title != "-1") {
			cout << "Author: ";
			getline(cin, author);
			outFile << title << '#' << author << endl;

			cout << "Title (-1 to stop): ";
			getline(cin, title);
		}
		outFile.close();
	}
	else
		cout << "eBooks.txt file could not be opened" << endl;
}

void displayInfo() {
	string title = "";
	string author = "";

	ifstream inFile;

	inFile.open("eBooks.txt", ios::in);

	if (inFile.is_open()) {
		cout << endl << endl << "eBook Collection" << endl;
		cout << "----------------" << endl;

		getline(inFile, title, '#');
		getline(inFile, author);

		while (!inFile.eof()) {
			cout << title << " by " << author << endl;
			getline(inFile, title, '#');
			getline(inFile, author);
		}
		inFile.close();
	}
	else
		cout << "eBooks.txt file could not be opened" << endl;
}