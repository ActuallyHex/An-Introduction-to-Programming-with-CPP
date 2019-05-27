//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char types[5] = { 'A', 'B', 'C', 'D', 'E' };
	int fees[5] = { 100, 110, 125, 150, 200 };
	char memberType = ' ';
	int sub = 0;

	cout << "Membership type (A, B, C, D, or E): ";
	cin >> memberType;
	memberType = toupper(memberType);

	while (sub < 5 && types[sub] != memberType)
		sub += 1;

	if (sub < 5)
		cout << "Annual fee for membership type " << types[sub] << ": $" << fees[sub] << endl;

	system("pause");
	return 0;
}