//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main()
{
	int day = 0;

	cout << "Enter the day (1 through 12): ";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "1 partridge in a pear tree" << endl;
		break;
	case 2:
		cout << "2 turtle doves" << endl;
		break;
	case 3:
		cout << "3 french hens" << endl;
		break;
	case 4:
		cout << "4 calling birds" << endl;
		break;
	case 5:
		cout << "5 golden rings" << endl;
		break;
	case 6:
		cout << "6 geese a laying" << endl;
		break;
	case 7:
		cout << "7 swans a swimming" << endl;
		break;
	case 8:
		cout << "8 maids a milking" << endl;
		break;
	case 9:
		cout << "9 ladies dancing" << endl;
		break;
	case 10:
		cout << "10 lords a leaping" << endl;
		break;
	case 11:
		cout << "11 pipers piping" << endl;
		break;
	case 12:
		cout << "12 drummers drumming" << endl;
		break;
	default:
		cout << "Error in day number." << endl;
	} //end switch
	system("pause");
	return 0;
}	//end of main function
