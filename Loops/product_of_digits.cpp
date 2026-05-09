#include <iostream>
using namespace std;

int main () {
    int n=0;
    int product=1; 
    int digits=0;

    cout << "Enter positive integers:" ;
    cin>> n;
    
    while (n>0) {
        digits=n%10;  // Extracts last digit.
        n=n/10 ;      // removes the last digit.

        product=product*digits;
    }
    

    cout << "Product of digits is " << product << endl;

    return 0;
}

