//Mukhammad Mirsodikov - P2

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	const int TICKET_PRICE = 75;
	int tickets = 0;
	int total = 0;

	cout << "Number of tickets you want to purchase (the maximum is 10): ";
	cin >> tickets;

	if(tickets > 10)
		cout << "Invalid number of tickets." << endl;
	else {
		total = tickets * TICKET_PRICE;
		cout << fixed << setprecision(0);
		cout << "Price: $" << total << endl;
	}
	
	system("pause");
	return 0;
}



