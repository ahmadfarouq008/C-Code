#include <iostream>
using namespace std;

int main () {
    unsigned int n = 0;
    int divisor_count = 0; // it is different from iteration count numbers(i) and it counts that numbers from 1 upto n which are divisible by n or gives remainder zero.   

    cout << "Enter a positive integer:" ;
    cin >> n ;

    for (int i=1;i<=n;i++) {

        if (n % i == 0) {  // divisor means the number which always gives remainder of 0 i.e, i is divisible by n.

            divisor_count++; // it increases the count of those numbers/divisors that gives remainder of 0 when divisible by n.
        }
    }
    cout << "Number of divisors:" << divisor_count << endl;
    return 0;
}