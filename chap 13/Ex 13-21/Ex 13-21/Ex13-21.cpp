//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string city;
	string state;
	string zip;
	string full;

	cout << "City name(-1 to end):";
	getline(cin, city);

	while (city != "-1") {
		cout << "State: ";
		getline(cin, state);
		cout << "ZIP code: ";
		getline(cin, zip);

		full = city + ", " + state + "  " + zip;

		cout << full << endl << endl;

		cout << "City name(-1 to end):";
		getline(cin, city);
	}

	system("pause");
	return 0;
}