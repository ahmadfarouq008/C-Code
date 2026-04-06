#include <iostream>
using namespace std;

int main() {

    int num = 0;

    cout << "Enter an integer: ";
    cin >> num;
    
    if (num%5==0 && num%11==0) {
        cout << "The number is a multiple of both 5 and 11." << endl;
    
    }
    else if (num%5==0) {
        cout << "The number is a multiple of 5." << endl;
    
    }
    else if (num%11==0) {
        cout << "The number is a multiple of 11." << endl;
    
    }

    return 0;

}