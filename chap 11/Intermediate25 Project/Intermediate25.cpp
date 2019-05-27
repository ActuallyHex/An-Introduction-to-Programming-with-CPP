//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void getIncrease(double[], double, int);

int main()
{
	double raise = 0.0;
	double prices[10] = { 4.5, 6.75, 23.0, 21.5, 5.25, 8.99, 9.99, 10.89, 3.99, 4.0 };

	cout << "Raise amount: ";
	cin >> raise;
	raise /= 100.0;
	raise += 1;


	cout << fixed << setprecision(2);
	getIncrease(prices, raise, 10);
	//declare array


	return 0;
}	//end of main function

void getIncrease(double prices[], double raise, int numElements) {

	for (int sub = 0; sub < numElements; sub++) {
		prices[sub] *= raise;
		cout << prices[sub] << endl;
	}

}
