//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sales[3][2] = {{3567.85, 2589.99},
						  {3239.67, 2785.55},
						  {1530.50, 1445.80}};
	double paperback = 0.0;
	double hardcover = 0.0;
	double total = 0.0;	//accumulator

	//accumulate sales
	for (int store = 0; store < 3; store += 1)
		for (int book = 0; book < 2; book += 1)
			total += sales[store][book];
		//end for
	//end for

	for (int sub = 0; sub < 3; sub++) {
		paperback += sales[sub][0];
		hardcover += sales[sub][1];
	}
		
	
	cout << fixed << setprecision(2);
	cout << "Total sales: $" << total << endl;
	cout << "Paperback sales: $" << paperback << endl;
	cout << "Hardcover sales: $" << hardcover << endl;
	return 0;
}	//end of main function