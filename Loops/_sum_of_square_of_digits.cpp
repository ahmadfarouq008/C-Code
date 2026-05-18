#include <iostream>
using namespace std;

int main () {
    int n=0;
    int sum=0;
    int d=0;
    int square=0;

    cout << "Enter number:" ;
    cin >> n;

    while (n>0) {
        d =n % 10;

        square = d * d;

        cout << "Digit is " << d << " its square is " << square << endl; // this is printed until all digits are squared in each seperate line.

        sum = sum + square;

        n = n / 10;
    }
    cout << "Square digit sum for the number is " << sum << endl; 
    return 0;
}