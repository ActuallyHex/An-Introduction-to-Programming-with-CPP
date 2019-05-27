//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

//function prototypes
int getDomestic(int domestic[], int numElements);
int getInternational(int international[], int numElements);
void getMonthly(int domestic[], int international[], int numElements, int &high, string &month);


int main()
{	
    int domestic[6] = {65000, 30200, 67800, 
					   45000, 30000, 67500};
	int international[6] = {40000, 83000, 64000, 
							32600, 47500, 39000};
	int domesticHigh = 0;
	int internationalHigh = 0;
	int monthlyHigh = 0;
	int choice = 0;
	string month = "";

	cout << "(1)   Highest Domestic Sales" << endl <<
		"(2)   Highest International Sales" << endl <<
		"(3)   Highest Total Monthly Sales" << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		domesticHigh = getDomestic(domestic, 6);
		cout << "Highest domestic sale: " << domesticHigh << endl;
		break;
	case 2:
		internationalHigh = getInternational(international, 6);
		cout << "Highest international sale: " << internationalHigh << endl;
		break;
	case 3:
		getMonthly(domestic, international, 6, monthlyHigh, month);
		cout << "Highest monthly sale: " << monthlyHigh << " in " << month << endl;
		break;
	}


    return 0;
}   //end of main function

//*****function definitions*****
int getDomestic(int domestic[], int numElements) {
	int high = domestic[0];

	for (int sub = 1; sub < numElements; sub++) {
		if (domestic[sub] > high)
			high = domestic[sub];
	}

	return high;
}

int getInternational(int international[], int numElements) {
	int high = international[0];

	for (int sub = 1; sub < numElements; sub++) {
		if (international[sub] > high)
			high = international[sub];
	}

	return high;
}

void getMonthly(int domestic[], int international[], int numElements, int &high, string &month) {
	high = domestic[0] + international[0];
	int numMonth = 0;

	for (int sub = 1; sub < numElements; sub++) {
		if (domestic[sub] + international[sub] > high) {
			high = domestic[sub] + international[sub];
			numMonth = sub + 1;
		}
	}
	
	switch (numMonth) {
	case 1:
		month = "January";
		break;
	case 2:
		month = "February";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	}
}