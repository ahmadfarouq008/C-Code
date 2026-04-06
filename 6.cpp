#include <iostream>
using namespace std;

int main() {

    int side1=0;
    int side2=0;
    int side3=0;

    cout << "Enter three side lengths: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is isosceles." << endl;
    }
    else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}