//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void displayRating(int num);

int main() {
	int numStars = 0;

	cout << "Rate the XYZ Company (1 to 5 stars): ";
	cin >> numStars;
	while (numStars > 0 && numStars < 6) {
		displayRating(numStars);
		cout << "Rate the XYZ Company (1 to 5 stars): ";
		cin >> numStars;
	}

	cout << "End of ratings" << endl;

	system("pause");
	return 0;
}

void displayRating(int num) {
	for (int star = 1; star <= num; star++)
		cout << "*";

	cout << endl;
}