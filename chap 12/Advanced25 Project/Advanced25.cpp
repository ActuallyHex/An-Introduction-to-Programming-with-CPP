//Advanced25.cpp - Increases the prices stored in
//the first column in a two-dimensional array, and
//then stores the updated prices in the second column.
//Displays the contents of the array, row by row.
//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int prices[5][2] = { {10, 0},
						{13, 0},
						{36, 0},
						{74, 0},
						{22, 0} };

	int increase = 0;

	cout << "Increase amount: ";
	cin >> increase;

	for (int i = 0; i < 5; i++) {
		prices[i][1] = prices[i][0] + 10;
		cout << prices[i][0] << "   " << prices[i][1] << endl;
	}


	system("pause");
	return 0;
}	//end of main function