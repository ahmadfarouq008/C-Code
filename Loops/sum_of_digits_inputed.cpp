#include <iostream>
using namespace std;

int main () {
    int n=0;
    int sum=0;
    int digit=0;
    
    cout << "Enter a positive integer:" ;
    cin >> n;
    
    while (n>0) {
        digit=n%10;  // finds the last digit.
        sum+=digit;  // Adds the last digit in sum.
        n=n/10;      // Removes the last digit.
                     // Loop repeats and goes back to find the last digit of remaining no.s and so on , until n = n/10 = 0. 
    }
    cout << "Sum of digits is " << sum << endl;
    return 0;
}