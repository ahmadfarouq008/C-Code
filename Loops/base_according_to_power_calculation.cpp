#include <iostream>
using namespace std;

int main () {

    int n=0;
    int base=0;
    int exponent=0;
    int result=1; // It starts from 1 because anything multiplied with 0 gives 0. 

    cout << "Enter base:" ; // Number to multiply.
    cin >> base;

    cout << "Enter exponent:";  // Now many times to multiply. i.e power of base. 
    cin >> exponent ;

    for (int i=1;i<=exponent;i++) {
        result = result * base ; // Multiply base by itself exponent times and result stores the value of base when multiplied with 1(initially).Each iteration multiplies base again. 

    }
    cout << "Result is " << result << endl;
    return 0;
}