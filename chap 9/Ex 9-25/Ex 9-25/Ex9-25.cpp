//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

double getResidetial(int channels);
double getBusiness(int, int);

int main() {
	char customer = ' ';
	int channels = 0;
	int connections = 0;
	double total = 0.0;


	cout << "Type of customer: " << endl << "(R)esidential" << endl << "(B)usiness" << endl;
	cin >> customer;

	switch (toupper(customer)) {
	case 'R':
		cout << "Number of channels: ";
		cin >> channels;
		total = getResidetial(channels);
		break;
	case 'B':
		cout << "Number of channels: ";
		cin >> channels;
		cout << "Number of connections: ";
		cin >> connections;
		total = getBusiness(channels, connections);
	}

	cout << fixed << setprecision(2);
	cout << "Total bill: $" << total << endl;

	system("pause");
	return 0;
}

double getResidetial(int channels) {
	double price = 34.5;

	price += 5 * channels;

	return price;
}

double getBusiness(int channels, int connections) {
	double price = 16.5;

	if (connections <= 5)
		price += 80;
	else if (connections > 5) {
		price += 80 + ((connections - 5) * 4);
	}

	price += channels * 50;

	return price;
}