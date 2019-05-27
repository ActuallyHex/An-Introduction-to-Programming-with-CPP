//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	char membership = ' ';
	int age = 0;
	int fee = 0;


	cout << "Age: ";
	cin >> age;
	cout << "M(ember) or N(onmember): ";
	cin >> membership;

	membership = toupper(membership);

	if (membership == 'M' && age < 65)
		fee = 10;
	else if (membership == 'M' && age >= 65)
		fee = 5;
	else if (membership == 'N' && age < 65)
		fee = 20;
	else if (membership = 'N' && age >= 65)
		fee = 15;

	cout << "Final fee: $" << fee << endl;

	system("pause");
	return 0;

	
}