//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	int code = 0;
	double oldPrice = 0.0;
	double newPrice = 0.0;

	cout << "Item code (1, 2, or 3 only): ";
	cin >> code;
	cout << "Old price: ";
	cin >> oldPrice;

	cout << fixed << setprecision(2) << endl;

	if (code == 1 || code == 2 || code == 3) {
		switch (code) {
		case 1:
			cout << "New price: $" << oldPrice * 1.1 << endl;
			break;
		case 2:
			cout << "New price: $" << oldPrice * 1.5 << endl;
			break;
		case 3:
			cout << "New price: $" << oldPrice * 0.9 << endl;
			break;
		}
	}
	else {
		cout << "The item's price was not updated because the item code is not valid." << endl;
	}

	

	/*if (code == 1)
		cout << "New price: $" << oldPrice * 1.1 << endl;
	else if (code == 2)
		cout << "New price: $" << oldPrice * 1.5 << endl;
	else if (code == 3)
		cout << "New price: $" << oldPrice * 0.9 << endl;
	else
		cout << "Old price: $" << oldPrice << endl;
	cout << "The item's price was not updated because the item code is not valid." << endl;
	//end if
	*/

	system("pause");
	return 0;
}	//end of main function