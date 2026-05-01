#include <iostream>
using namespace std;

int main() {
	int num = 0;

	cout << "Enter an integer:";
	cin >> num;
	// input numbers should be less then 10.
	if (num==2) {
		cout << "The number is prime." << endl;
	}
	else if (num <= 1 || num % 2 == 0 || num == 9) {
		cout << "The number is not prime." << endl;

	}
	else if (num==3  || num==5 || num==7) {
		cout << "The number is prime." << endl;
	}

	return 0;
}