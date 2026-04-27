#include <iostream>
using namespace std;

int main() {

    int num1=0;
    int num2=0;

    cout << "Enter the first integer:" << endl;
    cin >> num1; 

    cout << "Enter the second intger:" << endl;
    cin >> num2;
    

    if (num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << endl;
    }
     
    else {
        cout <<num1 << " is not a multiple of " << num2 << endl;
    }

    return 0;

}