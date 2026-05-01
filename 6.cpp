#include <iostream>
using namespace std;

int main() {
	int purchase_amount = 0;
	int discount= 0;
	int net_amount = 0;

	cout << "Enter the purchase amount:";
	cin >> purchase_amount;

	if (purchase_amount > 1000) {

		discount = purchase_amount * 0.10;
		net_amount = purchase_amount - discount;
		cout << "Discount:$" << discount << endl;
		cout << "Net amount to pay:$" << net_amount<< endl;
	}
	else {
		cout << "No discount." << endl;
		net_amount = purchase_amount;
		cout << "Net amount to pay:$" << net_amount << endl;
		
	}
	return 0;

}