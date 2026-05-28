#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int evenSum = 0;
    int oddSum = 0;

    cout << "Enter the Number: ";
    cin >> n;

    cout << "Even Numbers are: ";

    for (int i = 0; i <= n; i += 2) {

        cout << i << " ";
        evenSum = evenSum + i;
    }

    cout << endl;
    cout << "Sum of even number: " << evenSum << endl;

    cout << endl;

    cout << "ODD Numbers are: ";

    for (int i = 1; i <= n; i += 2) {

        cout << i << " ";
        oddSum = oddSum + i;
    }

    cout << endl;
    cout << "Sum of odd number: " << oddSum << endl;

    cout << endl;

    if (evenSum > oddSum) {

        cout << "The Even sum is greater than Odd Sum";

    } else if (oddSum > evenSum) {

        cout << "The Odd sum is greater than Even Sum";

    } else {

        cout << "Both sums are equal";
    }

    return 0;
}