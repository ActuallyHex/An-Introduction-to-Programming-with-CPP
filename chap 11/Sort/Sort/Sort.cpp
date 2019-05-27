//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int numbers[4] = { 23, 46, 12, 35 };
	int sub = 0;
	int temp = 0;
	int maxSub = 3;
	int lastSwap = 0;
	char swap = 'Y';

	while (swap == 'Y') {
		swap = 'N';

		sub = 0;

		while (sub < maxSub) {
			if (numbers[sub] > numbers[sub + 1]) {
				temp = numbers[sub];
				numbers[sub] = numbers[sub + 1];
				numbers[sub + 1] = temp;
				swap = 'Y';
				lastSwap = sub;
			}
			sub += 1;
		}

		maxSub = lastSwap;
	}

	for (int x = 0; x < 4; x++)
		cout << numbers[x] << endl;

	system("pause");
	return 0;
}