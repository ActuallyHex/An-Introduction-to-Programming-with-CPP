//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int test = 0;
	double score = 0.0;
	double total = 0.0;
	double avg = 0.0;

	cout << "How many test scores woyld like to enter? ";
	cin >> test;

	for (int i = 0; i < test; i++) {
		cout << "Enter a score: ";
		cin >> score;
		total += score;
	}

	avg = total / static_cast<double>(test);

	//cout << fixed << setprecision(0);
	cout << "The average score was: " << avg << endl;

	system("pause");
	return 0;
}