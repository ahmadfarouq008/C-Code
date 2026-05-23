#include <iostream>
using namespace std;

 //  A perfect number is a number that is numerically equal to the sum of its divisors.For example, 6 is a perfect number because the divisors of 6 are 1, 2, 3 and 1 + 2 + 3 = 6

int main( ) {
	int n = 0;
	int sum = 0;

	cout << "Enter a number: ";
	cin >> n;

	for (int i = 1; i < n; i++) { // since we do not want to include the number itself to be included in sum as divisor that's why we do not write i <= n.

		if (n % i == 0) {
			sum += i;  // the divisors found are are added in sum.
		}
	}

	if (sum == n) {
		cout << n << " is a perfect number." << endl;
	}
	else if (sum != n) {
		cout << n << " is not a perfect number." << endl;
	}
	return 0;

}