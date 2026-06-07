#include <iostream>
using namespace std ;

int main () {
    int n=0;
    int sum=0;
    int square=0;

    cout << "Enter an integer larger then 1: " ;
    cin >> n ;

    for (int i=1;i<=n;i++) {

        square = i*i ;
        cout << square << endl;
        sum = sum + square ;
    }
    cout << "sum = " << sum << endl;
}