#include <iostream>
using namespace std;

int main() {

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;

    cout << "Enter a five didgit integer: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    if(num1 == num5) {
        cout << "The first and last digits are the same." << endl;    
    }
    else if (num1 != num5) {
        cout << "The first and last digits are not the same." << endl;
     }
    
    return 0;

}