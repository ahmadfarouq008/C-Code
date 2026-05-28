// In this code two count variables are used , count only refers to the position of the divisor . Both the counts are compared to print "," and "and."
#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int count_a = 0;
    int count_b = 0;

    cout << "Enter number: ";
    cin >> n;

    // Count divisors

    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {

            count_a++;
        }
    }

    cout << "Divisors of " << n << " are ";

    // Print divisors

    for (int i = 1; i <= n; i++) {

        if (n % i == 0) {

            count_b++;

            if (count_b == count_a) {

                cout << "and " << i;
            }

            else {

                cout << i;

                if (count_b < count_a - 1) {

                    cout << ", ";
                }

                else {

                    cout << " ";
                }
            }
        }
    }

    cout << endl;

    cout << "Total number of divisors of "
         << n << " are " << count_a << endl;

    return 0;
}


/* // Alternative code made by me, which works only for even numbers and for numbers greater then 10.    

#include <iostream>
using namespace std ;

int main () {
    int n =0;
    int count =0;

    cout << "Enter number: " ;
    cin >> n;
    
    cout << "Divisors of " << n << " are " ;

    for ( int i=1; i<=n ;i++ ) {

        if (n % i == 0){
            cout << i ;
            
            count++ ;

            if (i < n-i) {      // The "," is printed until the last divisor(which is eqaula to n) is reached . Since we do ont want the "," before last divisor but we want "," before the second last divisor so we code "i < n-i" which means the "the divisor before the last divisor" [i.e second last divisor (n-i)] . 
                cout << ", " ;
            }
            if (i == n-i) {     // As we want to print "and" after the 2nd last divisor(n-i) so and is only printed when the divisor count (i) reaches or becomes equal to second last divisor (n-i).   
                cout << " and ";
            }  
        } 
    }
    cout << endl; 
    cout << "Total number of divisors of " << n << " are " << count << endl; 

    return 0;
}
*/

