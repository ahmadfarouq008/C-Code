#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter a three didgit integer: ";
    cin >> num1 >> num2 >> num3;
    
    if(num1==num2 && num2==num3 ) {
        cout << "All digits are the same." << endl;    
    }
    else {
        cout << "All digits are not the same." << endl;
     }
    
    return 0;

}