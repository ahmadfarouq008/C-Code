#include <iostream>
using namespace std;

int main() {
    int x = 5;

    int y = x++ + ++x;  
    // x++ → use 5, then x becomes 6
    // ++x → first x becomes 7, then use 7
    // y = 5 + 7 = 12

    x = 5; // reset

    int z = --x + x--;  
    // --x → x becomes 4, use 4
    // x-- → use 4, then x becomes 3
    // z = 4 + 4 = 7

    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}