#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int ascii = ch;

    cout << "ASCII value: " << ascii << endl;
    cout << "Back to character: " << (char)ascii << endl;

    return 0;
}