#include <iostream>
using namespace std;

int main () {
    int n=0;
    bool prime = true; //Initially we assume n is prime, if we find any divisor change it to false.

    cout << "Enter number:" ;
    cin >> n;

    if (n<=1) {  // The numbers 0 and 1 are not prime.
        prime = false ;
         
    }

    for (int i=2 ; i<n ; i++) { // means if we found another divisor dnd if a number has another divisor besides  1 and itself then it is NOT prime.

        if (n % i == 0) {  // if number is divisible by any i then it means number is not prime bcause it will have more then two divisor (one and itself).  
            prime = false;
            break; // the loop stops as the divisor is found.
        }
    }

    if (prime==true) {
        cout << n << " is the prime number." << endl;
    }
    else {
        cout << n << " is not prime number." << endl;
    }
    return 0;
}