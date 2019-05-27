//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double RATE1 = 0.02;
	const double RATE2 = 0.05;
	double sales = 0.0;
	double commission = 0.0;
	bool bool1 = false;

	cout << "Enter the sales amount: ";
	cin >> sales;

	if (sales <= 15000.0)
		bool1 = true;

	switch (bool1){
	case true:
		commission = sales * RATE1;
		break;
	case false:
		commission = sales * RATE2;
	}


	cout << fixed << setprecision(2);
	cout << "Commission: $" << commission << endl;
	system("pause");
	return 0;
}	//end of main function
