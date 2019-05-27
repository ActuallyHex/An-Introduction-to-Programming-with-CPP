//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char gender = ' ';
	double GPA = 0.0;
	double averageAll = 0.0;
	double averageMale = 0.0;
	double averageFemale = 0.0;
	int counterMale = 0;
	int counterFemale = 0;
	int counter = 1;
	
	cout << "Student #" << counter << endl;
	cout << "GPA: ";
	cin >> GPA;

	while (GPA >= 0.0 && GPA <= 4.0) {
		
		cout << "Gender (M or F): ";
		cin >> gender;
		if (GPA >= 0.0 && GPA <= 4.0) {
			if (toupper(gender) == 'M') {
				averageMale += GPA;
				counterMale += 1;
			}
			if (toupper(gender) == 'F') {
				averageFemale += GPA;
				counterFemale += 1;
			}
		}
		cout << endl;
		counter += 1;
		cout << "Student #" << counter << endl;
		cout << "GPA: ";
		cin >> GPA;
	}

	/*while (GPA >= 0.0 && GPA <= 4.0) {
		cout << "Student #" << counter << endl;
		cout << "Gender (M or F): ";
		cin >> gender;
		if (toupper(gender) == 'M') {
			cout << "GPA: ";
			cin >> GPA;
			averageMale += GPA;
			counterMale += 1;
		}
		else if (toupper(gender) == 'F') {
			cout << "GPA: ";
			cin >> GPA;
			averageFemale += GPA;
			counterFemale += 1;
		}
		counter += 1;
		cout << endl;
	}*/

	averageAll = (averageMale + averageFemale) / (counterMale + counterFemale);
	averageFemale /= counterFemale;
	averageMale /= counterMale;

	cout << endl;
	cout << "GPA average of all students: " << averageAll << endl;
	cout << "GPA average of females: " << averageFemale << endl;;
	cout << "GPA average of males: " << averageMale << endl;

	system("pause");
	return 0;
}