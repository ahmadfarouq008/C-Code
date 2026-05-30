#include <iostream> 
using namespace std;

int main () {
    int units=0;

    for (int i=1; i<=5; i++) {

        cout << "Enter electricity units consumed of house " << i << ": " << endl;
        cin >> units ;
        
        if ( units >= 300) {
            cout << "House " << i << ": High Bill" << endl;
        }
        else {
            cout << "Normal Bill" << endl;
        }
    }
    return 0;
}
