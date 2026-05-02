#include <iostream>
using namespace std;

int printHello() {
    cout << "Hello." << endl;
    return 3;
}

int main () {
    cout << printHello() << endl;
    return 0;
}
