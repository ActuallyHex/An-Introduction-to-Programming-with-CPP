//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;
	double rate = 0.1;

	cout << "Bill amount: ";
	cin >> bill;

	cout << fixed;

	while (rate <= 0.2) {
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
		rate += 0.05;
	}

	/*for (double rate = 0.1; rate <= 0.2; rate += 0.05)
	{
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
	}   // end for */

	system("pause");
	return 0;
}	//end of main function