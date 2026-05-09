#include <iostream>
using namespace std;

int main() {

    int num=0;
    int max=0;

    cout << "Enter a number:" ;     // We take input before loop starts because loop condition needs a value.
    cin >> num;

    max=num;                        // The value entered by user is stored in max as num (largest number).Initailly first entered num(0) becomes max.

    while(num!=0) {                 // The loops stops when 0 is entered. 

        if (num>max) {              // The input num stored in max is updated if the num entered by user is greater then the num stored in max. 
            max=num;   
        }

        cout << "Enter a number:" ; // The input num is taken continously until num = 0 is entered.Without this loop becomes infinite.
        cin >> num;
    }
    cout << "Maximum is " << max << endl;
    return 0;
}