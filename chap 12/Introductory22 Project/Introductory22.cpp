//Introductory22.cpp - displays the contents of a
//two-dimensional array, column by column and row by row
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main()
{
	int nums[2][4] = { {17, 24, 86, 35},
					  {23, 36, 10, 12} };

	int i = 0;
	//display column by column
	while (i < 2) {
		cout << "Column #" << i + 1 << endl;
		for (int j = 0; j < 4; j++) {
			cout << "   " << nums[i][j] << endl;
		}
		cout << endl;
		i += 1;
	}

	cout << endl;
	//display row by row
	i = 0;
	while (i < 2) {
		cout << "Row #" << i + 1 << endl;
		for (int j = 0; j < 4; j++) {
			cout << nums[i][j] << "  ";
		}
		cout << endl << endl;
		i += 1;
	}

	system("pause");
	return 0;
}	//end of main function
