// Def : Binary is found using repeated division of number by 2 and then its quotient by 2 and storing its remainders(1 or 0) until the quotient becomes 0. All the remianders of 1 and 0 are combined to form binary number. 

#include <iostream>
using namespace std;

int main () {
    int n=0;
    int remainder=0;
    int digit=1; // this variable shows the places of digits(1s -> 10s -> 100s -> 1000s ...) of inputed numbers to fit the binary number. If binary no./remainder is 1 , it is stored in the place of 1s.If it is 10 the place of digts is increased to 10s. If it is 101,the place of digits is increased to 100s and so on.   
    int binary=0;

    cout << "Entr number: " ;
    cin >> n ;

    int original_n = n;

    while (n>0) {

        remainder = n % 2; // Fisrt we find the remiander . 

        digit = digit * 10 ; // Second we make the place of digits(1s in 1st iter, 10s in 2nd iter 100s in 3rd iter and so on.) to put the remainder (e.g ,1 in 1st iter and 10 in 2nd iter and 101 in 3rd iter and so on.) in the required place of the digits of numbers (n).    

        binary = binary + (remainder * digit) ; //Third, the formula which stores the binary digit(remainder) at correct place (when multiplied with digit variable) .

        n = n / 2;  // As remainder of n in first iter is founded , we then move to next remaining numbers(quotient) for their modulo by 2 in next loop, until n(quotient) becomes 0.  

    }
    cout << "Number is " << original_n << " and its binary equivilant is " << binary << endl;; 
 

}