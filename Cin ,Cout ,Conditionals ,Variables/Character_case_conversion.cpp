#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // convert to lowercase
        cout << "Lowercase: " << ch << endl;
    }
    // Check if lowercase
    else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32; // convert to uppercase
        cout << "Uppercase: " << ch << endl;
    }
    else {
        cout << "Not an alphabet character" << endl;
    }

    return 0;
}