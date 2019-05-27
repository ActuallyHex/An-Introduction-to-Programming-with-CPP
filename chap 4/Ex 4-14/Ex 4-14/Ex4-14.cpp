//Mukhammad Mirsodikov - P2

#include <iostream>
using namespace std;

int main() {
	int small;
	int medium;
	int large;
	int family;
	int total;

	cout << "Number of small pizzas: ";
	cin >> small;
	cout << "Number of medium pizzas: ";
	cin >> medium;
	cout << "Number of large pizzas: ";
	cin >> large;
	cout << "Number of family pizzas: ";
	cin >> family;

	total = small + medium + large + family;

	cout << "Total number of pizzas ordered: " << total << endl;
	cout << "Perecntage of small pizzas is %" << (static_cast<double>(small) / total * 100) << endl;
	cout << "Percentage of medium pizzas is %" << (static_cast<double>(medium) / total * 100) << endl;
	cout << "Percentage of large pizzas is %" << (static_cast<double>(large) / total * 100) << endl;
	cout << "Percentage of family pizzas is %" << (static_cast<double>(large) / total * 100) << endl;

	system("pause");
	return 0;
}