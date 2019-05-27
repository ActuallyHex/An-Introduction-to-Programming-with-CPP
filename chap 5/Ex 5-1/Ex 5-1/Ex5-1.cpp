//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int code1 = 0;
	int code2 = 0;

	cout << "Integer 1: ";
	cin >> code1;
	cout << "Integer 2: ";
	cin >> code2;

	if (code1 == code2)
		cout << "Equal" << endl;
	else
		cout << "Not equal" << endl;

	system("pause");
	return 0;
}