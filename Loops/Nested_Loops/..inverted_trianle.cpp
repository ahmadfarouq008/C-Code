#include <iostream>
using namespace std ;

int main () {
    int n=0;
    int stars=0;

    cout << "Enter n : " ;
    cin >> n ;

    stars = n ; // here patteren starts only with the number entered.

    for (int i=1; i<=n ;i++) {

        for (int j=1; j<=stars ;j++) {
            cout << "*" ;
        }
        stars-- ;  // this deareses n.
        cout << endl;     
    }
    return 0;
}    

/* Run :

Enter n : 5
***** // here star = 5(n) only print this in start then star-- dearese it until 1 .
****
***
**
*

*/