//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

int main() {
	string companyName = "";
	string underline = "";

	cout << "Company name: ";
	getline(cin, companyName);

	underline.assign(companyName.length(), '-');

	cout << endl << companyName << endl << underline << endl;
	system("pause");
	return 0;
}