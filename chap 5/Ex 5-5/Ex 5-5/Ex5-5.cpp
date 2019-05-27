//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	double marySales = 175.0;
	double jimSales = 123.0;
	double highSales = 0.0;
	double lowSales = 0.0;

	if (marySales > jimSales) {
		highSales = marySales;
		lowSales = jimSales;
		cout << "The highest sales number is " << highSales << endl;
		cout << "The lowest sales number is " << lowSales << endl;
	}
	else {
		highSales = jimSales;
		lowSales = marySales;
		cout << "The highest sales number is " << highSales << endl;
		cout << "The lowest sales number is " << lowSales << endl;
	}

	system("pause");
	return 0;

}