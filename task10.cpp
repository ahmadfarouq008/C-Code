#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result1 = a + b * 2;
    int result2 = (a + b) * 2;

    cout << "Result 1 (a + b * 2): " << result1 << endl;
    cout << "Result 2 ((a + b) * 2): " << result2 << endl;

    // Explanation:
    // In result1: multiplication (*) has higher priority than addition (+)
    // So: b * 2 is calculated first, then added to a

    // In result2: parentheses () have highest priority
    // So: (a + b) is calculated first, then multiplied by 2

    return 0;
}