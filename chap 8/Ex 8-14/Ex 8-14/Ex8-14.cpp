//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	for (int column = 1; column <= 4; column += 1) {
		cout << column << "   ";
		for (int row = 2; row <= 5; row += 1) {
			cout << column * row << "  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}