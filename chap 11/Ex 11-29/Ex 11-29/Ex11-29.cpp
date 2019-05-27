//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {			
	int commission[20] = { 300, 500, 200, 150, 600, 750, 900, 150, 100, 200, 250, 650, 300, 750, 800, 350, 250, 150, 100, 300 };
	int temp = 0;
	int people = 0;
	int maximum = 0;
	int minimum = 0;

	cout << "Enter a minimum commission amount: ";
	cin >> minimum;
	

	while (minimum >= 0) {
		cout << "Enter a maximum commission amount: ";
		cin >> maximum;

		if (minimum > maximum) {
			temp = maximum;
			maximum = minimum;
			minimum = temp;
		}

		people = 0;
		for (int sub = 0; sub < 20; sub++) {
			if (commission[sub] >= minimum && commission[sub] <= maximum)
				people += 1;
		}

		cout << people << " people have earned a commission of " << minimum << " through " << maximum << endl << endl;

		cout << "Enter a minimum commission amount: ";
		cin >> minimum;
	}
	

	system("pause");
	return 0;
}
