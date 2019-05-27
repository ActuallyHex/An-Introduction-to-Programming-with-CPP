//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int temperature[7][2] = { 0 };
	int high = 0;
	int low = 0;

	for (int i = 0; i < 7; i++) {
		cout << "Day #" << i + 1 << endl;
		cout << "Highest temperature: ";
		cin >> temperature[i][0];
		high += temperature[i][0];
		cout << "Lowest temperature: ";
		cin >> temperature[i][1];
		low += temperature[i][1];
		cout << endl;
	}

	cout << fixed << setprecision(1);
	cout << "Average highest temperature: " << static_cast<double>(high) / 7.0 << endl;
	cout << "Average lowest temperature: " << static_cast<double>(low) / 7.0 << endl;



	system("pause");
	return 0;
}
