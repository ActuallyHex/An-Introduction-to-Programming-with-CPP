//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	for (int x = 5; x <= 50; x += 5) {
		cout << "$" << x << "     ";
		for (double y = 0.1; y <= 0.2; y += 0.05) {
			cout << x * y << "     ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}