#include <iostream>
using namespace std;

int main() {

    int num1=0;
    int num2=0;
    int num3=0;

    cout << "Enter three integers:" << endl;
    cin >> num1 >> num2 >> num3;
    
    if (num3 < num1 && num3 < num2) {
        cout << "The smallest number is " << num3 << endl;

    }
    else if (num2 < num1 && num2 < num3) {
        cout << "The smallest number is " << num2 << endl;
    }
    else {
        cout << "The smallest number is " << num1 << endl;
    }
 
    return 0;

}