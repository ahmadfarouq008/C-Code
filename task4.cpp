#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int largest, second, smallest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    second = (a + b + c) - (largest + smallest);

    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << second << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}