//Introductory22.cpp - displays the average number of pounds ordered
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double getAvg(double [], int);

int main()
{
	double pounds[6] = {10, 15.5, 17, 18.5, 11, 12.5};
	double average = 0.0;

	average = getAvg(pounds, 6);
	cout << fixed << setprecision(2);
	cout << "Average number of pounds ordered: " << average << endl;
	return 0;
}	//end of main function

//*****function definitions*****
double getAvg(double pounds[], int numElements)
{
	double total = 0.0;
	int sub = 0;

	while (sub < numElements) {
		total += pounds[sub];
		sub += 1;
	}

	return total / numElements;
}	//end of getAvg function