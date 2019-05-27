//Mukhammad Mirsodikov - P2

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num = 0;

	while (num <= 20) {
		cout << num << "		" << pow(num, 2) << "		" << pow(num, 3) << endl;


		num += 2;
	}

	system("pause");
	return 0;
}