#include <iostream>
using namespace std;

int main() {

    int n=0;
    int sum=0;

    cout << "Enter a positive integer:" ;
    cin >> n;

    for (int i=1;i<=n;i++) { 
        sum += i;

    }
    cout << "Sum is " << sum << endl;
    return 0;

}