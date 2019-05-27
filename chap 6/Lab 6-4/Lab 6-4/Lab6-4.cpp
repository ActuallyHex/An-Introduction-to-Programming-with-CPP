//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int price = 0;
	int age = 0;

	cout << "Age (years): ";
	cin >> age;

	if (age < 0)
		cout << "Invalid age" << endl;
	else if (age <= 3)
		price = 0;
	else if (age >= 4 && age <= 64)
		price = 9;
	else if (age > 64)
		price = 6;

	cout << "Price: $" << price << endl;

	system("pause");
	return 0;
}//end of main function








