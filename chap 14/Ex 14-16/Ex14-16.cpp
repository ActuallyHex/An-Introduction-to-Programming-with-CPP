#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string check = "ABCDEFGHIJ";
	char alpha = ' ';
	int count = 0;
	bool handle = false;
	ofstream outFile;

	outFile.open("alphabet.txt", ios::app);

	if (outFile.is_open())
	{

		while (count != 10)
		{
			cout << "Enter first 10 alphabet characters (A-J Uppercase): ";
			cin >> alpha;

			for (int i = 0; i < 10; i++)
			{
				if (alpha == check[i])
				{
					//outFile << alpha << endl;
					handle = true;
				}
			}

			if (handle == true)
			{
				outFile << alpha << endl;
				handle = false;
			}
			else
			{
				cout << "Bruh the FORMAT is INCORRECT!" << endl;
				handle = false;
			}
	
			count++;
		}
		outFile.close();
	}
	else
	{
		cout << "alphabet.txt could not be opened." << endl;
	}



	return 0;
}
