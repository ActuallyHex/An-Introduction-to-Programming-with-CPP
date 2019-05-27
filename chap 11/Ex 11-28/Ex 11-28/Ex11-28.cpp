//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int commission[20] = { 300, 500, 200, 150, 600, 750, 900, 150, 100, 200, 250, 650, 300, 750, 800, 350, 150, 100, 300 };
	int choice = 0;
	int people = 0;

	cout << "Enter a commission amount (0 - 1000): ";
	cin >> choice;

	for (int sub = 0; sub < 20; sub++) {
		if (commission[sub] == choice)
			people += 1;
	}

	cout << people << " people have earned a commission of " << choice << endl;

	system("pause");
	return 0;
}