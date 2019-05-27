//Introductory21.cpp - calculates and displays the
//average rate stored in a two-dimensional array
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double rates[5][3] = { {3.4, 56.7, 8.99},
						  {11.23, 4.67, 85.4},
						  {34.6, 2.4, 9.0},
						  {6.3, 8.0, 4.1},
						  {4.0, 2.0, 3.5} };
	double average = 0.0;
	double total = 0.0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			total += rates[i][j];
		}
	}

	average = total / 15.0;

	cout << "Average rate: " << average << endl;

	system("pause");
	return 0;
}	//end of main function
