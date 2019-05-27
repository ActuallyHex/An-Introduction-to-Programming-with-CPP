//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int score = 0;
	int total = 0;
	int judges = 0;
	double average = 0.0;


	while (score >= 0 && score <= 10) {
		judges += 1;
		cout << "Judge #" << judges << endl;
		cout << "Enter a score (1 - 10): ";
		cin >> score;
		total += score;
		cout << endl;
	}
	total -= score;
	judges -= 1;

	average = static_cast<double>(total) / static_cast<double>(judges);

	cout << "Number of scores entered: " << judges << endl;
	cout << "Total score: " << total << endl;
	cout << "Average score: " << average << endl;

	system("pause");
	return 0;
}