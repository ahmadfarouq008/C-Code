#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter two integers and an operator (+, -, *, /): ";
    cin >> num1 >> num2 >> op;

    
    switch (op) {
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
       
            if (num2 != 0) {
                cout << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
          
            cout << "Invalid operation" << endl;
            break;
    }

    return 0;
}