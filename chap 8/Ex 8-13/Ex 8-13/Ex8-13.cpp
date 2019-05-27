//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double total = 0.0;
	double testScore = 0.0;
	char grade = ' ';
	int student = 1;
	int x = 1;

	cout << "Student #" << student << endl;
	cout << "Test score #" << x << ": ";
	cin >> testScore;
	total += testScore;

	for (student = 2; student > 0; student += 1) {
		for (int i = 2; i <= 4; i += 1) {
			cout << "Test score #" << i << ": ";
			cin >> testScore;
			total += testScore;
		}
		if (total >= 372 && total <= 400)
			grade = 'A';
		else if (total >= 340 && total <= 371)
			grade = 'B';
		else if (total >= 280 && total <= 339)
			grade = 'C';
		else if (total >= 240 && total <= 279)
			grade = 'D';
		else if (total < 240)
			grade = 'F';
		cout << "Grade: " << grade << endl;
		total = 0;
		cout << endl;
		cout << "Student #" << student << endl;
		cout << "Test score #" << x << ": ";
		cin >> testScore;
		total += testScore;
	}
		
	

	system("pause");
	return 0;
}