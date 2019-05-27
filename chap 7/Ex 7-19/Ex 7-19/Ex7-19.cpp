//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int testMidterm = 0;
	int testFinal = 0;
	int total = 0;
	int students = 0;
	char grade = ' ';

	cout << "Number of students: ";
	cin >> students;
	cout << endl;

	for (int num = 1; num <= students; num += 1) {
		cout << "Student #" << num << endl;
		cout << "Midterm score:  ";
		cin >> testMidterm;
		cout << "Final score: ";
		cin >> testFinal;
		
		total = testFinal + testMidterm;
		if (total < 240)
			grade = 'F';
		else if (total >= 240 && total < 280)
			grade = 'D';
		else if (total >= 280 && total < 320)
			grade = 'C';
		else if (total >= 320 && total < 360)
			grade = 'B';
		else if (total >= 360 && total <= 400)
			grade = 'A';

		cout << "Total points: " << total << " / 400" << endl;
		cout << "Letter grade: " << grade << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}