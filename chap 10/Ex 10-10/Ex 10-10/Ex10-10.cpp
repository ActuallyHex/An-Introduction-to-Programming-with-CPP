//Mukhammad Mirsodikov

#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
void getArea(double rad, double &);
void getDiameter(double rad, double &);

int main()
{
	int choice = 0;
	double radius = 0.0;
	double answer = 0.0;

	cout << "1   Circle area" << endl;
	cout << "2   Circle diameter" << endl;
	cout << "Enter your choice (1 or 2): ";
	cin >> choice;

	if (choice < 1 || choice > 2)
		cout << "Invalid choice" << endl;
	else
	{
		cout << "Radius: ";
		cin >> radius;
		if (choice == 1) {
			getArea(radius, answer);
			cout << "Area: " << answer;
		}
		else {
			getDiameter(radius, answer);
			cout << "Diameter: " << answer;
		}
			
		//end if
		cout << endl;
	}  //end if
	system("pause");
	return 0;
}   //end of main function

	//*****function definitions*****
void getArea(double rad, double &area)
{
	const double PI = 3.141593;
	area = PI * pow(rad, 2);
}  //end getArea function

void getDiameter(double rad, double &diameter)
{	
	diameter = 2 * rad;
}  //end getDiameter function
