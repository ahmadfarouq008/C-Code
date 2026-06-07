#include <iostream>
using namespace std;

int main () {
    int N=0;
    int digit=0;
    int sum=0;

    cout << "Armstrong numbers between 0 and 999 are:" << endl;

    for (N = 0; N <= 999; N++) {

        sum=0;

        int E=N;

        while (E>0){

            digit = E % 10;
            sum = sum + (digit*digit*digit) ; // done this because of 3 digits armstrong numbers.But we use 'p = p * digit' for any number of digits. 
            E = E / 10 ;
        }
        if (sum == N) {
            cout << N << " " ;
        } 
    }    
    return 0;
}  