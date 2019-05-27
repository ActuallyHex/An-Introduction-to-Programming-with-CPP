//Lab8-4.cpp - displays a pattern of numbers
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

//end for

int main() {
	int maxRows = 0;

	cout << "How many rows? ";
	cin >> maxRows;
	
	for (int rows = 1; rows <= maxRows; rows += 1) {
		for (int col = 1; col <= rows; col += 1) {
			cout << col;
		}
		cout << endl;
	}

	return 0;
} //end for







