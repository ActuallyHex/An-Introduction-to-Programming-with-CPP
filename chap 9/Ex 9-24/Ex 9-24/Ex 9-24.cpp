//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x = 0;
	int y = 0;
	int a = 0;
	int randomNum = rand();

	srand(static_cast<int>(time(0)));

	for (int i = 1; i <= 5; i++) {
		x = 1 + rand() % (10 - 1 + 1);
		y = 1 + rand() % (10 - 1 + 1);

		cout << x << " + " << y << " = ";
		cin >> a;

		if (x + y == a)
			cout << "Correct!";
		else
			cout << "Sorry, the answer is " << x + y << ".";

		cout << endl << endl;
	}


	

	system("pause");
	return 0;
}