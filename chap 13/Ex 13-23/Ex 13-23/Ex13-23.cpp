//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

string getColor(string check, string color);

int main() {
	string item;
	string color;
	string check;

	cout << "Item number(-1 to end): ";
	getline(cin, item);

	while (item != "-1") {
		check = item.substr(3, 1);
		if (item.length() == 7) {
			color = getColor(check, color);
			cout << color << endl;
		}
		else
			cout << "Invalid value" << endl;
		
		cout << endl;
		cout << "Item number(-1 to end): ";
		getline(cin, item);
	}

	system("pause");
	return 0;
}

string getColor(string check, string color) {
	if (check == "B" || check == "b")
		color = "Blue";
	else if (check == "G" || check == "g")
		color = "Green";
	else if (check == "R" || check == "r")
		color = "Red";
	else if (check == "W" || check == "w")
		color = "White";
	else
		color = "Invalid value";

	return color;

}