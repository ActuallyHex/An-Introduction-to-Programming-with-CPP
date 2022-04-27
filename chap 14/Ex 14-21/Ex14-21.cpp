#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

	char letter = ' ';

	ifstream inFile;
	int count = 0;
	string bet = "";
	inFile.open("Introductory21.txt");

	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			count += 1;

			getline(inFile, bet);
			inFile.ignore();
		}
		inFile.close();
		cout << "Count of letters: " << count << endl;
	}
	else
	{
		cout << "sales.txt file could not be opened" << endl;
	}
	return 0;
}
