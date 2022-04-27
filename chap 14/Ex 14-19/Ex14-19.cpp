#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string payroll = "";
	ofstream outFile;

	outFile.open("Introductory19.txt", ios::app);

	cout << "Enter payroll: ";
	cin >> payroll;
	cin.ignore(100, '\n');

	if (outFile.is_open())
	{

		while (payroll != "-1")
		{
			outFile << payroll << endl;

			cout << "Enter payroll: ";
			cin >> payroll;
		}
		outFile.close();
		cout << "Goodbye!" << endl;
	}
	else
	{

		cout << "Introductory19.txt could not be opened" << endl;
	}

	return 0;
}
