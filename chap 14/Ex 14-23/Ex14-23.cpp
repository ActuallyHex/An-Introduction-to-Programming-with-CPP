#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	double payroll = 0;
	double total = 0;
	double average = 0;
	double count = 0;
	ifstream inFile;

	inFile.open("Intermediate23.txt", ios::in);

	cout << fixed << setprecision(2);

	if (inFile.is_open())
	{
		inFile >> payroll;
		inFile.ignore();

		while (!inFile.eof())
		{
			total += payroll;
			count += 1;
			inFile >> payroll;
			inFile.ignore();
			//cout << total << endl; - only used for debug reasons
		}
		inFile.close();
		average = total / count;
		cout << "Average price $" << average << endl;
	}
	else
	{

		cout << "Intermediate23.txt count not be opened" << endl;
	}

}
