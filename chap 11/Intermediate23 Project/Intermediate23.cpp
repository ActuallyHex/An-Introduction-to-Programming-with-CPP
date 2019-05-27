//Intermediate23.cpp
//Displays the total amount won, the average amount won, and 
//the day number of the highest amount won
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
void getTotal(int winnings[], int numElements, int &total);
double getAvg(double total, int numElements);
int getHighDay(int winnings[], int numElements);

int main()
{
	//int winnings[5] = {12500, 15600, 2400, 9000, 5400};
	int winnings[5] = {12500, 5400, 2400, 9000, 15600 };
	int total = 0;
	double average = 0.0;
	int highDay = 0;

	getTotal(winnings, 5, total);
	average = getAvg(total, 5);
	highDay = getHighDay(winnings, 5);

	cout << fixed << setprecision(2);
	cout << "Total amount won: $" << total << endl;
	cout << "Average daily amount won: $" << average << endl;
	cout << "The contestant's highest amount won was on day "
		<< highDay << "." << endl;
	return 0;
}	//end of main function

//*****function definitions*****
void getTotal(int winnings[], int numElements, int &total)
{

	for (int sub = 0; sub < numElements; sub++) {
		total += winnings[sub];
	}

}	//end of getTotal function

double getAvg(double total, int numElements)
{
	return static_cast<double>(total) / numElements;
}  //end of getAvg function

int getHighDay(int winnings[], int numElements)
{
	int high = winnings[0];
	int day = 0;

	for (int sub = 1; sub < numElements; sub++) {
		if (winnings[sub] > high) {
			high = winnings[sub];
			day = sub;
		}
	}

	return day + 1;
}  //end of getHighDay function
