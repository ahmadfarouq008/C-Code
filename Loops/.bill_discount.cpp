#include <iostream> 
using namespace std;

int main () {
    int bill=0;

    for (int i=1; i<=5; i++) {

        cout << "Enter total bill amount of employee " << i << ": " << endl;
        cin >> bill ;
        
        if (bill > 5000) {
            cout << "Customer " << i << ": 20% Discount" << endl;
        }
        else if (bill > 3000) {
            cout << "Customer " << i << ": 10% Discount" << endl;
        }
        else {
            cout << "No Discount" << endl;
        }
    }
    return 0;
}
