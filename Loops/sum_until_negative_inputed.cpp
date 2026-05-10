#include <iostream>
using namespace std;

int main() {
	int n = 0;
	int sum = 0;

	while (true) {

	    cout << "Enter a number:";
	    cin >> n;

		if (n <= 0) {
			break;
		}
		sum = sum + n;

	}
	cout << "sum is " << sum << endl;
	return 0;
}