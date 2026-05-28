// Strong Number: Sum of factorials of its digits is equal to original number.
// Factorial: It means multiply all numbers from 1 up to that number. e.g, 3! = 1 × 2 × 3. (Symbol of factorial is '!'.) 

#include <iostream>
using namespace std ;

int main () {
    int n = 0;
    int original_n = 0;
    int digit = 0;
    int factorial = 0;
    int sum = 0;

    cout << "Enter number: " ;
    cin >> n;

    original_n = n ;

    while (n > 0) {      
        digit = n % 10 ;                  // First, we find and extract each digit of n. 

        factorial = 1 ;                   //  factorial=1, is necessary because every digit needs separate factorial.i.e every digit's factorial starts from 1 .

        for (int i=1; i<=digit ; i++ ) {  // Second, we find factorial of each digit. Each iteration is for each digit. 

            factorial = factorial * i ;
        }
        sum = sum + factorial ;           // Third, we find sum by adding each factorials in every iteration of while loop.

        cout << "Digit is " << digit << " its factorial is " << factorial << endl;

        n = n / 10 ;                      // Fourth, we move to next digit of n when the previous digit is processed, until n becomes 0 .
    }

    cout << "Digit factorial sum is " << sum ;

    if (original_n == sum ) {
        cout << ", so " << original_n << " is a strong number." << endl;
    }
    else {
        cout << ", so " << original_n << " is not a strong number." << endl;
    }
    return 0;
}