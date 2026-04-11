#include <iostream>
using namespace std;

int main() {
	int calls = 500;
	int sms = 100;
	int data = 5;
	float call_rate = 1.5;
	float sms_rate = 2;
	float data_rate = 150;

	float calls_cost = calls*call_rate;
	float sms_cost = sms*sms_rate;
	float data_cost = data*data_rate;

	float total_before_fee = calls_cost + sms_cost + data_cost;
	int service_fee = 5.0 / 100.0 * total_before_fee;
	float final_amount = service_fee + total_before_fee;

	cout << "calls=" << calls << "x" << call_rate << "=" << calls_cost << endl;
	cout << "sms=" << sms << "x" << sms_rate << "=" << sms_cost << endl;
	cout << "data=" << data << "x" << data_rate << "=" << data_cost << endl;

	cout << "Total Before Fee=" << total_before_fee << endl;
	cout << "Service Fee=" << service_fee << endl;
	cout << "Final amount" << service_fee + final_amount << endl;



	return 0;
}