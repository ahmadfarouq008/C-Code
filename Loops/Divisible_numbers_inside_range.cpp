#include <iostream> 
using namespace std;

int main () {

    int n=0;
    int start=0;  // Starting value of range.
    int end=0;    // Ending value of range.

    cout << "Enter start of range:" ;
    cin >> start;

    cout << "Enter end of range:" ;
    cin >> end;

    cout << "Enter a number:" ;
    cin >> n;

    cout << "Number divisible by " << n << ": " ;

    for (int i=start; i<=end; i++) {

        if (i % n == 0) {

            cout << i << " " ;
        }
    }
    return 0;
}