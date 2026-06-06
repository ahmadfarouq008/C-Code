#include <iostream>
using namespace std ;


int main () {
    int seat_status = 0;

    for (int i=1; i<=3; i++) {

        cout << "Bus " << i << ":" << endl;
        cout << "Enter seat status (1 for booked, 0 for available): " << endl;
        
        for (int i=1 ; i<=4 ;i++) {

            cin >> seat_status ;

            if (seat_status == 1) {
                cout << "seat " << i << ": Booked " << endl;

            }
            else {
                cout << "seat " << i << ": Available " << endl;
            }
        } 
    }
    return 0;
}