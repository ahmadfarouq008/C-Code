// e^x = 1 + x + x²/2! + x³/3! + x⁴/4! + ...
//       |   |     |       |       |
//      i=0 i=1   i=2     i=3      i=4   ...  i=10(aproximate)
#include <iostream>
using namespace std ;

int main () {
    
    int x =0;
    double power=1;
    double factorial=1;
    double sum =0;

    cout << "Enter x: " ;
    cin >> x ;

    for (int i=0; i<=10; i++) {

        if (i>0) {                       // we use this to print e^x = 1 in i=0.so it skips i=0 and make power=1 and factorial=1 as initiated. OR we can seprately cout e^0=1 and start with i=1. 
            
            power = power * x ;          // Calculates x¹, x², x³, x⁴ ...
            factorial = factorial * i ;  // Calculates 1!, 2!, 3!, 4! ...
        }
        sum = sum + (power / factorial) ; // add above both terms.
    }
    cout << "e^" << x << " = " << sum <<  endl;  
    return 0;
}