#include <iostream>
using namespace std ;

int main () {
    int n=0;
    int term=0; 
    int sum=0;

    cout << "Input number of terms: " ;
    cin >> n;

    for (int i=1; i<=n; i++) {

        term = term * 10 + 1 ; // formula for series generation. 1-> 11 -> 111 -> 1111 -> 11111. first 0 becomes 11 then 11 becomes 111 and so on.

        cout << term ;

        sum = sum + term ; // sum of each terms not total terms. 

        if (i<n) {           // before the i becomes equal to n, '+' is printed until i is less then n.
            cout << " + " ; 
        }

    }
    cout << endl;
    cout << "The sum of the series is: " << sum << endl;

}