#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	int record = 10;
	int square = 0;
	int ThreeDquare = 0;
	ofstream outFile;

	outFile.open("recordsMod.txt", ios::app);

	if (outFile.is_open())
	{
		//cout << "Enter records: ";

		for (record >= 10; record <= 25; record++)
		{
			square = record * record;
			ThreeDquare = record * record * record;
			outFile << record << "#" << square << "#" << ThreeDquare << endl;
		}
		outFile.close();
		cout << "Numbers Saved!" << endl;
	}
	else
	{
		cout << "records.txt could not be opened" << endl;
	}

	return 0;
}
