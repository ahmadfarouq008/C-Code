#include <iostream>
using namespace std;

int sum(int a, int b) {

    int sum = a+b;
    return sum;
}
int main () {

    cout << sum(10,5) << endl; // when run, the answer is 15 and we can repeat the answer multiple times if we write or call this 'sum() function' again amd again any number of times.
    
    return 0;
    
}
