#include <iostream>
using namespace std;

int factorial(int n) {                  // function to calculate Factorial by multiplying numbers from 1 up to n (e.g., 4! = 1*2*3*4)
    int fact=1;

    for (int i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;
} 

int nCr(int n,int r) {                  // it stores 8 and 6
    int fact_n = 0;
    int fact_r = 0;
    int fact_nmr = 0;
    int nCr = 0;

    fact_n = factorial(n);                // Gets factorial of n by passing n into parameter (int n).  
    fact_r = factorial(r);                // Gets factorial of r by passing r into parameter (int n) and int n stores value of r.  
    fact_nmr = factorial (n-r);           // Gets factorial of n-r=8-6=2 by passing 2 into parameter (int n) and int n stores value of n-r which is 8.
    nCr = fact_n / (fact_r * fact_nmr); // this is the fromula to calculate coefficent of n and r.

    return nCr;
}

int main () {
    int n=8;
    int r=6;
    int result=0;

    result=nCr(n,r);

    cout << "The value of " << n << "C" << r << "=" << result << endl;
    return 0;
}