#include <iostream>
using namespace std;

int main() {

    int num1=0;
    int num2=0;

    cout << "Enter the first integer" << endl;
    cin >> num1; 

    cout << "Enter the second intger" << endl;
    cin >> num2;
    

    if (num2 > num1) {
        cout << "The Larger number is " << num2 << endl;

    }
     
    else if (num1 > num2) {
        cout << "The larger numer is " << num1 << endl;
    }
    else {
        cout << "Both are equal" << endl;
    }

    return 0;

}