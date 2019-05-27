//Mukhammad Mirsodikov - P2

#include <iostream>
#include <string>
using namespace std;

string getUppercase(string delivery);
string getDelivery(string delivery);

int main() {
	string part;
	string delivery;
	string deliveryMethod;

	cout << "Enter part number: ";
	getline(cin, part);

	while (part != "-1") {
		if (part.length() == 5 || part.length() == 4) {
			delivery = part.substr(1, 2);
			delivery = getUppercase(delivery);

			deliveryMethod = getDelivery(delivery);
			cout << deliveryMethod << endl;
		}

		cout << "Enter part number: ";
		getline(cin, part);
	}

	return 0;
}

string getUppercase(string standard) {
	char letter;
	string uppercase;
	
	for (int i = 0; i < standard.length(); i++) {
		letter = standard[i];
		letter = toupper(letter);
		uppercase += letter;
	}

	return uppercase;
}

string getDelivery(string delivery) {
	string method;

	if (delivery == "MS")
		method = "Mail - Standard";
	else if (delivery == "MP")
		method = "Mail - Priority";
	else if (delivery == "FS")
		method = "FedEx - Standard";
	else if (delivery == "FO")
		method = "FedEx - Overnight";
	else if (delivery == "UP")
		method = "UPS";

	return method;
}
