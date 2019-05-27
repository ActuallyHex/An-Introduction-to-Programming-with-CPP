//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string firstLast = "";
	string first = "";
	string last = "";
	int spaceLocation = 0;

	cout << "Name (first and last only): ";
	getline(cin, firstLast);

	spaceLocation = firstLast.find(" ", 0);
	first = firstLast.substr(0, spaceLocation);
	last = firstLast.substr(spaceLocation + 1);

	cout << last << ", " << first << endl;

	system("pause");
	return 0;
}