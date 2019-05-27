//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
#include <float.h>
using namespace std;

double getTaxableWage(double grossPay, int allowances);
double getFWT(double FWT[8][5], double taxableWages);

int main() {
	//Array for the table of FWT for single people
							//  Over     Under    Base     %   Excess
	double singleFWT[8][5] = { {   0,      44,       0,    0,    0},
							   {  44,     222,       0,   .1,   44},
							   { 222,     764,    17.8,  .15,  222},
							   { 764,    1789,    99.1,  .25,  764},
							   {1789,    3685,  355.35,  .28, 1789},
							   {3685,    7958,  886.23,  .33, 3685},
							   {7958,    7990, 2296.32,  .35, 7958},
							   {7990, DBL_MAX, 2307.52, .396, 7990} };

	//Array for the table of FWT for married people
	double marriedFWT[8][5] = { {   0,     165,       0,    0,    0},
								{ 165,     520,       0,  .10,  165},
								{ 520,    1606,    35.5,  .15,  520},
								{1606,    3073,   198.4,  .25, 1606},
								{3073,    4597,  565.15,  .28, 3073},
								{4597,    8079,  991.87,  .33, 4597},
								{8079,    9105, 2140.93,  .35, 8079},
								{9105, DBL_MAX, 2500.03, .396, 9105} };

	double grossPay = 0.0;
	int allowances = 0;
	double taxableWages = 0.0;
	double tax = 0;
	char status = ' ';

	cout << "Gross pay amount: ";
	cin >> grossPay;
	cout << "Withholding allownces: ";
	cin >> allowances;
	cout << "S(ingle) or M(arried): ";
	cin >> status;


	status = toupper(status);
	if (grossPay > 0 && allowances >= 0 && (status == 'M' || status == 'S')) {

		taxableWages = getTaxableWage(grossPay, allowances);

		switch (status) {
		case 'S':
			tax = getFWT(singleFWT, taxableWages);
			break;
		case 'M':
			tax = getFWT(marriedFWT, taxableWages);
			break;
		}

		cout << fixed << setprecision(2);
		cout << "Tax amount: " << tax << endl;
	}
	else
		cout << "Invalid entry." << endl;



	system("pause");
	return 0;
}

//Gets the weekly taxable wage
double getTaxableWage(double grossPay, int allowances) {
	double total = 0.0;

	total = grossPay - (allowances * 76.9);

	return total;
}

//Finds the appropriate row for the taxable wage amount and calculates the FWT
double getFWT(double FWT[8][5], double taxableWages) {
	double tax = 0.0;
	double excess = 0.0;

	for (int i = 0; i < 8; i++) {
		if (taxableWages > FWT[i][0] && taxableWages <= FWT[i][1]) {
			excess = taxableWages - FWT[i][4];
			tax = excess * FWT[i][3];
			tax += FWT[i][2];
		}
	}

	return tax;
}
