//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string ssn = "";
	cout << "Nine-character Social Security number: ";
	getline(cin, ssn);

	if (ssn.length() == 9) {
		ssn.insert(3, "-");
		ssn.insert(6, "-");
		cout << "Social security number: " << ssn << endl;
	}
	else
		cout << "The number must contain 9 characters" << endl;

	system("pause");
	return 0;
}	