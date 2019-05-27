//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

void getResidetial(int channels, double &);
void getBusiness(int, int, double &);

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
		getResidetial(channels, total);
		break;
	case 'B':
		cout << "Number of channels: ";
		cin >> channels;
		cout << "Number of connections: ";
		cin >> connections;
		getBusiness(channels, connections, total);
	}

	cout << fixed << setprecision(2);
	cout << "Total bill: $" << total << endl;

	system("pause");
	return 0;
}

void getResidetial(int channels, double &price) {
	price = 34.5;
	price += 5 * channels;
}

void getBusiness(int channels, int connections, double &price) {
	price = 16.5;
	if (connections <= 5)
		price += 80;
	else if (connections > 5) {
		price += 80 + ((connections - 5) * 4);
	}
	price += channels * 50;
}