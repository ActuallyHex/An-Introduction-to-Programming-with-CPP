//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int increment = 0;
	int remainder = 0;

	cout << "Ending value: ";
	cin >> max;
	cout << "Increment value: ";
	cin >> increment;

	remainder = max % increment;
	if (remainder == 0) {
		for (int outer = increment; outer <= max; outer += increment)
		{
			for (int nested = 1; nested <= outer; nested += 1)
				cout << '*';
			//end for
			cout << endl;
		}	//end for
		
	}
	else
		cout << "The maximum number must be evenly divisible by the number to repeat.";

	return 0;
}	//end of main function