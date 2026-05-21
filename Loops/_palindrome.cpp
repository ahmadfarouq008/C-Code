#include <iostream>
using namespace std ;

int main (){ 

    char check = '0';
    
    do {
        int n = 0;
        int d = 0;
        int reversed_n= 0;
        int original_n = 0;

        cout << "Enter the number:" ;
        cin >> n ;

        original_n = n;  // The original value of n is saved, i.e (1221). 

        while (n>0) {
            d = n % 10;
            reversed_n = (reversed_n * 10 ) + d ; // this finds the oppostite of original value of n i.e (original)1221 -> 1221 (reverse).
            n = n / 10;
            
        }
        if (original_n == reversed_n ) { // As palindrome means original value = reverse value. 
            
            cout << "This is a palindrome number." << endl;
        }
        else {
            
            cout << "This is not a palindrome." << endl;
        }

        cout << "Do you want to check again? (y/n): " ;
        cin >> check;

    } while (check=='y');
    cout << "Process cancelled." << endl;
    return 0;

}