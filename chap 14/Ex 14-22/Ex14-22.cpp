#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	string name = "";
	double sales = 0.0;
	double total = 0.0;

	ifstream inFile;

	inFile.open("Intermediate22.txt", ios::in);

	cout << fixed << setprecision(2);

	if (inFile.is_open())
	{
		inFile >> sales;
		inFile.ignore();

		while (!inFile.eof())
		{
			total += sales;

			inFile >> sales;
			inFile.ignore();
		}
		inFile.close();
		cout << "Total Sales: $" << total << endl;
	}
	else
	{
		cout << "Intermediate22.txt could not be opened" << endl;

	}

	return 0;
}
