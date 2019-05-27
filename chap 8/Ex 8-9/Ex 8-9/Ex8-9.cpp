//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	for (int rows = 5; rows > 0; rows -= 1) {
		for (int asterisk = 1; asterisk <= rows * 2; asterisk += 1)
			cout << "*";
		
		cout << endl;
	}

	system("pause");
	return 0;
}