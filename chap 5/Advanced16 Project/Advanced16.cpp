//Mukhammad Mirsodikov - P2

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num1 = 10.0;
	double num2 = 3.0;
	double absValue = 0.0;
	double quotient = 0.0;

	quotient = num1 / num2;
	absValue = num1 - num2;
	absValue = fabs(absValue);
	
	//compare for equality
	if (absValue > 0.00001)
		cout << "Yes, the quotient " << quotient << " is equal to 3.33333." << endl;
	else
		cout << "No, the quotient " << quotient << " is not equal to 3.33333." << endl;
	//end if
	system("pause");
	return 0;
}	//end of main function