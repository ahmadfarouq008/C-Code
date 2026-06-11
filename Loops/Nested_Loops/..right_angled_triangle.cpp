#include <iostream>
using namespace std ;

int main () {
    int n = 0;
    int stars = 0;

    cout << "Enter n : " ;
    cin >> n;

    stars=1; // On fisrt line there is one star so we start with one.

    for (int j=1; j<=n; j++) {

        for (int i=1; i<=stars; i++) {
            cout << "*" ;
            
        }
        stars++ ; // as the outer loop increases the column , the stars also icreases.
        cout << endl;
    }
    return 0;
}