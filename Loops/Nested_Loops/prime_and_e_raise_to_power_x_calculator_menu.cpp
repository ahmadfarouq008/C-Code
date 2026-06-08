#include <iostream>
using namespace std ;

int main () {
    char choice = '0';

    do {
        cout << endl;
        cout << "1. Compute e^x" << endl;
        cout << "2. Find and print all prime numbers less than N" << endl;
        cout << "3. Print first N prime numbers" << endl;
        cout << "4. Count prime numbers less than N and check Even/Odd" << endl;
        cout << "e. Exit" << endl;

        cout <<"Enter choice: " ;
        cin >> choice ;

        if (choice == '1') {
            int x =0;
            double power=1;
            double factorial=1;
            double sum =0;

            cout << "Enter x: " ;
            cin >> x ;

            for (int i=0; i<=10; i++) {

                if (i>0) {          

                    power = power * x ;          
                    factorial = factorial * i ;  
            
                }
                sum = sum + (power / factorial) ;
            }

            cout << "e^" << x << " = " << sum <<  endl; 
        }
        else if (choice == 2) {
            
        }
    }
}