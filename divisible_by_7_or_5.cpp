#include <iostream>
using namespace std;

int main() {

    int num = 0;

    cout << "Enter an integer: ";
    cin >> num;
    
    if (num%7==0 && num%5!=0) {
        cout << "The number is divisible by 7 but not by 5." << endl;
    
    }
    else if (num%7==0 && num%5==0) {
        cout << "The number is divisible by both 7 and 5." << endl;
    
    }
    else if (num%7!=0) {
        cout << "The number is not divisible by 7." << endl;
    
    }

    return 0;

}