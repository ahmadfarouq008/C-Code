#include <iostream>
using namespace std;

int main () {

    int n=0;

    int d1=0;
    int d2=0;
    int d3=0;

    cout << "Enter numbers:";
    cin >> n;

    if (n>=100 && n<=999) {

        d3=n%10;
        n=n/10;

        d2=n%10;
        n=n/10;

        d1=n%10;
        n=n/10;

        if (d1==d3) {

            cout << "The number is a palindrome." << endl;
        }
        else {
            cout << "The number is not a palindrome." << endl;
        } 
        
    }
    return 0;
}