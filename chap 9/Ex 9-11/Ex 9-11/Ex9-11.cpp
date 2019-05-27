//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double calcAvg(int n1, int n2, int n3) {
	return (n1 + n2 + n3) / 3.0;
}

int main() {
	int num1, num2, num3;
	double avg = 0.0;

	cout << "Num1, Num2, Num3: ";
	cin >> num1 >> num2 >> num3;

	avg = calcAvg(num1, num2, num3);
	cout << fixed << setprecision(1);
	cout << avg << endl;

	system("pause");
	return 0;
}