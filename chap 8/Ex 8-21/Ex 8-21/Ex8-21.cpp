//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int reviewers = 0;
	int rating = 0;

	cout << "How many reviewers? ";
	cin >> reviewers;
	cout << "Movie ratings must be from 1 to 5." << endl << endl;

	if (reviewers > 0) {
		for (int i = 1; i <= reviewers; i += 1) {
			cout << "Reviewer " << i << " rating: ";
			cin >> rating;
			if (rating >= 1 && rating <= 5) {
				cout << "                        ";
				for (int stars = 1; stars <= rating; stars += 1) {
					cout << "*";
				}
			}
			else {
				cout << "The rating must be from 1 to 5.";
				cout << endl;
				i -= 1;
			}

			cout << endl;
		}
	}
	else {
		cout << "Invalid value." << endl;
	}
	
	system("pause");
	return 0;
}