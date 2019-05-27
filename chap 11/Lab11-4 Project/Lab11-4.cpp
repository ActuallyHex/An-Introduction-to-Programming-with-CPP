//Mukhammad Mirsodikov - P2

#include <iomanip>
#include <iostream>
using namespace std;

double getTotal(double prices[], int numElements);
//*****function definitions*****
//function prototype

int main() {
	double stockPrices[10] = { 35.6, 37.8, 39, 38.9, 38.9, 37.8, 37.8, 37.8, 39, 39.5 };
	double average = 0.0;
	double total = 0.0;

	total = getTotal(stockPrices, 10);
	average = total / 10;
	cout << fixed << setprecision(2);
	cout << "Average stock price: $" << average << endl;

	return 0;
}

//end of getTotal function
//end of main function

double getTotal(double prices[], int numElements) {
	double sumPrices = 0.0;

	for (int x = 0; x < numElements; x++) {
		sumPrices += prices[x];
	}

	return sumPrices;
}




