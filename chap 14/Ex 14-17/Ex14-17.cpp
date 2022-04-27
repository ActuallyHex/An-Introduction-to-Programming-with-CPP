// 17
// Excersize 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	
	int record = 10;
	int square = 0;

	ofstream outFile;

	outFile.open("records.txt", ios::app);

	if (outFile.is_open())
	{

		for (record >= 10; record <= 25; record++)
		{
			square = record * record;
			outFile << record << "#" << square << endl;
		}
		outFile.close();
		cout << "Nuubmers Saved" << endl;
	}
	else
	{
		cout << "records.txt could not be opened" << endl;
	}

	return 0;
}
