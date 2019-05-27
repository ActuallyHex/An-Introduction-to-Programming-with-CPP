//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int age = 0;
	double average = 0.0;
	int num = 0;

	for (num = 1; num <= 5; num += 1) {
		cout << "Enter age of person number " << num << ": ";
		cin >> age;
		average += age;
	}

	average = average / (num - 1);
	cout << fixed << setprecision(1);
	cout << "Average age is: " << average << endl;

	system("pause");
	return 0;
}