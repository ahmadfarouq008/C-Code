#include <iostream>
using namespace std;

int main () {
    float units=0;
    float subtotal=0;
    float surcharge=0;
    float totalBill=0;

    cout << "Enter number of units consumed:" ;
    cin >> units;

    if (units<=100) {
        subtotal= 100.00*0.50;
    }
    else if (units<=200) {
        subtotal= 50.00 + (units-100.00) * 0.75;
    }
    else if (units>=200) {
        subtotal= 125.00 + (units-200.00) * 1.20;
    }

    surcharge= subtotal * 20.0/100.0; // or 0.2
    totalBill= subtotal + surcharge;

    cout << "Total bill is:$" << totalBill  << endl;
    return 0;
}