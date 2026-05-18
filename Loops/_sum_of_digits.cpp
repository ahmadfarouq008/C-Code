#include  <iostream>
using namespace std;

int main () {
    int n=0;
    int d=0;
    int sum=0;

    cout << "Enter a number:" ;
    cin >> n;
    
    cout << "Number is " << n << endl;

    cout << "Digits of the numbers are " ;
    
    while (n>0) {

        d=n%10;
        cout << d ;               // it prints the every last digit found.

        sum+=d;

        n=n/10;
        
        if (n>0) {               // it stops as the n decreases to 0. 

            if (n < 10) {        // when the loops (n=n/10) is processing the digit of n less then 10 (which is 2nd last digit) then it prints "and" at that time.
               cout << " and " ;
           }
           else {                // otherwise "comma" is printer all the time until the second last digit comes.
               cout << ", " ; 
           }
        }

    }
    cout << endl;
    cout << "Digit sum for the number is " << sum << endl;
    return 0;
}