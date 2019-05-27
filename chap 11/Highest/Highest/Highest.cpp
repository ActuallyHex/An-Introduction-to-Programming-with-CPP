//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int getHighest(int numArray[], int numElements);

int main() {
	int numbers[4] = { 13, 2, 40, 25 };

	cout << "The highest number in the array is " << getHighest(numbers, 4) << "." << endl;

	system("pause");
	return 0;
}

int getHighest(int numArray[], int numElements) {
	int high = numArray[0];

	for (int sub = 1; sub < numElements; sub++) {
		if (numArray[sub] > high)
			high = numArray[sub];
	}

	return high;
}
