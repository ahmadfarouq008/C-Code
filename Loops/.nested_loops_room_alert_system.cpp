#include <iostream>
using namespace std ;

int main () {
    int detection =0;
    int door_status =0;

    cout << "Enter motion detection status and door status (1 for open, 0 for closed) :" << endl; 

    for (int i=1; i<=5; i++) {

        cin >> detection ;
        cin >> door_status ;

        if (detection == 1 && door_status == 1) {
            cout << "Room " << i << ": Alert" << endl; 
        }
        else {
            cout << "Room " << i << ": Safe" << endl;
        }


    }
}