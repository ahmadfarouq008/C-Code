#include <iostream>
using namespace std;

int main () {

    int n=0;

    // variables for 3 didit numbers.
    int last_d3 =0;
    int second_d3=0;
    int first_d3=0;

    // variables for 6 digit numbers.
    int d6=0;
    int d5=0;
    int d4=0;
    int d3=0;
    int d2=0;
    int d1=0;

    cout << "Enter numbers:";
    cin >> n;

    if (n>=100 && n<=999) {

        last_d3=n%10;
        n=n/10;

        second_d3=n%10;
        n=n/10;

        first_d3=n%10;
        n=n/10;

        if (last_d3==first_d3) {

            cout << "3 digit palindrome." << endl;
        }
        else {
            cout << "Not a 3 digit palindrome." << endl;
        } 
        
    }

    else if (n>=100000 && n<=999999) {

        d6=n%10;
        n=n/10;

        d5=n%10;
        n=n/10;

        d4=n%10;
        n=n/10;

        d3=n%10;
        n=n/10;

        d2=n%10;
        n=n/10;

        d1=n%10;
        n=n/10;

        if (d6==d1) {

            cout << "6 digit palindrome." << endl;
        }
        else {
            cout << "Not a 6 digit palindrome." << endl;
        } 
        
    }
    else {
        cout << "not a 3 or 6 digit number." << endl; 
    }    
    return 0;  
} 

