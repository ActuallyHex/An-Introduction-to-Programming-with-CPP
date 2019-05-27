//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int pounds = 0;
	double price = 0.0;
	char tax;
	double total = 0.0;

	cout << "Enter the number of pounds: ";
	cin >> pounds;
	cout << "Enter the price per pound: $";
	cin >> price;
	cout << "Is there a sales tax for the customer? (Y/N): ";
	cin >> tax;

	if (toupper(tax) == 'Y')
	{
		total = (pounds * price) * 1.0315;
	}
	else
	{
		total = pounds * price;
	}

	cout << "The total price is $" << fixed << setprecision(2) << total << endl;

	system("pause");
	return 0;
}
