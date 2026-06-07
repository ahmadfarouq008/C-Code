#include <iostream>
using namespace std;

int main () {
    int n=0;
    int digit_find=0;
    int digit=0;
    int position=1;

    cout << "Enter a number (0 - 9999): " ;
    cin >> n;
    
    cout << "Enter digit to find: " ;
    cin >> digit_find;

    while (n>0) {
        digit=n%10;        // extracts digit.

        if (digit == digit_find) {   // if extracted digit is equal to 'digit to find' then this 'if' statement works otherwise postion upadates and we move to next number by n=n/10. 

            if (position == 1) {
                cout << "Digit " << digit_find << " is at ones/units place." << endl;
            }
            else if (position == 2) {
                cout << "Digit " << digit_find << " is at tens place." << endl;
            }
            else if (position == 3) {
                cout << "Digit " << digit_find << " is at hundreds place." << endl;
            }
            else if (position == 4) {
                cout << "Digit " << digit_find << " is at thousands place." << endl;
            }
        }
        n=n/10;
        position++;
    }
    return 0;
}

