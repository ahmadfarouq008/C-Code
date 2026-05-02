#include <iostream>
using namespace std;

double sum(double a, double b) {     // in parameters we declare variables.
    double s=a+b;                    // here the process occurs along with data-type declaration.
    return s;
}

int main () {

    cout << sum(10.2,20.5) << endl;
    return 0;
}