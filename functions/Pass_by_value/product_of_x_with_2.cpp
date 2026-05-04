#include <iostream> 
using namespace std;

void product (int x) { // here the copy of argument(x=5) from main() is passed to parameter(int x) in product() function. 
    x = 2*x;
    cout << "x=" << x << endl; // it will print x=10.
    return;
} 


int main () {
    int x=5;
    product(x); // here if we write product(x) inside cout then x=10 will be printed two times.

    cout << "x=" << x << endl; // it will print x=5.
    return 0;
}

