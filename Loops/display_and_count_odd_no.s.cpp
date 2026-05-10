#include <iostream> 
using namespace std;

int main() {
	int n = 0;
	int count = 0;
	int i = 1;

	cout << "Enter a positive integer: " ;
	cin >> n;

	while (n<=0) {

		cout << "Please enter a number greater than 0."; // used this to get input again and agin until positve no. is inputed.(Not neccessary line,only used for concept.)
		cin >> n;
		
	}

	cout << "Odd number :" ; // cout of odd numbwer is written here to print odd numbers in a single row.

	while (i <= n) { 

		if (i % 2 != 0) {
		cout << i << " " ; // Print the current odd number.

		}

		count = count + 1 ; // Increase our total count.

		i = i + 1; // move to the next no./iteration.
	}
	cout << endl << "Count of odd numbers: " << count << endl;
    return 0;
}

/*
Alternative Method:

#include <iostream>
using namespace std;

int main() {

    int n=0;
    int count = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Odd numbers: ";

    for (int i = 1; i <= n; i += 2) {

        cout << i << " ";
        count++;
    }

    cout << endl;
    cout << "Count of odd numbers: " << count;

    return 0;
}
*/