#include <iostream>
using namespace std;

int main() {
	int salary = 0;
	int service_years = 0;
	int bonus = 0;

	cout << "Enter salary:";
	cin >> salary;

	cout << "Enter years of service:";
	cin >> service_years;

	if (salary < 10000 && service_years>5) {

		bonus = salary * 0.05;
		cout << "Bonus:" << bonus << endl;
	}
	else if (salary >= 10000 && service_years > 3) {
		bonus = salary * 0.03;
		cout << "Bonus:" << bonus << endl;
	}
	else {
        cout << "No bonus.";
	}
	return 0;
		
}