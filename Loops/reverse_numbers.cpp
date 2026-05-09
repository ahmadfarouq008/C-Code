#include <iostream>
using namespace std;

int main () {
    int n=0;
    int digit=0;
    int reverse=0;

    cout << "Enter positive integers:" ;
    cin >> n;

    while (n>0) {
        digit = n%10;                   // Last digit is founded.
        
        reverse = reverse * 10 + digit; // The formula by which last digit of input no.(n) at right is shifted to left at first and loops goes on for other remaining right numbers shifting them to left.  

        n = n/10;                       // It removes the last no. and loop goes on for remaining numbers.
        
    }
    cout << "Reversed number is " << reverse << endl;
    return 0;
}

/*
        STEP-BY-STEP LOGIC (FOR UNDERSTANDING):

        Suppose the number is 432

        We start with:
        reverse = 0

        We extract digits one by one from the last using % 10
        and remove them using / 10

        ----------------------------
        STEP 1:
        digit = 2
        reverse = 0

        reverse = reverse * 10 + digit
        = 0 * 10 + 2
        = 2

        Now:
        reverse = 2

        ----------------------------
        STEP 2:
        digit = 3
        reverse = 2

        reverse = reverse * 10 + digit
        = 2 * 10 + 3
        = 23

        Now:
        reverse = 23

        ----------------------------
        STEP 3:
        digit = 4
        reverse = 23

        reverse = reverse * 10 + digit
        = 23 * 10 + 4
        = 234

        FINAL RESULT:
        reverse = 234

        ----------------------------

        KEY IDEA:
        - By using formula, Multiply reverse by 10 to shift digits left and Add new digit at the end.
        - Repeat until number becomes 0.
    */
