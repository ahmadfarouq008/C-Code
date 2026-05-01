#include <iostream>
using namespace std;

int main() {
    float a=0;
    float b=0;
    float c=0;

    cout << "Enter three angles: ";
    cin >> a >> b >> c;

    // Optional: Check if it's a valid triangle first
    if (a + b + c != 180 || a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid angles! A triangle's angles must sum to 180." << endl;
    } 
    // Check for Right-Angled (Exactly one is 90)
    else if (a == 90 || b == 90 || c == 90) {
        cout << "The triangle is right-angled." << endl;
    } 
    // Check for Obtuse-Angled (Exactly one is > 90)
    else if (a > 90 || b > 90 || c > 90) {
        cout << "The triangle is obtuse-angled." << endl;
    } 
    // Check for Acute-Angled (All must be < 90)
    else if (a<90 && b<90 && c<90) {
        cout << "The triangle is acute-angled." << endl;
    }

    return 0;
}