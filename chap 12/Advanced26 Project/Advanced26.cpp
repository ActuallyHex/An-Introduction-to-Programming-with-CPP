//Advanced26.cpp - Displays the number of times the
//numbers from 1 through 9 appear in a two-dimensional array
//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int numbers[5][3] = {{3, 6, 7}, 
						{2, 5, 3}, 
						{1, 9, 5}, 
						{2, 6, 5}, 
						{7, 4, 8}};
	int instances[9] = { 0 };

	for (int i = 1; i < 10; i++) {
		cout << "Number " << i << endl;
		for (int x = 0; x < 5; x++) {
			for (int y = 0; y < 3; y++) {
				if (numbers[x][y] == i) {
					instances[i - 1] += 1;
				}
			}
		}
		cout << "Instances: " << instances[i - 1] << endl << endl;
	}

	return 0;
}	//end of main function