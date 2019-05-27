//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int dollar = 0;
	double conversion = 0.0;
	
	char currency = ' ';

	cout << "American Dollar Amount: ";
	cin >> dollar;
	cout << "(1) Canadian Dollar \n" <<
		"(2) Euro \n" <<
		"(3) Indian Rupee \n" <<
		"(4) Japanese Yen \n" <<
		"(5) Mexican Peso \n" <<
		"(6) South African Rand \n" <<
		"(7) British Pound" << endl;
	cin >> currency;

	cout << fixed << setprecision(2);
	switch (currency) {
	case '1':
		conversion = dollar * 1.33;
		cout << "The exchange is $" << dollar << " to " << conversion << " Candian Dollars" << endl;
		break;
	case '2':
		conversion = dollar * 0.88;
		cout << "The exchange is $" << dollar << " to " << conversion << " Euros" << endl;
		break;
	case '3':
		conversion = dollar * 70.98;
		cout << "The exchange is $" << dollar << " to " << conversion << " Indian Rupees" << endl;
		break;
	case '4':
		conversion = dollar * 109.45;
		cout << "The exchange is $" << dollar << " to " << conversion << " Japanese Yen"<< endl;
		break;
	case '5':
		conversion = dollar * 18.98;
		cout << "The exchange is $" << dollar << " to " << conversion << " Mexican Pesos" << endl;
		break;
	case '6':
		conversion = dollar * 13.76;
		cout << "The exchange is $" << dollar << " to " << conversion << " South African Rand" << endl;
		break;
	case '7':
		conversion = dollar * 0.77;
		cout << "The exchange is $" << dollar << " to " << conversion << " British Pounds"<< endl;
		break;
	default:
		cout << "Invalid key" << endl;
	}

	

	system("pause");
	return 0;
}