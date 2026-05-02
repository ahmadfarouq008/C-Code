#include <iostream>
using namespace std;

int main () {

    int n=0;
    int sum=0;

    cout << "Enter number:";
    cin >>n;

    for (int i=0;i<=n;i++) {

        if (i % 2 != 0) {
            sum+=i;
        }
    }
    cout << "sum=" << sum << endl;
    return 0;
}