#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int square = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        square = i * i;  // In iteration i=1 ,1 is squared, in i=2, 2 is squared , in i=3 , 3 is squared and so on.

        cout << i << "^2 = " << square << endl;
    }
    return 0;
}