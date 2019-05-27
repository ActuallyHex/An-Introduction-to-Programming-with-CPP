//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string fistLast = "";
	string first = "";
	string last = "";
	int commaLocation = 0;

	cout << "Name (last, comma, space, first): ";
	getline(cin, fistLast);

	commaLocation = fistLast.find(",", 0);
	first = fistLast.substr(commaLocation + 2);
	last = fistLast.substr(0, commaLocation);

	cout << first << " " << last << endl;

	system("pause");
	return 0;
}