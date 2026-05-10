#include <iostream> 
using namespace std;

int main() {
	int n = 0;
	int sum = 0;
	int i = 0;

	cout << "Enter a positive integer:";
	cin >> n;

	while (n <= 0 ) {
		cout << "Please enter a positive intger:";  // Not neccessary line.Only used for concept to get input until positve no.
		cin >> n;
	}

	for (int i = 0; i <= n; i++) {

		if (i % 2 == 0) {
			sum = sum + i;
			
		}

	}
	cout << "Sum of even numbers is " << sum << endl;
	return 0;

}