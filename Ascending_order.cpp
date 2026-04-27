#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    if( num1<num2 && num2<num3 ) {
        cout << "Numbers in ascending order: " << num1 << num2 << num3 << endl;
    }

    else if (num3<num2 && num2<num1) {
        cout << "Numbers in ascending order: " << num3 << num2 << num1 << endl;
    }

    else if (num2<num1 && num1<num3) {
        cout << "Numbers in ascending order: " << num2 << num1 << num3 << endl;
    }

    else if (num2<num3 && num3<num1) {
        cout << "Numbers in ascending order: " << num2 << num3 << num1 << endl;
    }
    
    else {
        cout << "Numbers in ascending order: " << num3 << num1 << num2 << endl;
    }

    return 0;

}