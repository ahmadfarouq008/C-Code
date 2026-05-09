#include <iostream>
using namespace std;

int main() {

    int age1 = 0;
    int age2 = 0;
    int age3 = 0;

    cout << "Enter the ages of three people: ";
    cin >> age1 >> age2 >> age3;
    
    if (age1>age2 && age1>age3) {
        cout << "The oldest age is " << age1 << "." << endl;
    
    }
    else if (age2>age1 && age2>age3) {
        cout << "The oldest age is " << age2 << "." << endl;

    }
    else if (age3>age1 && age3>age2) {
        cout << "The oldest age is " << age3 << "." << endl;

    }
    return 0;

}