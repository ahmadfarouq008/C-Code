#include <iostream> 
using namespace std;

int main () {
    int balance=0;
    int withdrawal=0;

    for (int i=1; i<=3; i++) {

        cout << "Enter account balance of customer " << i << ": " ;
        cin >> balance ;
    
        cout << "Enter withdrawal amount of customer " << i << ": " ;
        cin >> withdrawal ;
        
        if (balance >= withdrawal) {
            cout << "Customer " << i << ": Transaction successful." << endl;
        }
        else {
            cout << "Customer " << i << ": Insufficient Balance." << endl;
        }
        cout << endl;
    }
    return 0;
}
