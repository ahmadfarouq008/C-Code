#include <iostream>
using namespace std;

int main() {

    int bill = 0;
    int member = 0;

    for (int i = 1; i <= 4; i++) {

        cout << "Enter bill and membership status for Customer " << i << ": ";

        cin >> bill >> member;

        if (member == 1 ) {

            if (bill > 5000) {
                cout << "Customer " << i << ": Free Dessert" << endl;
            }
            else {   
               cout << "Customer " << i << ": No Free Dessert" << endl;
           }
           
        }
        else {
            cout << "Customer " << i << ": No Free Dessert" << endl;
        }
    }
    return 0;
}